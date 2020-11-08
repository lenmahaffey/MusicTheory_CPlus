#pragma once
#include "Scale.h"

//Constructors
Music::Scale::Scale() :
	Music::Object(),
	pattern{ pattern },
	scale{ Music::Note::Note(Music::Position::ChromaticScalePosition::NONE) },
	isMajor(true),
	scalePatternLength(sizeof(pattern) / sizeof(pattern[0]))
{
}

Music::Scale::Scale( Music::Position::ChromaticScalePosition note,  Music::Position::Step (&pattern)[7],  bool isMajor) :
	Music::Object(note),
	pattern{pattern},
	scale{ Music::Note::Note(Music::Position::ChromaticScalePosition::NONE) },
	isMajor(isMajor),
	scalePatternLength(sizeof(pattern) / sizeof(pattern[0]))
{
	Music::Scale::setScale(Music::Scale::GetPosition());
}

Music::Scale::Scale( int note,  Music::Position::Step(&pattern)[7],  bool isMajor) :
	Music::Object(note),
	pattern{ pattern },
	scale{ Music::Note::Note(Music::Position::ChromaticScalePosition::NONE) },
	isMajor(isMajor),
	scalePatternLength(sizeof(pattern) / sizeof(pattern[0]))
{
		Music::Scale::setScale(Music::Scale::GetPosition());
}

Music::Scale::Scale( std::string note,  Music::Position::Step(&pattern)[7],  bool isMajor) :
	Music::Object(note),
	pattern{ pattern },
	scale{ Music::Note(Music::Position::ChromaticScalePosition::NONE) },
	isMajor(isMajor),
	scalePatternLength(sizeof(pattern) / sizeof(pattern[0]))
{
	Music::Scale::setScale(Music::Scale::GetPosition());
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
		if (note.GetNameAsString() != "NONE") {
			s += note.GetNameAsString();
			s += " ";
		}
	}
	s.pop_back();
	return s;
}

//Methods
void Music::Scale::setScale(Music::Position position)
{
	Music::Scale::scale[0] = Music::Note(position);
	Music::Note nextNote = position;
	for (int i = 1; i < scalePatternLength; i++) {

		if (Music::Scale::pattern[i] == Music::Position::Step::NONE)
			continue;

		else if (Music::Scale::pattern[i] == Music::Position::Step::Whole)
		{
			nextNote = nextNote.accendFullStep();;
			Music::Scale::scale[i] = nextNote;
		}

		else if (Music::Scale::pattern[i] == Music::Position::Step::Half)
		{
			nextNote = nextNote.accendHalfStep();
			Music::Scale::scale[i] = Note(nextNote);
		}

		else if (Music::Scale::pattern[i] == Music::Position::Step::WholeandAHalf)
		{
			nextNote = nextNote.accendStepAndAHalf();
			Music::Scale::scale[i] = Note(nextNote);
		}
	}
}

//Music::Scale Music::Scale::operator =(const Music::Scale& otherScale)
//{
//	if (this != &otherScale)
//	{
//		delete pattern;
//		this->position = otherScale.position;
//		*pattern = &
//	}
//}
//Music::Scale Music::Scale::operator =(const Music::Position& position)
//{
//
//
//}
//
//Music::Scale Music::Scale::operator =(const int& positionAsInt)
//{
//
//}
//Music::Scale Music::Scale::operator =(const std::string& positionAsString)
//{
//
//}
//
//Music::Scale Music::Scale::operator ++()
//{
//	Music::Scale newScale = Music::Scale((int)position + 1, pattern, isMajor);
//	*this = newScale;
//	return newScale;
//}
//Music::Scale Music::Scale::operator ++(int)
//{
//	Music::Scale temp = *this;
//	Music::Scale newScale = Music::Scale((int)position + 1, pattern, isMajor);
//	*this = newScale;
//	return temp;
//}
//Music::Scale Music::Scale::operator --()
//{
//	Music::Scale newScale = Music::Scale((int)position + 1, pattern, isMajor);
//	*this = newScale;
//	return newScale;
//}
//Music::Scale Music::Scale::operator --(int)
//{
//	Music::Scale temp = *this;
//	Music::Scale newScale = Music::Scale((int)position + 1, pattern, isMajor);
//	*this = newScale;
//	return temp;
//}

bool Music::Scale::operator ==(const Music::Scale& otherScale) const
{
	return Music::Scale::position == otherScale.position;
}
bool Music::Scale::operator !=(const Music::Scale& otherScale) const
{
	return Music::Scale::position != otherScale.position;
}
bool Music::Scale::operator <(const Music::Scale& otherScale) const
{
	return Music::Scale::position < otherScale.position;
}
bool Music::Scale::operator <=(const Music::Scale& otherScale) const
{
	return Music::Scale::position <= otherScale.position;
}
bool Music::Scale::operator >(const Music::Scale& otherScale) const
{
	return Music::Scale::position > otherScale.position;
}
bool Music::Scale::operator >=(const Music::Scale& otherScale) const
{
	return Music::Scale::position >= otherScale.position;
}