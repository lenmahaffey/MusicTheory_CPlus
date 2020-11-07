#pragma once
#include "Scale.h"
#include "ScalePattern.h"
//Constructors
Music::Scale::Scale() :
	Music::Object(Music::Position::ChromaticScalePosition::NONE),
	pattern{ *ScalePattern().emptyScalePattern },
	scale{ Music::Note::Note(Music::Position::ChromaticScalePosition::NONE) },
	isMajor(true),
	scalePatternLength()
{
}

Music::Scale::Scale( Music::Position::ChromaticScalePosition note,  Music::Position::Step pattern[7],  bool isMajor) :
	Music::Object(note),
	pattern{ *pattern },
	scale{ Music::Note::Note(Music::Position::ChromaticScalePosition::NONE) },
	isMajor(isMajor),
	scalePatternLength(7)
{
	Music::Scale::setScale(Music::Scale::getPosition());
}

Music::Scale::Scale( int note,  Music::Position::Step pattern[7],  bool isMajor) :
	Object(note),
	pattern{ *pattern },
	scale{ Music::Note::Note(Music::Position::ChromaticScalePosition::NONE) },
	isMajor(isMajor),
	scalePatternLength(7)
{
		Music::Scale::setScale(Music::Scale::getPosition());
}

Music::Scale::Scale( std::string note,  Music::Position::Step pattern[7],  bool isMajor) :
	Object(note),
	pattern{ *pattern },
	scale{ Music::Note(Music::Position::ChromaticScalePosition::NONE) },
	isMajor(isMajor),
	scalePatternLength(7)
{
	Music::Scale::setScale(Music::Scale::getPosition());
}

//Accessors
std::string Music::Scale::isMajorOrMinor() const
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
std::string Music::Scale::getScaleAsString() const
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
void Music::Scale::setScale(Music::Position::ChromaticScalePosition note)
{
	Music::Scale::scale[0] = Music::Note(note);
	Music::Note nextNote = note;
	for (int i = 1; i < scalePatternLength; i++) {
		Music::Position::Step step = Music::Scale::pattern[i];
		if (step == Music::Position::Step::NONE)
			continue;

		else if (step == Music::Position::Step::Whole)
		{
			nextNote = nextNote.accendFullStep();;
			Music::Scale::scale[i] = nextNote;
		}

		else if (step == Music::Position::Step::Half)
		{
			nextNote = nextNote.accendHalfStep();
			Music::Scale::scale[i] = Note(nextNote);
		}

		else if (step == Music::Position::Step::WholeandAHalf)
		{
			nextNote = nextNote.accendStepAndAHalf();
			Music::Scale::scale[i] = Note(nextNote);
		}
	}
}

//Operator Overloads
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
bool Music::Scale::operator ==(const Music::Scale otherScale) const
{
	return position == otherScale.position;
}
bool Music::Scale::operator !=(const Music::Scale otherScale) const
{
	return position != otherScale.position;
}
bool Music::Scale::operator <(const Music::Scale otherScale) const
{
	return position < otherScale.position;
}
bool Music::Scale::operator <=(const Music::Scale otherScale) const
{
	return position <= otherScale.position;
}
bool Music::Scale::operator >(const Music::Scale otherScale) const
{
	return position > otherScale.position;
}
bool Music::Scale::operator >=(const Music::Scale otherScale) const
{
	return position >= otherScale.position;
}