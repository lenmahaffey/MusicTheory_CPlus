#pragma once
#include "Scale.h"

// Constructors
Music::Scale::Scale(const Music::ChromaticScalePosition note, const Music::Step (&pattern)[7], const bool isMajor) :
	Music::Object(note),
	pattern{pattern},
	scale{ Music::Note::Note(Music::ChromaticScalePosition::NONE) },
	isMajor(isMajor),
	scalePatternLength(sizeof(pattern) / sizeof(pattern[0]))
{
	Music::Scale::setScale(Music::Scale::getPosition());
}

Music::Scale::Scale(const int note, const Music::Step(&pattern)[7], const bool isMajor) :
	Object(note),
	pattern{ pattern },
	scale{ Music::Note::Note(Music::ChromaticScalePosition::NONE) },
	isMajor(isMajor),
	scalePatternLength(sizeof(pattern) / sizeof(pattern[0]))
{
		Music::Scale::setScale(Music::Scale::getPosition());
}

Music::Scale::Scale(const std::string note, const Music::Step(&pattern)[7], const bool isMajor) :
	Object(note),
	pattern{ pattern },
	scale{ Music::Note(Music::ChromaticScalePosition::NONE) },
	isMajor(isMajor),
	scalePatternLength(sizeof(pattern) / sizeof(pattern[0]))
{
	Music::Scale::setScale(Music::Scale::getPosition());
}

//Accessors

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
		if (note.getNameAsString() != "NONE") {
			s += note.getNameAsString();
			s += " ";
		}
	}
	s.pop_back();
	return s;
}

void Music::Scale::setScale(Music::ChromaticScalePosition note)
{
	Music::Scale::scale[0] = Music::Note(note);
	Music::Note nextNote = note;
	for (int i = 1; i < scalePatternLength; i++) {

		if (Music::Scale::pattern[i] == Music::Step::NONE)
			continue;

		else if (Music::Scale::pattern[i] == Music::Step::Whole)
		{
			nextNote = nextNote.accendFullStep();;
			Music::Scale::scale[i] = nextNote;
		}

		else if (Music::Scale::pattern[i] == Music::Step::Half)
		{
			nextNote = nextNote.accendHalfStep();
			Music::Scale::scale[i] = Note(nextNote);
		}

		else if (Music::Scale::pattern[i] == Music::Step::WholeandAHalf)
		{
			nextNote = nextNote.accendStepAndAHalf();
			Music::Scale::scale[i] = Note(nextNote);
		}
	}
}

const Music::Scale& Music::Scale::operator=(const Music::Scale& otherScale)
{
	if (this != &otherScale)
	{
		*this = otherScale;
	}
	return *this;
}