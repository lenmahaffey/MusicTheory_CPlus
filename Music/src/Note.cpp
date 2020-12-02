#pragma once
#include "Note.h"

//Constructors
Music::Note::Note() :
	Music::Object()
{
}

Music::Note::Note(Music::Pitch note) :
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
		this->pitch = otherNote.pitch;
		this->name = otherNote.name;
	}
	return *this;
}
Music::Note Music::Note::operator =(const Music::Pitch& position)
{
	if (this->pitch != position)
	{
		this->pitch = position;
		this->name = position.GetPositionAsString();
	}
	return *this;
}
Music::Note Music::Note::operator =(const int& positionAsInt)
{
	Music::Pitch newPosition = Music::Pitch::GetPositionFromChromaticScale(positionAsInt);
	if (this->pitch != newPosition)
	{
		this->pitch = newPosition;
		this->name = Music::Pitch(positionAsInt).GetPositionAsString();
	}
	return *this;
}
Music::Note Music::Note::operator =(const std::string& positionAsString)
{
	Music::Pitch newPosition = Music::Pitch::GetPositionFromChromaticScale(positionAsString);
	if (this->pitch != newPosition)
	{
		this->pitch = newPosition;
		this->name = positionAsString;
	}
	return *this;
}
Music::Note Music::Note::operator ++()
{
	Music::Note newNote = Music::Note((int)pitch.GetPosition() + 1);
	*this = newNote;
	return newNote;
}
Music::Note Music::Note::operator ++(int)
{
	Music::Note temp = *this;
	Music::Note newNote = Music::Note((int)pitch.GetPosition() + 1);
	*this = newNote;
	return temp;
}
Music::Note Music::Note::operator --()
{
	Music::Note newNote = Music::Note((int)pitch.GetPosition() - 1);
	*this = newNote;
	return newNote;
}
Music::Note Music::Note::operator --(int)
{
	Music::Note temp = *this;
	Music::Note newNote = Music::Note((int)pitch.GetPosition() - 1);
	*this = newNote;
	return temp;
}
bool Music::Note::operator ==(const Music::Note& otherNote)const
{
	return pitch == otherNote.pitch;
}
bool Music::Note::operator !=(const Music::Note& otherNote)const
{
	return pitch != otherNote.pitch;
}
bool Music::Note::operator <(const Music::Note& otherNote)const
{
	return pitch < otherNote.pitch;
}
bool Music::Note::operator <=(const Music::Note& otherNote)const
{
	return pitch <= otherNote.pitch;
}
bool Music::Note::operator >(const Music::Note& otherNote)const
{
	return pitch > otherNote.pitch;
}
bool Music::Note::operator >=(const Music::Note& otherNote)const
{
	return pitch >= otherNote.pitch;
}