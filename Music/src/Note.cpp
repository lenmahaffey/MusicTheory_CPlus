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

}
Music::Note Music::Note::operator =(const Music::Position& position)
{

}
Music::Note Music::Note::operator =(const int& noteAsInt)
{

}
Music::Note Music::Note::operator =(const std::string& noteAsInt)
{

}
Music::Note Music::Note::operator ++()
{
	Music::Note newNote = Music::Note((int)position.GetPosition() + 1);
	*this = newNote;
	return newNote;
}
Music::Note Music::Note::operator ++(int)
{
	Music::Note temp = *this;
	Music::Note newNote = Music::Note((int)position.GetPosition() + 1);
	*this = newNote;
	return temp;
}
Music::Note Music::Note::operator --()
{
	Music::Note newNote = Music::Note((int)position.GetPosition() - 1);
	*this = newNote;
	return newNote;
}
Music::Note Music::Note::operator --(int)
{
	Music::Note temp = *this;
	Music::Note newNote = Music::Note((int)position.GetPosition() - 1);
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