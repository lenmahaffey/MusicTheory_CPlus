#pragma once
#include "Scale.h"

//Constructors
Music::Scale::Scale() :
	Music::Object(Music::ChromaticScalePosition::NONE),
	pattern{ pattern },
	scale{ Music::Note::Note(Music::ChromaticScalePosition::NONE) },
	isMajor(true),
	scalePatternLength(sizeof(pattern) / sizeof(pattern[0]))
{
}

Music::Scale::Scale( Music::ChromaticScalePosition note,  Music::Step (&pattern)[7],  bool isMajor) :
	Music::Object(note),
	pattern{pattern},
	scale{ Music::Note::Note(Music::ChromaticScalePosition::NONE) },
	isMajor(isMajor),
	scalePatternLength(sizeof(pattern) / sizeof(pattern[0]))
{
	Music::Scale::setScale(Music::Scale::getPosition());
}

Music::Scale::Scale( int note,  Music::Step(&pattern)[7],  bool isMajor) :
	Object(note),
	pattern{ pattern },
	scale{ Music::Note::Note(Music::ChromaticScalePosition::NONE) },
	isMajor(isMajor),
	scalePatternLength(sizeof(pattern) / sizeof(pattern[0]))
{
		Music::Scale::setScale(Music::Scale::getPosition());
}

Music::Scale::Scale( std::string note,  Music::Step(&pattern)[7],  bool isMajor) :
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

//Methods
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

//Operator Overloads
Music::Scale& Music::Scale::operator =(Music::Scale& other)
{
	if (*this != other)
	{
		this->
		this->position = other.position;
		this->isMajor = other.isMajor;
		this->setScale(this->position);
		this->textName = this->getNameAsString();
		return other;
	}
	else
	{
		return *this;
	}
}
Music::Scale Music::Scale::operator ++()
{
	Music::Scale newScale = Music::Scale((int)position + 1, Music::Scale::pattern, Music::Scale::isMajor);
	*this = newScale;
	return *this;
}
Music::Scale Music::Scale::operator ++(int)
{
	Music::Scale temp = *this;
	Music::Scale newScale = Music::Scale((int)position + 1, Music::Scale::pattern, Music::Scale::isMajor);
	*this = newScale;
	return temp;
}
Music::Scale Music::Scale::operator --()
{
	Music::Scale newScale = Music::Scale((int)position - 1, Music::Scale::pattern, Music::Scale::isMajor);
	*this = newScale;
	return newScale;
}
Music::Scale Music::Scale::operator --(int)
{
	Music::Scale temp = *this;
	Music::Scale newScale = Music::Scale((int)position - 1, Music::Scale::pattern, Music::Scale::isMajor);
	*this = newScale;
	return temp;
}
bool Music::Scale::operator ==( Music::Scale otherScale)
{
	return position == otherScale.position;
}
bool Music::Scale::operator !=( Music::Scale otherScale)
{
	return position != otherScale.position;
}
bool Music::Scale::operator <( Music::Scale otherScale)
{
	return (int)position < (int)otherScale.position;
}
bool Music::Scale::operator <=( Music::Scale otherScale)
{
	return (int)position <= (int)otherScale.position;
}
bool Music::Scale::operator >( Music::Scale otherScale)
{
	return (int)position > (int)otherScale.position;
}
bool Music::Scale::operator >=( Music::Scale otherScale)
{
	return (int)position >= (int)otherScale.position;
}