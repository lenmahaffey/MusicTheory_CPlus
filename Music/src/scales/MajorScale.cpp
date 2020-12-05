/*
	CSC160 8N0 Computer Science 1
	File: MajorScale.cpp
	By: Len Mahaffey
	Project: Final Project
	Last Edited: 12/5/20
	Description: MajorScale class implementation. Implements virtual Scale class
*/
#pragma once
#include "MajorScale.h"

Music::MajorScale::MajorScale() : Music::Scale()
{
}

Music::MajorScale::MajorScale(Music::Pitch note) : Music::Scale(note, pattern, true)
{
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	setScale(note);
	resolveScale();
	setAllChords();
}

Music::MajorScale::MajorScale(int note) : Music::Scale(note, pattern, true)
{
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	setScale(Music::Pitch::GetPositionFromChromaticScale(note));
	resolveScale();
	setAllChords();
}

Music::MajorScale::MajorScale(std::string note) : Music::Scale(note, pattern, true)
{
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	setScale(Music::Pitch::GetPositionFromChromaticScale(note));
	resolveScale();
	setAllChords();
}

//Function to resolve the names of the notes of a scale.
//Two rules: Each note should appear once and there should only be sharps OR flats but NOT both
void Music::MajorScale::resolveScale()
{
	for (int i = 0; i < Music::Scale::scalePatternLength; i++)
	{
		Music::Note previousNote;
		Music::Note currentNote;
		std::string currentNoteNameFrontPosition;
		std::string currentNoteNameBackPosition;
		std::string previousNoteName;
		std::string currentNoteNewName;
		currentNote = unresolvedScale[i];

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
			//The first note of the scale is the name of the scale
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