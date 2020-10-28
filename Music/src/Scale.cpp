#pragma once
#include "Scale.h"

// Constructors
Music::Scale::Scale(Music::ChromaticScale note, const Music::Step (&pattern)[7], const bool isMajor) :
	Object(note),
	pattern{pattern},
	scale{Music::Note()},
	isMajor(isMajor),
	scalePatternLength(sizeof(pattern) / sizeof(pattern[0]))
{
	Music::Scale::setScale(Music::Scale::getChromaticScalePosition());
}

Music::Scale::Scale(int note, const Music::Step(&pattern)[7], const bool isMajor) :
	Object(note),
	pattern{ pattern },
	scale{ Music::Note() },
	isMajor(isMajor),
	scalePatternLength(sizeof(pattern) / sizeof(pattern[0]))
	{
		Music::Scale::setScale(Music::Scale::getChromaticScalePosition());
	}

Music::Scale::Scale(char note, const Music::Step(&pattern)[7], const bool isMajor) :
	Object(note),
	pattern{ pattern },
	scale{ Music::Note() },
	isMajor(isMajor),
	scalePatternLength(sizeof(pattern) / sizeof(pattern[0]))
{
	Music::Scale::setScale(Music::Scale::getChromaticScalePosition());
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
	Music::Scale::scale[0] = 0;
	Music::Scale::scale[0] = Music::Note(note);
	Music::ChromaticScale nextNote = Music::Note(note).getChromaticScalePosition();
	for (int i = 1; i < scalePatternLength; i++) {

		if (Music::Scale::pattern[i] == Music::Step::NONE)
			continue;

		else if (Music::Scale::pattern[i] == Music::Step::Whole)
		{
			nextNote = Music::Object::goFullStep(nextNote);
			Music::Scale::scale[i] = Note(nextNote);
		}

		else if (Music::Scale::pattern[i] == Music::Step::Half)
		{
			nextNote = Music::Object::goHalfStep(nextNote);
			Music::Scale::scale[i] = Note(nextNote);
		}

		else if (Music::Scale::pattern[i] == Music::Step::WholeandAHalf)
		{
			nextNote = Music::Object::goStepAndAHalf(nextNote);
			Music::Scale::scale[i] = Note(nextNote);
		}
	}
}