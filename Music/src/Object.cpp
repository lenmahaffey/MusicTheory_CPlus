#pragma once
#include "Object.h"

// Constructors
Music::Object::Object() :
	position(Music::Position(0))
{
}
Music::Object::Object(Music::Position note) :
	position(note)
{
}
Music::Object::Object(std::string note) :
	position(Music::Position::GetPositionFromChromaticScale(note))
{
}
Music::Object::Object(int note) :
	position(Music::Position::GetPositionFromChromaticScale(note))
{
}

//Accessors
Music::Position Music::Object::GetPosition()
{
	return Music::Object::position;
}
std::string Music::Object::GetNameAsString()
{
	return Music::Position::GetPositionAsString(Music::Object::position.GetPosition());
}

//Class Methods
Music::Position Music::Object::accendHalfStep()
{
	int index = (int)Music::Object::position.GetPosition();
	int haveSteped = 0;
	Music::Position currentNote = Music::Object::position.GetPosition();
	do
	{
		index++;
		if (index > 12)
			index = 1;
		currentNote = Music::Position::GetPositionFromChromaticScale(index);
		haveSteped++;
	} while (haveSteped != 1);
	return currentNote;
}
Music::Position Music::Object::accendFullStep()
{
	int index = (int)Music::Object::position.GetPosition();
	int haveSteped = 0;
	Music::Position::ChromaticScalePosition currentNote = Music::Object::position.GetPosition();
	do
	{
		index++;
		if (index > 12)
			index = 1;
		currentNote = Music::Position::GetPositionFromChromaticScale(index);
		haveSteped++;
	} while (haveSteped != 2);

	return currentNote;
}
Music::Position Music::Object::accendStepAndAHalf()
{
	int index = (int)Music::Object::position.GetPosition();
	int haveSteped = 0;
	Music::Position::ChromaticScalePosition currentNote = Music::Object::position.GetPosition();
	do
	{
		index++;
		if (index > 12)
			index = 1;
		currentNote = Music::Position::GetPositionFromChromaticScale(index);
		haveSteped++;

	} while (haveSteped != 3);
	return currentNote;
}

//Operator Overloads
Music::Object Music::Object::operator =(const Music::Object& otherObject)
{
	if (this != &otherObject)
	{
		this->position = otherObject.position;
	}
	return *this;
}
Music::Object Music::Object::operator =(const Music::Position& otherPosition)
{
	if (this->position != otherPosition)
	{
		this->position = otherPosition;
	}
	return *this;
}
Music::Object Music::Object::operator =(const int& positionAsInt)
{
	Music::Position newPosition = Music::Position::GetPositionFromChromaticScale(positionAsInt);
	if (this->position != newPosition)
	{
		this->position = newPosition;
	}
	return *this;
}
Music::Object Music::Object::operator =(const std::string& positionAsString)
{
	Music::Position newPosition = Music::Position::GetPositionFromChromaticScale(positionAsString);
	if (this->position != newPosition)
	{
		this->position = newPosition;
	}
	return *this;
}
Music::Object Music::Object::operator ++()
{
	Music::Object newObject = Music::Object((int)position.GetPosition() + 1);
	*this = newObject;
	return newObject;
}
Music::Object Music::Object::operator ++(int)
{
	Music::Object temp = *this;
	Music::Object newObject = Music::Object((int)position.GetPosition() + 1);
	*this = newObject;
	return temp;
}
Music::Object Music::Object::operator --()
{
	Music::Object newObject = Music::Object((int)position.GetPosition() - 1);
	*this = newObject;
	return newObject;
}
Music::Object Music::Object::operator --(int)
{
	Music::Object temp = *this;
	Music::Object newObject = Music::Object((int)position.GetPosition() - 1);
	*this = newObject;
	return temp;
}

bool Music::Object::operator ==(const Music::Object& otherObject) const
{
	return position == otherObject.position;
}
bool Music::Object::operator !=(const Music::Object& otherObject) const
{
	return position != otherObject.position;
}
bool Music::Object::operator <(const Music::Object& otherObject) const
{
	return position < otherObject.position;
}
bool Music::Object::operator <=(const Music::Object& otherObject) const
{
	return position <= otherObject.position;
}
bool Music::Object::operator >(const Music::Object& otherObject) const
{
	return position > otherObject.position;
}
bool Music::Object::operator >=(const Music::Object& otherObject) const
{
	return position >= otherObject.position;
}