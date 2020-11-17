#pragma once
#include "MelodicMinorScale.h"

Music::MelodicMinorScale::MelodicMinorScale(Music::Position::ChromaticScalePosition note) :
	Music::Scale(note, pattern, isMajor)
{
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	Music::MelodicMinorScale::setScale(note);
}

Music::MelodicMinorScale::MelodicMinorScale(int note) :
	Music::Scale(note, pattern, isMajor)
{
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	Music::MelodicMinorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}

Music::MelodicMinorScale::MelodicMinorScale(char note) :
	Music::Scale(note, pattern, isMajor)
{
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	Music::MelodicMinorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}

void Music::MelodicMinorScale::resolveScale()
{
	for (int i = 0; i < Music::Scale::scalePatternLength; i++)
	{
		int distance;
		Music::Note previousNote;
		Music::Note currentNote;
		std::string currentNoteNameFrontPosition;
		std::string currentNoteNameBackPosition;
		std::string previousNoteName;
		std::string currentNoteNewName;
		currentNote = Music::MelodicMinorScale::unresolvedScale[i];

		//If the note length is one or 2 then there is nothing to resolve
		if (currentNote.GetName().length() == 1)
		{
			scale[i] = currentNote;
			continue;
		}
		if (currentNote.GetName().length() == 2)
		{
			scale[i] = currentNote;
			continue;
		}

		//Get the two possible names of the note
		if (currentNote.GetName().length() > 2) {
			currentNoteNameFrontPosition = currentNote.GetPosition().GetPositionAsString();
			currentNoteNameFrontPosition.pop_back();
			currentNoteNameFrontPosition.pop_back();
			//frontPosition.pop_back();
			currentNoteNameBackPosition = currentNote.GetPosition().GetPositionAsString();
			currentNoteNameBackPosition.erase(0, 2);
		}
		// If this is the first iteration then there is no previous note to compare to.
		// The first note will have to be set manually.
		if (i == 0)
		{
			currentNote.SetName(name);
			if (currentNote.GetName() == "As") {
				currentNote.SetName("Bf");
			}
			else if (currentNote.GetName() == "Cs") {
				currentNote.SetName("Df");
			}
			else if (currentNote.GetName() == "Cs") {
				currentNote.SetName("Df");
			}
			else if (currentNote.GetName() == "Ds") {
				currentNote.SetName("Ef");
			}
			else if (currentNote.GetName() == "Fs") {
				currentNote.SetName("Fs");
			}
			else if (currentNote.GetName() == "Gs") {
				currentNote.SetName("Af");
			}
			scale[i] = currentNote;
			continue;
		}
		//Get the last resolved note and increment the letter to get the next note
		//Then find the matching letter of the two possible names.
		else if (i >= 1)
		{
			previousNote = scale[i - 1];
			previousNoteName = previousNote.GetName();
			if (previousNoteName.length() > 1) { previousNoteName.pop_back(); }

			currentNoteNewName = ++previousNoteName[0];
			if (currentNoteNewName == "H") {
				currentNoteNewName = "A";
			}
			if (currentNoteNameFrontPosition[0] == currentNoteNewName[0]) {
				currentNote.SetName(currentNoteNameFrontPosition);
			}
			else
			{
				currentNote.SetName(currentNoteNameBackPosition);
			}
			scale[i] = currentNote;
		}
	}
}