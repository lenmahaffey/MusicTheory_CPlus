#pragma once
#include "Object.h"

// Constructors
Music::Object::Object() :
	position(Music::Position::ChromaticScalePosition::NONE),
	textName(Music::Position::GetPositionAsString(Music::Position::ChromaticScalePosition::NONE))
{
}
Music::Object::Object(Music::Position::ChromaticScalePosition note) :
	position(note),
	textName(Music::Position::GetPositionAsString(note))
{
}
Music::Object::Object(std::string note) :
	position(Music::Position::GetPositionFromChromaticScale(note)),
	textName(Music::Position::GetPositionAsString(Music::Object::position))
{
}
Music::Object::Object(int note) :
	position(Music::Position::GetPositionFromChromaticScale(note)),
	textName(Music::Position::GetPositionAsString(Music::Position::GetPositionFromChromaticScale(note)))
{
}

//Accessors
Music::Position::ChromaticScalePosition Music::Object::GetPosition()
{
	return Music::Object::position;
}
std::string Music::Object::GetNameAsString()
{
	return Music::Object::textName;
}

//Class Methods
Music::Position::ChromaticScalePosition Music::Object::accendHalfStep()
{
	int index = (int)Music::Object::position;
	int haveSteped = 0;
	Music::Position::ChromaticScalePosition currentNote = Music::Object::position;
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
Music::Position::ChromaticScalePosition Music::Object::accendFullStep()
{
	int index = (int)Music::Object::position;
	int haveSteped = 0;
	Music::Position::ChromaticScalePosition currentNote = Music::Object::position;
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
Music::Position::ChromaticScalePosition Music::Object::accendStepAndAHalf()
{
	int index = (int)Music::Object::position;
	int haveSteped = 0;
	Music::Position::ChromaticScalePosition currentNote = Music::Object::position;
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
Music::Object Music::Object::operator ++()
{
	Music::Object newObject = Music::Object((int)position + 1);
	*this = newObject;
	return newObject;
}
Music::Object Music::Object::operator ++(int)
{
	Music::Object temp = *this;
	Music::Object newObject = Music::Object((int)position + 1);
	*this = newObject;
	return temp;
}
Music::Object Music::Object::operator --()
{
	Music::Object newObject = Music::Object((int)position - 1);
	*this = newObject;
	return newObject;
}
Music::Object Music::Object::operator --(int)
{
	Music::Object temp = *this;
	Music::Object newObject = Music::Object((int)position - 1);
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
	return (int)position < (int)otherObject.position;
}
bool Music::Object::operator <=(const Music::Object& otherObject) const
{
	return (int)position <= (int)otherObject.position;
}
bool Music::Object::operator >(const Music::Object& otherObject) const
{
	return (int)position > (int)otherObject.position;
}
bool Music::Object::operator >=(const Music::Object& otherObject) const
{
	return (int)position >= (int)otherObject.position;
}