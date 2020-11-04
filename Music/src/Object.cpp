#pragma once
#include "Object.h"

// Constructors
Music::Object::Object() :
	position(Music::ChromaticScalePosition::NONE),
	textName(Music::GetPositionAsString(Music::ChromaticScalePosition::NONE))
{
}
Music::Object::Object(Music::ChromaticScalePosition note) :
	position(note),
	textName(Music::GetPositionAsString(note))
{
}
Music::Object::Object(std::string note) :
	position(Music::GetPositionFromChromaticScale(note)),
	textName(GetPositionAsString(Music::Object::position))
{
}
Music::Object::Object(int note) :
	position(Music::GetPositionFromChromaticScale(note)),
	textName(GetPositionAsString(Music::GetPositionFromChromaticScale(note)))
{
}

//Accessors
Music::ChromaticScalePosition Music::Object::getPosition() const
{
	return Music::Object::position;
}
std::string Music::Object::getNameAsString() const
{
	return Music::Object::textName;
}

//Class Methods
Music::ChromaticScalePosition Music::Object::accendHalfStep()
{
	int index = (int)Music::Object::position;
	int haveSteped = 0;
	Music::ChromaticScalePosition currentNote = Music::Object::position;
	do
	{
		index++;
		if (index > 12)
			index = 1;
		currentNote = Music::GetPositionFromChromaticScale(index);
		haveSteped++;
	} while (haveSteped != 1);
	return currentNote;
}
Music::ChromaticScalePosition Music::Object::accendFullStep()
{
	int index = (int)Music::Object::position;
	int haveSteped = 0;
	Music::ChromaticScalePosition currentNote = Music::Object::position;
	do
	{
		index++;
		if (index > 12)
			index = 1;
		currentNote = Music::GetPositionFromChromaticScale(index);
		haveSteped++;
	} while (haveSteped != 2);

	return currentNote;
}
Music::ChromaticScalePosition Music::Object::accendStepAndAHalf()
{
	int index = (int)Music::Object::position;
	int haveSteped = 0;
	Music::ChromaticScalePosition currentNote = Music::Object::position;
	do
	{
		index++;
		if (index > 12)
			index = 1;
		currentNote = Music::GetPositionFromChromaticScale(index);
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