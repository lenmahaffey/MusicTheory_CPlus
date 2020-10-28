#pragma once
#include "Object.h"

Music::Object::Object() :
	chromaticScalePosition(),
	textName()
{
}
Music::Object::Object(Music::ChromaticScalePosition note) :
	chromaticScalePosition(note),
	textName(Music::Object::GetPositionAsString(note))
{
}
Music::Object::Object(std::string note) :
	chromaticScalePosition(Music::Object::GetPositionFromChromaticScale(note)),
	textName(GetPositionAsString(Music::Object::chromaticScalePosition))
{
}
Music::Object::Object(int note) :
	chromaticScalePosition(Music::Object::GetPositionFromChromaticScale(note)),
	textName(GetPositionAsString(Music::Object::GetPositionFromChromaticScale(note)))
{
}

Music::ChromaticScalePosition Music::Object::getChromaticScalePosition()
{
	return Music::Object::chromaticScalePosition;
}
std::string Music::Object::getNameAsString()
{
	return Music::Object::textName;
}

Music::ChromaticScalePosition Music::Object::accendFullStep()
{
	int index = (int)Music::Object::chromaticScalePosition;
	double haveSteped = 0;
	Music::ChromaticScalePosition currentNote = Music::Object::chromaticScalePosition;
	do
	{
		index++;
		if (index == 12)
			index = 0;
		currentNote = Music::Object::GetPositionFromChromaticScale(index);
		haveSteped += .5;
	} while (haveSteped != 1);

	return currentNote;
}
Music::ChromaticScalePosition Music::Object::accendHalfStep()
{
	int index = (int)Music::Object::chromaticScalePosition;
	float haveSteped = 0.0;
	Music::ChromaticScalePosition currentNote = Music::Object::chromaticScalePosition;
	do
	{
		index++;
		if (index == 12)
			index = 0;
		currentNote = Music::Object::GetPositionFromChromaticScale(index);
		haveSteped += .5;

	} while (haveSteped != .5);
	return currentNote;
}
Music::ChromaticScalePosition Music::Object::accendStepAndAHalf()
{
	int index = (int)Music::Object::chromaticScalePosition;
	float haveSteped = 0.0;
	Music::ChromaticScalePosition currentNote = Music::Object::chromaticScalePosition;
	do
	{
		index++;
		if (index == 12)
			index = 0;
		currentNote = Music::Object::GetPositionFromChromaticScale(index);
		haveSteped += .5;

	} while (haveSteped != 1.5);
	return currentNote;
}

Music::ChromaticScalePosition Music::Object::GetPositionFromChromaticScale(std::string letter)
{
	if (letter == "A")
		return Music::ChromaticScalePosition::A;
	else if (letter == "AsBf")
		return Music::ChromaticScalePosition::AsBf;
	else if (letter == "B")
		return Music::ChromaticScalePosition::B;
	else if (letter == "C")
		return Music::ChromaticScalePosition::C;
	else if (letter == "CsDf")
		return Music::ChromaticScalePosition::CsDf;
	else if (letter == "D")
		return Music::ChromaticScalePosition::D;
	else if (letter == "DsEf")
		return Music::ChromaticScalePosition::DsEf;
	else if (letter == "E")
		return Music::ChromaticScalePosition::E;
	else if (letter == "F")
		return Music::ChromaticScalePosition::F;
	else if (letter == "FsGf")
		return Music::ChromaticScalePosition::FsGf;
	else if (letter == "G")
		return Music::ChromaticScalePosition::G;
	else if (letter == "GsAf")
		return Music::ChromaticScalePosition::GsAf;
}
Music::ChromaticScalePosition Music::Object::GetPositionFromChromaticScale(int note)
{
	switch (note) {
	case 0:
		return Music::ChromaticScalePosition::A;
	case 1:
		return Music::ChromaticScalePosition::AsBf;
	case 2:
		return Music::ChromaticScalePosition::B;
	case 3:
		return Music::ChromaticScalePosition::C;
	case 4:
		return Music::ChromaticScalePosition::CsDf;
	case 5:
		return Music::ChromaticScalePosition::D;
	case 6:
		return Music::ChromaticScalePosition::DsEf;
	case 7:
		return Music::ChromaticScalePosition::E;
	case 8:
		return Music::ChromaticScalePosition::F;
	case 9:
		return Music::ChromaticScalePosition::FsGf;
	case 10:
		return Music::ChromaticScalePosition::G;
	case 11:
		return Music::ChromaticScalePosition::GsAf;
	}
}
std::string Music::Object::GetPositionAsString(Music::ChromaticScalePosition note) {
	switch (note) {
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
		return std::string("None");
	}
}
Music::Weight Music::Object::GetWeight(Music::ChromaticScalePosition note)
{
	switch (note) {
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
		return Music::Weight::NONE;
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
		return "NONE";
	}
}