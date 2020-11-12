#pragma once
#include "Scale.h"

//Constructors
Music::Scale::Scale() :
	Music::Object(),
	pattern { Music::Position::Step::NONE },
	scale { 0 },
	resolvedScale{ 0 },
	unresolvedScale{ 0 }
{
	Music::Scale::isMajor = true;
	Music::Scale::scalePatternLength = sizeof(pattern) / sizeof(pattern[0]);
}

Music::Scale::Scale( Music::Position::ChromaticScalePosition note,  Music::Position::Step (&pattern)[7],  bool isMajor) :
	Music::Object(note),
	pattern{ Music::Position::Step::NONE },
	scale{ 0 },
	resolvedScale{ 0 },
	unresolvedScale{ 0 }
{
	Music::Scale::isMajor = isMajor;
	Music::Scale::scalePatternLength = sizeof(pattern) / sizeof(pattern[0]);
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	Music::Scale::setScale(Music::Scale::GetPosition());
}

Music::Scale::Scale( int note,  Music::Position::Step(&pattern)[7],  bool isMajor) :
	Music::Object(note),
	pattern{ Music::Position::Step::NONE },
	scale{ 0 },
	resolvedScale{ 0 },
	unresolvedScale{ 0 }
{
	isMajor = isMajor;
	scalePatternLength = sizeof(pattern) / sizeof(pattern[0]);
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	Music::Scale::setScale(Music::Scale::GetPosition());
}

Music::Scale::Scale(std::string note, Music::Position::Step(&pattern)[7], bool isMajor) :
	Music::Object(note),
	pattern{ Music::Position::Step::NONE },
	scale{ 0 },
	resolvedScale{ 0 },
	unresolvedScale{ 0 }
{
	isMajor = isMajor;
	scalePatternLength = sizeof(pattern) / sizeof(pattern[0]);
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	Music::Scale::setScale(Music::Scale::GetPosition());
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
		if (note.GetPosition().GetName() != "NONE") {
			s += note.GetPosition().GetName();
			s += " ";
		}
	}
	s.pop_back();
	return s;
}

std::string Music::Scale::getResolvedScaleAsString() const
{
	std::string s;
	for (Music::Note note : resolvedScale)
	{
		if (note.GetPosition().GetName() != "NONE") {
			s += note.GetPosition().GetName();
			s += " ";
		}
	}
	s.pop_back();
	return s;
}
//Methods
void Music::Scale::setScale(Music::Position position)
{
	Music::Scale::unresolvedScale[0] = Music::Note(position);
	Music::Note nextNote = position;
	for (int i = 1; i < scalePatternLength; i++) {

		if (Music::Scale::pattern[i] == Music::Position::Step::NONE)
			continue;

		else if (Music::Scale::pattern[i] == Music::Position::Step::Whole)
		{
			nextNote = nextNote.accendFullStep();;
			Music::Scale::unresolvedScale[i] = nextNote;
		}

		else if (Music::Scale::pattern[i] == Music::Position::Step::Half)
		{
			nextNote = nextNote.accendHalfStep();
			Music::Scale::unresolvedScale[i] = Note(nextNote);
		}

		else if (Music::Scale::pattern[i] == Music::Position::Step::WholeandAHalf)
		{
			nextNote = nextNote.accendStepAndAHalf();
			Music::Scale::unresolvedScale[i] = Note(nextNote);
		}
	}
	Music::Scale::copyScale(unresolvedScale, scale);
	Music::Scale::resolveScale();
}

void Music::Scale::resolveScale()
{
	for (int i = 0; i < Music::Scale::scalePatternLength; i++)
	{
		int distance;
		std::string front;
		std::string back;
		Music::Note currentNote = unresolvedScale[i];
		if (currentNote.GetPosition().GetPositionAsString().length() == 1)
		{
			resolvedScale[i] = currentNote;
			continue;
		}
		else
		{
			front = currentNote.GetPosition().GetPositionAsString();
			front.pop_back();
			front.pop_back();
			back = currentNote.GetPosition().GetPositionAsString();
			back.erase(0, 2);
		}

		if (i > 0)
		{
			distance = (int)currentNote.GetPosition().GetChromaticScalePosition() - (int)(unresolvedScale[i - 1]).GetPosition().GetChromaticScalePosition();
			if (distance > 1)
			{
				currentNote.GetPosition().SetName(back);
			}
			else
			{
				currentNote.GetPosition().SetName(front);
			}
			resolvedScale[i] = currentNote;
		}
	}
}
void Music::Scale::copyScale(Music::Note (&s1)[7], Music::Note (&s2)[7])
{
	std::copy(std::begin(s1), std::end(s1), std::begin(s2));
}
Music::Scale Music::Scale::operator =(const Music::Scale& otherScale)
{
	if (this != &otherScale)
	{
		this->position = otherScale.position;
		std::copy(std::begin(otherScale.pattern), std::end(otherScale.pattern), std::begin(Music::Scale::pattern));
		this->setScale(Music::Scale::GetPosition());
	}
	return *this;
}
Music::Scale Music::Scale::operator =(const Music::Position& otherPosition)
{
	if (this->position != otherPosition)
	{
		this->position = otherPosition;
		this->setScale(Music::Scale::GetPosition());
	}
	return *this;
}
Music::Scale Music::Scale::operator =(const int& scaleAsInt)
{
	if ((int)this->GetPosition().GetChromaticScalePosition() != scaleAsInt)
	{
		this->position = scaleAsInt;
		this->setScale(Music::Scale::GetPosition());
	}
	return *this;
}
Music::Scale Music::Scale::operator =(const std::string& scaleAsString)
{
	if (this->GetPosition().GetPositionAsString() != scaleAsString)
	{
		this->position = scaleAsString;
		this->setScale(Music::Scale::GetPosition());
	}
	return *this;
}
Music::Scale Music::Scale::operator ++()
{
	Music::Scale newScale = Music::Scale((int)position.GetChromaticScalePosition() + 1, pattern, isMajor);
	*this = newScale;
	return newScale;
}
Music::Scale Music::Scale::operator ++(int)
{
	Music::Scale temp = *this;
	Music::Scale newScale = Music::Scale((int)position.GetChromaticScalePosition() + 1, pattern, isMajor);
	*this = newScale;
	return temp;
}
Music::Scale Music::Scale::operator --()
{
	Music::Scale newScale = Music::Scale((int)position.GetChromaticScalePosition() - 1, pattern, isMajor);
	*this = newScale;
	return newScale;
}
Music::Scale Music::Scale::operator --(int)
{
	Music::Scale temp = *this;
	Music::Scale newScale = Music::Scale((int)position.GetChromaticScalePosition() - 1, pattern, isMajor);
	*this = newScale;
	return temp;
}
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