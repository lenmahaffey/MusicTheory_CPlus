#pragma once
#include "MusicObject.h"

// Constructors
Music::MusicObject::MusicObject()
{
	pitch = 0;
	name = "NONE";
}
Music::MusicObject::MusicObject(Music::Pitch p)
{
	pitch = p;
	name = Music::Pitch::GetPositionAsString(p.GetPosition());
}
Music::MusicObject::MusicObject(std::string pitchAsString)
{
	pitch = Music::Pitch(pitchAsString);
	name = pitchAsString;
}
Music::MusicObject::MusicObject(int pitchAsInt)
{
	pitch = Music::Pitch::GetPositionFromChromaticScale(pitchAsInt);
	name = Music::Pitch::GetPositionAsString(Music::Pitch::GetPositionFromChromaticScale(pitchAsInt));
}

//Accessors
Music::Pitch& Music::MusicObject::GetPosition()
{
	return pitch;
}
std::string Music::MusicObject::GetName() const
{
	return name;
}

//Mutators
void Music::MusicObject::SetName(std::string newName)
{
	name = newName;
}

//Class Methods
Music::Pitch Music::MusicObject::accendHalfStep()
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
Music::Pitch Music::MusicObject::accendFullStep()
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
Music::Pitch Music::MusicObject::accendStepAndAHalf()
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
Music::MusicObject Music::MusicObject::operator =(const Music::MusicObject& otherMusicObject)
{
	if (this != &otherMusicObject)
	{
		this->pitch = otherMusicObject.pitch;
		this->name = otherMusicObject.name;
	}
	return *this;
}
Music::MusicObject Music::MusicObject::operator =(const Music::Pitch& otherPitch)
{
	if (this->pitch != otherPitch)
	{
		this->pitch = otherPitch;
		this->name = otherPitch.GetPositionAsString();
	}
	return *this;
}
Music::MusicObject Music::MusicObject::operator =(const int& positionAsInt)
{
	Music::Pitch newPosition = Music::Pitch::GetPositionFromChromaticScale(positionAsInt);
	if (this->pitch != newPosition)
	{
		this->pitch = newPosition;
		this->name = Music::Pitch::GetPositionAsString(Music::Pitch::GetPositionFromChromaticScale(positionAsInt));
	}
	return *this;
}
Music::MusicObject Music::MusicObject::operator =(const std::string& positionAsString)
{
	Music::Pitch newPosition = Music::Pitch::GetPositionFromChromaticScale(positionAsString);
	if (this->pitch != newPosition)
	{
		this->pitch = newPosition;
		this->name = positionAsString;
	}
	return *this;
}
Music::MusicObject Music::MusicObject::operator ++()
{
	Music::MusicObject newMusicObject = Music::MusicObject((int)pitch.GetPosition() + 1);
	*this = newMusicObject;
	return newMusicObject;
}
Music::MusicObject Music::MusicObject::operator ++(int)
{
	Music::MusicObject temp = *this;
	Music::MusicObject newMusicObject = Music::MusicObject((int)pitch.GetPosition() + 1);
	*this = newMusicObject;
	return temp;
}
Music::MusicObject Music::MusicObject::operator --()
{
	Music::MusicObject newMusicObject = Music::MusicObject((int)pitch.GetPosition() - 1);
	*this = newMusicObject;
	return newMusicObject;
}
Music::MusicObject Music::MusicObject::operator --(int)
{
	Music::MusicObject temp = *this;
	Music::MusicObject newMusicObject = Music::MusicObject((int)pitch.GetPosition() - 1);
	*this = newMusicObject;
	return temp;
}
bool Music::MusicObject::operator ==(const Music::MusicObject& otherMusicObject) const
{
	return pitch == otherMusicObject.pitch;
}
bool Music::MusicObject::operator !=(const Music::MusicObject& otherMusicObject) const
{
	return pitch != otherMusicObject.pitch;
}
bool Music::MusicObject::operator <(const Music::MusicObject& otherMusicObject) const
{
	return pitch < otherMusicObject.pitch;
}
bool Music::MusicObject::operator <=(const Music::MusicObject& otherMusicObject) const
{
	return pitch <= otherMusicObject.pitch;
}
bool Music::MusicObject::operator >(const Music::MusicObject& otherMusicObject) const
{
	return pitch > otherMusicObject.pitch;
}
bool Music::MusicObject::operator >=(const Music::MusicObject& otherMusicObject) const
{
	return pitch >= otherMusicObject.pitch;
}