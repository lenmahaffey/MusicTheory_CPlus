#pragma once
#include "Object.h"

// Constructors
Music::Object::Object()
{
	pitch = 0;
	name = "NONE";
}
Music::Object::Object(Music::Pitch p)
{
	pitch = p;
	name = Music::Pitch::GetPositionAsString(p.GetPosition());
}
Music::Object::Object(std::string pitchAsString)
{
	pitch = Music::Pitch(pitchAsString);
	name = pitchAsString;
}
Music::Object::Object(int pitchAsInt)
{
	pitch = Music::Pitch::GetPositionFromChromaticScale(pitchAsInt);
	name = Music::Pitch::GetPositionAsString(Music::Pitch::GetPositionFromChromaticScale(pitchAsInt));
}

//Accessors
Music::Pitch& Music::Object::GetPosition()
{
	return pitch;
}
std::string Music::Object::GetName() const
{
	return name;
}

//Mutators
void Music::Object::SetName(std::string newName)
{
	name = newName;
}

//Class Methods
Music::Pitch Music::Object::accendHalfStep()
{
	int index = (int)pitch.GetPosition();
	int haveSteped = 0;
	Music::Pitch currentNote = pitch.GetPosition();
	do
	{
		index++;
		if (index > 12)
			index = 1;
		currentNote = Music::Pitch::GetPositionFromChromaticScale(index);
		haveSteped++;
	} while (haveSteped != 1);
	return currentNote;
}
Music::Pitch Music::Object::accendFullStep()
{
	int index = (int)pitch.GetPosition();
	int haveSteped = 0;
	Music::Pitch currentNote = pitch.GetPosition();
	do
	{
		index++;
		if (index > 12)
			index = 1;
		currentNote = Music::Pitch::GetPositionFromChromaticScale(index);
		haveSteped++;
	} while (haveSteped != 2);

	return currentNote;
}
Music::Pitch Music::Object::accendStepAndAHalf()
{
	int index = (int)pitch.GetPosition();
	int haveSteped = 0;
	Music::Pitch currentNote = pitch.GetPosition();
	do
	{
		index++;
		if (index > 12)
			index = 1;
		currentNote = Music::Pitch::GetPositionFromChromaticScale(index);
		haveSteped++;

	} while (haveSteped != 3);
	return currentNote;
}

//Operator Overloads
Music::Object Music::Object::operator =(const Music::Object& otherObject)
{
	if (this != &otherObject)
	{
		this->pitch = otherObject.pitch;
		this->name = otherObject.name;
	}
	return *this;
}
Music::Object Music::Object::operator =(const Music::Pitch& otherPitch)
{
	if (this->pitch != otherPitch)
	{
		this->pitch = otherPitch;
		this->name = otherPitch.GetPositionAsString();
	}
	return *this;
}
Music::Object Music::Object::operator =(const int& positionAsInt)
{
	Music::Pitch newPosition = Music::Pitch::GetPositionFromChromaticScale(positionAsInt);
	if (this->pitch != newPosition)
	{
		this->pitch = newPosition;
		this->name = Music::Pitch::GetPositionAsString(Music::Pitch::GetPositionFromChromaticScale(positionAsInt));
	}
	return *this;
}
Music::Object Music::Object::operator =(const std::string& positionAsString)
{
	Music::Pitch newPosition = Music::Pitch::GetPositionFromChromaticScale(positionAsString);
	if (this->pitch != newPosition)
	{
		this->pitch = newPosition;
		this->name = positionAsString;
	}
	return *this;
}
Music::Object Music::Object::operator ++()
{
	Music::Object newObject = Music::Object((int)pitch.GetPosition() + 1);
	*this = newObject;
	return newObject;
}
Music::Object Music::Object::operator ++(int)
{
	Music::Object temp = *this;
	Music::Object newObject = Music::Object((int)pitch.GetPosition() + 1);
	*this = newObject;
	return temp;
}
Music::Object Music::Object::operator --()
{
	Music::Object newObject = Music::Object((int)pitch.GetPosition() - 1);
	*this = newObject;
	return newObject;
}
Music::Object Music::Object::operator --(int)
{
	Music::Object temp = *this;
	Music::Object newObject = Music::Object((int)pitch.GetPosition() - 1);
	*this = newObject;
	return temp;
}

bool Music::Object::operator ==(const Music::Object& otherObject) const
{
	return pitch == otherObject.pitch;
}
bool Music::Object::operator !=(const Music::Object& otherObject) const
{
	return pitch != otherObject.pitch;
}
bool Music::Object::operator <(const Music::Object& otherObject) const
{
	return pitch < otherObject.pitch;
}
bool Music::Object::operator <=(const Music::Object& otherObject) const
{
	return pitch <= otherObject.pitch;
}
bool Music::Object::operator >(const Music::Object& otherObject) const
{
	return pitch > otherObject.pitch;
}
bool Music::Object::operator >=(const Music::Object& otherObject) const
{
	return pitch >= otherObject.pitch;
}