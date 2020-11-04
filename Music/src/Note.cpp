#pragma once
#include "Note.h"

//Constructors
Music::Note::Note() :
	Music::Object(),
	weight(Music::Object::GetWeightForPosition(Music::Object::GetPositionFromChromaticScale("NONE")))
{
}

Music::Note::Note(Music::ChromaticScalePosition note) :
	Music::Object(note),
	weight(Music::Object::GetWeightForPosition(note))
{
}

Music::Note::Note(std::string note) :
	Music::Object(note),
	weight(Music::Object::GetWeightForPosition(Music::Object::GetPositionFromChromaticScale(note)))
{
}

Music::Note::Note(int note) :
	Music::Object(note),
	weight(Music::Object::GetWeightForPosition(Music::Object::GetPositionFromChromaticScale(note)))
{
}

//Accessors
Music::Weight Music::Note::getWeight()
{
	return Music::Note::weight;
}

std::string Music::Note::getWeightAsString()
{
	return Music::Object::GetWeightAsString(Music::Note::weight);
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
bool Music::Note::operator ==(Music::Note otherNote)
{
	return position == otherNote.position;
}
bool Music::Note::operator !=(Music::Note otherNote)
{
	return position != otherNote.position;
}
bool Music::Note::operator <(Music::Note otherNote)
{
	return (int)position < (int)otherNote.position;
}
bool Music::Note::operator <=(Music::Note otherNote)
{
	return (int)position <= (int)otherNote.position;
}
bool Music::Note::operator >(Music::Note otherNote)
{
	return (int)position > (int)otherNote.position;
}
bool Music::Note::operator >=(Music::Note otherNote)
{
	return (int)position >= (int)otherNote.position;
}