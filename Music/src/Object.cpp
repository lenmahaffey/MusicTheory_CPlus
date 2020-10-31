#pragma once
#include "Object.h"

// Constructors
Music::Object::Object() :
	position(Music::ChromaticScalePosition::NONE),
	textName(Music::Object::GetPositionAsString(Music::ChromaticScalePosition::NONE))
{
}
Music::Object::Object(Music::ChromaticScalePosition note) :
	position(note),
	textName(Music::Object::GetPositionAsString(note))
{
}
Music::Object::Object(std::string note) :
	position(Music::Object::GetPositionFromChromaticScale(note)),
	textName(GetPositionAsString(Music::Object::position))
{
}
Music::Object::Object(int note) :
	position(Music::Object::GetPositionFromChromaticScale(note)),
	textName(GetPositionAsString(Music::Object::GetPositionFromChromaticScale(note)))
{
}

//Accessors
Music::ChromaticScalePosition Music::Object::getPosition()
{
	return Music::Object::position;
}
std::string Music::Object::getNameAsString()
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
		currentNote = Music::Object::GetPositionFromChromaticScale(index);
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
		currentNote = Music::Object::GetPositionFromChromaticScale(index);
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
		currentNote = Music::Object::GetPositionFromChromaticScale(index);
		haveSteped++;

	} while (haveSteped != 3);
	return currentNote;
}

//Static class functions
Music::ChromaticScalePosition Music::Object::GetPositionFromChromaticScale(std::string noteAsString)
{
	if (noteAsString == "NONE")
		return Music::ChromaticScalePosition::NONE;
	else if (noteAsString == "A")
		return Music::ChromaticScalePosition::A;
	else if (noteAsString == "AsBf")
		return Music::ChromaticScalePosition::AsBf;
	else if (noteAsString == "B")
		return Music::ChromaticScalePosition::B;
	else if (noteAsString == "C")
		return Music::ChromaticScalePosition::C;
	else if (noteAsString == "CsDf")
		return Music::ChromaticScalePosition::CsDf;
	else if (noteAsString == "D")
		return Music::ChromaticScalePosition::D;
	else if (noteAsString == "DsEf")
		return Music::ChromaticScalePosition::DsEf;
	else if (noteAsString == "E")
		return Music::ChromaticScalePosition::E;
	else if (noteAsString == "F")
		return Music::ChromaticScalePosition::F;
	else if (noteAsString == "FsGf")
		return Music::ChromaticScalePosition::FsGf;
	else if (noteAsString == "G")
		return Music::ChromaticScalePosition::G;
	else if (noteAsString == "GsAf")
		return Music::ChromaticScalePosition::GsAf;
	else
		//**TODO** implement exception handler
		return Music::ChromaticScalePosition::NONE;
}
Music::ChromaticScalePosition Music::Object::GetPositionFromChromaticScale(int noteAsInt)
{
	switch (noteAsInt) {
	case 0:
		return Music::ChromaticScalePosition::NONE;
	case 1:
		return Music::ChromaticScalePosition::A;
	case 2:
		return Music::ChromaticScalePosition::AsBf;
	case 3:
		return Music::ChromaticScalePosition::B;
	case 4:
		return Music::ChromaticScalePosition::C;
	case 5:
		return Music::ChromaticScalePosition::CsDf;
	case 6:
		return Music::ChromaticScalePosition::D;
	case 7:
		return Music::ChromaticScalePosition::DsEf;
	case 8:
		return Music::ChromaticScalePosition::E;
	case 9:
		return Music::ChromaticScalePosition::F;
	case 10:
		return Music::ChromaticScalePosition::FsGf;
	case 11:
		return Music::ChromaticScalePosition::G;
	case 12:
		return Music::ChromaticScalePosition::GsAf;
	default:
		//**TODO** implement exception handler
		return Music::ChromaticScalePosition::NONE;
	}
}
Music::Weight Music::Object::GetWeightForPosition(Music::ChromaticScalePosition position)
{
	switch (position)
	{
	case Music::ChromaticScalePosition::NONE:
		return Music::Weight::NONE;
	case Music::ChromaticScalePosition::A:
		return Music::Weight::Whole;
	case Music::ChromaticScalePosition::AsBf:
		return Music::Weight::Half;
	case Music::ChromaticScalePosition::B:
		return Music::Weight::Whole;
	case Music::ChromaticScalePosition::C:
		return Music::Weight::Whole;
	case Music::ChromaticScalePosition::CsDf:
		return Music::Weight::Half;
	case Music::ChromaticScalePosition::D:
		return Music::Weight::Whole;
	case Music::ChromaticScalePosition::DsEf:
		return Music::Weight::Half;
	case Music::ChromaticScalePosition::E:
		return Music::Weight::Whole;
	case Music::ChromaticScalePosition::F:
		return Music::Weight::Whole;
	case Music::ChromaticScalePosition::FsGf:
		return Music::Weight::Half;
	case Music::ChromaticScalePosition::G:
		return Music::Weight::Whole;
	case Music::ChromaticScalePosition::GsAf:
		return Music::Weight::Half;
	default:
		//**TODO** implement exception handler?
		return Music::Weight::NONE;
	}
}
std::string Music::Object::GetPositionAsString(Music::ChromaticScalePosition note) {
	switch (note) {
	case Music::ChromaticScalePosition::NONE:
		return "NONE";
	case Music::ChromaticScalePosition::A:
		return "A";
	case Music::ChromaticScalePosition::AsBf:
		return "AsBf";
	case Music::ChromaticScalePosition::B:
		return "B";
	case Music::ChromaticScalePosition::C:
		return "C";
	case Music::ChromaticScalePosition::CsDf:
		return "CsDf";
	case Music::ChromaticScalePosition::D:
		return "D";
	case Music::ChromaticScalePosition::DsEf:
		return "DsEf";
	case Music::ChromaticScalePosition::E:
		return "E";
	case Music::ChromaticScalePosition::F:
		return "F";
	case Music::ChromaticScalePosition::FsGf:
		return "FsGf";
	case Music::ChromaticScalePosition::G:
		return "G";
	case Music::ChromaticScalePosition::GsAf:
		return "GsAf";
	default:
		//**TODO** implement exception handler
		return "NONE";
	}
}
std::string Music::Object::GetWeightAsString(Music::Weight weight)
{
	switch (weight)
	{
	case Music::Weight::NONE:
		return std::string("None");
	case Music::Weight::Half:
		return std::string("Half");
	case Music::Weight::Whole:
		return std::string("Whole");
	default:
		//**TODO** implement exception handler?
		return std::string("None");
	}
}
std::string Music::Object::GetStepAsString(Music::Step step)
{
	switch (step)
	{
	case Music::Step::NONE:
		return "NONE";
	case Music::Step::Half:
		return "Half";
	case Music::Step::Whole:
		return "Whole";
	case Music::Step::WholeandAHalf:
		return "Whole and a Half";
	case Music::Step::Double:
		return "Double";
	default:
		//**TODO** implement exception handler
		return "NONE";
	}
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
bool Music::Object::operator ==( Music::Object otherObject)
{
	return position == otherObject.position;
}
bool Music::Object::operator !=( Music::Object otherObject)
{
	return position != otherObject.position;
}
bool Music::Object::operator <( Music::Object otherObject)
{
	return (int)position < (int)otherObject.position;
}
bool Music::Object::operator <=( Music::Object otherObject)
{
	return (int)position <= (int)otherObject.position;
}
bool Music::Object::operator >( Music::Object otherObject)
{
	return (int)position > (int)otherObject.position;
}
bool Music::Object::operator >=( Music::Object otherObject)
{
	return (int)position >= (int)otherObject.position;
}