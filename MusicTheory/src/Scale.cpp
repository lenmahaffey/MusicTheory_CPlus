#pragma once
#include "Scale.h"

// Constructors
Music::Scale::Scale(Music::ChromaticScale note, Music::Step (&pattern)[7], bool isMajor) :
	Object(note),
	pattern{ pattern },
	isMajor(isMajor),
	scalePatternLength(sizeof(pattern) / sizeof(pattern[0]))
{
	Music::Scale::setScale(Music::Scale::getName());

}

Music::Scale::Scale(int note, Music::Step (&pattern)[7], bool isMajor) :
	Object(note),
	pattern{ pattern },
	isMajor(isMajor),
	scalePatternLength(sizeof(pattern) / sizeof(pattern[0]))
	{
		Music::Scale::setScale(Music::Scale::getName());
	}

Music::Scale::Scale(char note, Music::Step(&pattern)[7], bool isMajor) :
	Object(note),
	pattern{ pattern },
	isMajor(isMajor),
	scalePatternLength(sizeof(pattern) / sizeof(pattern[0]))
{
	Music::Scale::setScale(Music::Scale::getName());
}

// Accessors

std::string Music::Scale::isMajorOrMinor()
{
	if (Music::Scale::isMajor == true)
	{
		return "Major";
	}
	else
	{
		return "Minor";
	}
}


std::string Music::Scale::getScaleAsString()
{
	std::string s;
	for (Music::Note note : Music::Scale::scale)
	{
		if (note.getTextName() != "") {
			s += note.getTextName();
			s += " ";
		}
	}
	s.pop_back();
	return s;
}

void Music::Scale::setScale(Music::ChromaticScale note)
{
	Music::Scale::scale[0] = Music::Note(note);
	Music::ChromaticScale nextNote = Music::Note(note).getName();
	for (int i = 1; i < scalePatternLength; i++) {

		if (Music::Scale::pattern[i] == Music::Step::NONE)
			nextNote = Music::ChromaticScale::NONE;

		else if (Music::Scale::pattern[i] == Music::Step::Whole)
			nextNote = Music::Object::goFullStep(nextNote);

		else if (Music::Scale::pattern[i] == Music::Step::Half)
			nextNote = Music::Object::goHalfStep(nextNote);

		else if (Music::Scale::pattern[i] == Music::Step::WholeandAHalf)
			nextNote = Music::Object::goStepAndAHalf(nextNote);

		Music::Scale::scale[i] = Note(nextNote);
	}
}