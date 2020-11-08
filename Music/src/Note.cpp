#pragma once
#include "Note.h"

//Constructors
Music::Note::Note() :
	Music::Object(),
	weight(Music::Position::GetWeightForPosition(Music::Position::GetPositionFromChromaticScale("NONE")))
{
}

Music::Note::Note(Music::Position::ChromaticScalePosition note) :
	Music::Object(note),
	weight(Music::Position::GetWeightForPosition(note))
{
}

Music::Note::Note(std::string note) :
	Music::Object(note),
	weight(Music::Position::GetWeightForPosition(Music::Position::GetPositionFromChromaticScale(note)))
{
}

Music::Note::Note(int note) :
	Music::Object(note),
	weight(Music::Position::GetWeightForPosition(Music::Position::GetPositionFromChromaticScale(note)))
{
}

//Accessors
Music::Position::Weight Music::Note::GetWeight()
{
	return Music::Note::weight;
}

std::string Music::Note::GetWeightAsString()
{
	return Music::Position::GetWeightAsString(Music::Note::weight);
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
	return (int)position < (int)otherNote.position;
}
bool Music::Note::operator <=(const Music::Note& otherNote)const
{
	return (int)position <= (int)otherNote.position;
}
bool Music::Note::operator >(const Music::Note& otherNote)const
{
	return (int)position > (int)otherNote.position;
}
bool Music::Note::operator >=(const Music::Note& otherNote)const
{
	return (int)position >= (int)otherNote.position;
}