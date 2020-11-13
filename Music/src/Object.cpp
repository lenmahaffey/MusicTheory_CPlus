#pragma once
#include "Object.h"

// Constructors
Music::Object::Object()
{
	position = 0;
	name = Music::Position::GetPositionAsString(Music::Position::ChromaticScalePosition::NONE);
}
Music::Object::Object(Music::Position note)
{
	position = note;
	name = Music::Position::GetPositionAsString(note.GetChromaticScalePosition());
}
Music::Object::Object(std::string note)
{
	position = Music::Position(note);
	name = note;
}
Music::Object::Object(int note)
{
	position = Music::Position::GetPositionFromChromaticScale(note);
	name = Music::Position::GetPositionAsString(Music::Position::GetPositionFromChromaticScale(note));
}

//Accessors
Music::Position& Music::Object::GetPosition()
{
	return position;
}

std::string Music::Object::GetName() const
{
	return name;
}

void Music::Object::SetName(std::string newName)
{
	name = newName;
}

//Class Methods
Music::Position Music::Object::accendHalfStep()
{
	int index = (int)position.GetChromaticScalePosition();
	int haveSteped = 0;
	Music::Position currentNote = position.GetChromaticScalePosition();
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
	int index = (int)position.GetChromaticScalePosition();
	int haveSteped = 0;
	Music::Position::ChromaticScalePosition currentNote = position.GetChromaticScalePosition();
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
	int index = (int)position.GetChromaticScalePosition();
	int haveSteped = 0;
	Music::Position::ChromaticScalePosition currentNote = position.GetChromaticScalePosition();
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
		this->name = otherObject.name;
	}
	return *this;
}
Music::Object Music::Object::operator =(const Music::Position& otherPosition)
{
	if (this->position != otherPosition)
	{
		this->position = otherPosition;
		this->position = Music::Position::GetPositionAsString(otherPosition.GetChromaticScalePosition());
	}
	return *this;
}
Music::Object Music::Object::operator =(const int& positionAsInt)
{
	Music::Position newPosition = Music::Position::GetPositionFromChromaticScale(positionAsInt);
	if (this->position != newPosition)
	{
		this->position = newPosition;
		this->position = Music::Position::GetPositionAsString(Music::Position::GetPositionFromChromaticScale(positionAsInt));
	}
	return *this;
}
Music::Object Music::Object::operator =(const std::string& positionAsString)
{
	Music::Position newPosition = Music::Position::GetPositionFromChromaticScale(positionAsString);
	if (this->position != newPosition)
	{
		this->position = newPosition;
		this->position = positionAsString;
	}
	return *this;
}
Music::Object Music::Object::operator ++()
{
	Music::Object newObject = Music::Object((int)position.GetChromaticScalePosition() + 1);
	*this = newObject;
	return newObject;
}
Music::Object Music::Object::operator ++(int)
{
	Music::Object temp = *this;
	Music::Object newObject = Music::Object((int)position.GetChromaticScalePosition() + 1);
	*this = newObject;
	return temp;
}
Music::Object Music::Object::operator --()
{
	Music::Object newObject = Music::Object((int)position.GetChromaticScalePosition() - 1);
	*this = newObject;
	return newObject;
}
Music::Object Music::Object::operator --(int)
{
	Music::Object temp = *this;
	Music::Object newObject = Music::Object((int)position.GetChromaticScalePosition() - 1);
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