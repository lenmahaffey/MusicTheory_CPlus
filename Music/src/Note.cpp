#pragma once
#include "Note.h"

//Constructors
Music::Note::Note() :
	Music::Object(),
	weight(Music::GetWeightForPosition(Music::GetPositionFromChromaticScale("NONE")))
{
}

Music::Note::Note(Music::ChromaticScalePosition note) :
	Music::Object(note),
	weight(Music::GetWeightForPosition(note))
{
}

Music::Note::Note(std::string note) :
	Music::Object(note),
	weight(Music::GetWeightForPosition(Music::GetPositionFromChromaticScale(note)))
{
}

Music::Note::Note(int note) :
	Music::Object(note),
	weight(Music::GetWeightForPosition(Music::GetPositionFromChromaticScale(note)))
{
}

//Accessors
Music::Weight Music::Note::getWeight() const
{
	return Music::Note::weight;
}

std::string Music::Note::getWeightAsString() const
{
	return Music::GetWeightAsString(Music::Note::weight);
}

//Operator Overloads
Music::Note Music::Note::operator ++()
{
	Music::Note newNote = Music::Note((int)position + 1);
	*this = newNote;
	return newNote;
}
Music::Note Music::Note::operator ++(int)
{
	Music::Note temp = *this;
	Music::Note newNote = Music::Note((int)position + 1);
	*this = newNote;
	return temp;
}
Music::Note Music::Note::operator --()
{
	Music::Note newNote = Music::Note((int)position - 1);
	*this = newNote;
	return newNote;
}
Music::Note Music::Note::operator --(int)
{
	Music::Note temp = *this;
	Music::Note newNote = Music::Note((int)position - 1);
	*this = newNote;
	return temp;
}
bool Music::Note::operator ==(const Music::Note& otherNote) const
{
	return position == otherNote.position;
}
bool Music::Note::operator !=(const Music::Note& otherNote) const
{
	return position != otherNote.position;
}
bool Music::Note::operator <(const Music::Note& otherNote) const
{
	return (int)position < (int)otherNote.position;
}
bool Music::Note::operator <=(const Music::Note& otherNote) const
{
	return (int)position <= (int)otherNote.position;
}
bool Music::Note::operator >(const Music::Note& otherNote) const
{
	return (int)position > (int)otherNote.position;
}
bool Music::Note::operator >=(const Music::Note& otherNote) const
{
	return (int)position >= (int)otherNote.position;
}