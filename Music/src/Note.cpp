#pragma once
#include "Note.h"

//Constructors
Music::Note::Note() :
	Music::Object()
{
}

Music::Note::Note(Music::Position note) :
	Music::Object(note)
{
}

Music::Note::Note(std::string note) :
	Music::Object(note)
{
}

Music::Note::Note(int note) :
	Music::Object(note)
{
}

//Operator Overloads
Music::Note Music::Note::operator =(const Music::Note& otherNote)
{
	if (this != &otherNote)
	{
		this->position = otherNote.position;
	}
	return *this;
}
Music::Note Music::Note::operator =(const Music::Position& position)
{
	if (this->position != position)
	{
		this->position = position;
	}
	return *this;
}
Music::Note Music::Note::operator =(const int& positionAsInt)
{
	Music::Position newPosition = Music::Position::GetPositionFromChromaticScale(positionAsInt);
	if (this->position != newPosition)
	{
		this->position = newPosition;
	}
	return *this;
}
Music::Note Music::Note::operator =(const std::string& positionAsString)
{
	Music::Position newPosition = Music::Position::GetPositionFromChromaticScale(positionAsString);
	if (this->position != newPosition)
	{
		this->position = newPosition;
	}
	return *this;
}
Music::Note Music::Note::operator ++()
{
	Music::Note newNote = Music::Note((int)position.GetChromaticScalePosition() + 1);
	*this = newNote;
	return newNote;
}
Music::Note Music::Note::operator ++(int)
{
	Music::Note temp = *this;
	Music::Note newNote = Music::Note((int)position.GetChromaticScalePosition() + 1);
	*this = newNote;
	return temp;
}
Music::Note Music::Note::operator --()
{
	Music::Note newNote = Music::Note((int)position.GetChromaticScalePosition() - 1);
	*this = newNote;
	return newNote;
}
Music::Note Music::Note::operator --(int)
{
	Music::Note temp = *this;
	Music::Note newNote = Music::Note((int)position.GetChromaticScalePosition() - 1);
	*this = newNote;
	return temp;
}
bool Music::Note::operator ==(const Music::Note& otherNote)const
{
	return position == otherNote.position;
}
bool Music::Note::operator !=(const Music::Note& otherNote)const
{
	return position != otherNote.position;
}
bool Music::Note::operator <(const Music::Note& otherNote)const
{
	return position < otherNote.position;
}
bool Music::Note::operator <=(const Music::Note& otherNote)const
{
	return position <= otherNote.position;
}
bool Music::Note::operator >(const Music::Note& otherNote)const
{
	return position > otherNote.position;
}
bool Music::Note::operator >=(const Music::Note& otherNote)const
{
	return position >= otherNote.position;
}