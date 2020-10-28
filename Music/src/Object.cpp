#pragma once
#include "Object.h"

Music::Object::Object() :
	chromaticScalePosition(),
	textName(),
	weight()
{
}
Music::Object::Object(Music::ChromaticScale note) :
	chromaticScalePosition(note),
	textName(Music::Object::GetNameAsString(note)),
	weight(Music::Object::GetWeight(note))
{
}
Music::Object::Object(char note) :
	chromaticScalePosition(Music::Object::GetFromChromaticScale(note)),
	textName(Music::Object::GetNameAsString(Music::Object::chromaticScalePosition)),
	weight(Music::Object::GetWeight(Music::Object::GetFromChromaticScale(note)))
{
}
Music::Object::Object(std::string note) :
	chromaticScalePosition(Music::Object::GetFromChromaticScale(note)),
	textName(GetNameAsString(Music::Object::chromaticScalePosition)),
	weight(Music::Object::GetWeight(Music::Object::GetFromChromaticScale(note)))
{
}

Music::ChromaticScale Music::Object::getChromaticScalePosition()
{
	return Music::Object::chromaticScalePosition;
}
std::string Music::Object::getTextName()
{
	return Music::Object::textName;
}

Music::ChromaticScale Music::Object::goFullStep(Music::ChromaticScale note)
{
	int index = (int)note;
	double haveSteped = 0;
	Music::ChromaticScale currentNote = note;
	do
	{
		index++;
		if (index == 12)
			index = 0;
		currentNote = (Music::ChromaticScale)index;
		haveSteped += .5;
	} while (haveSteped != 1);

	return currentNote;
}
Music::ChromaticScale Music::Object::goHalfStep(Music::ChromaticScale note)
{
	int index = (int)note;
	float haveSteped = 0.0;// = note.getValue();
	Music::ChromaticScale noteToCheck = note;
	do
	{
		index++;
		if (index == 12)
			index = 0;
		noteToCheck = (Music::ChromaticScale)index;
		haveSteped += .5;

	} while (haveSteped != .5);
	noteToCheck = (Music::ChromaticScale)index;
	return noteToCheck;
}
Music::ChromaticScale Music::Object::goStepAndAHalf(Music::ChromaticScale note)
{
	int index = (int)note;
	float haveSteped = 0.0;// = note.getValue();
	Music::ChromaticScale noteToCheck = note;
	do
	{
		index++;
		if (index == 12)
			index = 0;
		noteToCheck = (Music::ChromaticScale)index;
		haveSteped += .5;

	} while (haveSteped != 1.5);
	noteToCheck = (Music::ChromaticScale)index;
	return noteToCheck;
}

Music::ChromaticScale Music::Object::GetFromChromaticScale(char letter)
{
	switch (letter) {
	case 'A':
		return Music::ChromaticScale::A;
	case 'AsBf':
		return Music::ChromaticScale::AsBf;
	case 'B':
		return Music::ChromaticScale::B;
	case 'C':
		return Music::ChromaticScale::C;
	case 'CsDf':
		return Music::ChromaticScale::CsDf;
	case 'D':
		return Music::ChromaticScale::D;
	case 'DsEf':
		return Music::ChromaticScale::DsEf;
	case 'E':
		return Music::ChromaticScale::E;
	case 'F':
		return Music::ChromaticScale::F;
	case 'FsGf':
		return Music::ChromaticScale::FsGf;
	case 'G':
		return Music::ChromaticScale::G;
	case 'GsAf':
		return Music::ChromaticScale::GsAf;
	}
}
Music::ChromaticScale Music::Object::GetFromChromaticScale(std::string letter)
{
	if (letter == "A")
		return Music::ChromaticScale::A;
	else if (letter == "AsBf")
		return Music::ChromaticScale::AsBf;
	else if (letter == "B")
		return Music::ChromaticScale::B;
	else if (letter == "C")
		return Music::ChromaticScale::C;
	else if (letter == "CsDf")
		return Music::ChromaticScale::CsDf;
	else if (letter == "D")
		return Music::ChromaticScale::D;
	else if (letter == "DsEf")
		return Music::ChromaticScale::DsEf;
	else if (letter == "E")
		return Music::ChromaticScale::E;
	else if (letter == "F")
		return Music::ChromaticScale::F;
	else if (letter == "FsGf")
		return Music::ChromaticScale::FsGf;
	else if (letter == "G")
		return Music::ChromaticScale::G;
	else if (letter == "GsAf")
		return Music::ChromaticScale::GsAf;
}
Music::ChromaticScale Music::Object::GetFromChromaticScale(int note)
{
	switch (note) {
	case 0:
		return Music::ChromaticScale::A;
	case 1:
		return Music::ChromaticScale::AsBf;
	case 2:
		return Music::ChromaticScale::B;
	case 3:
		return Music::ChromaticScale::C;
	case 4:
		return Music::ChromaticScale::CsDf;
	case 5:
		return Music::ChromaticScale::D;
	case 6:
		return Music::ChromaticScale::DsEf;
	case 7:
		return Music::ChromaticScale::E;
	case 8:
		return Music::ChromaticScale::F;
	case 9:
		return Music::ChromaticScale::FsGf;
	case 10:
		return Music::ChromaticScale::G;
	case 11:
		return Music::ChromaticScale::GsAf;
	}
}
std::string Music::Object::GetNameAsString(Music::ChromaticScale note) {
	switch (note) {
	case Music::ChromaticScale::A:
		return "A";
	case Music::ChromaticScale::AsBf:
		return "AsBf";
	case Music::ChromaticScale::B:
		return "B";
	case Music::ChromaticScale::C:
		return "C";
	case Music::ChromaticScale::CsDf:
		return "CsDf";
	case Music::ChromaticScale::D:
		return "D";
	case Music::ChromaticScale::DsEf:
		return "DsEf";
	case Music::ChromaticScale::E:
		return "E";
	case Music::ChromaticScale::F:
		return "F";
	case Music::ChromaticScale::FsGf:
		return "FsGf";
	case Music::ChromaticScale::G:
		return "G";
	case Music::ChromaticScale::GsAf:
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
Music::Weight Music::Object::GetWeight(Music::ChromaticScale note)
{
	switch (note) {
	case Music::ChromaticScale::A:
		return Music::Weight::Whole;
	case Music::ChromaticScale::AsBf:
		return Music::Weight::Half;
	case Music::ChromaticScale::B:
		return Music::Weight::Whole;
	case Music::ChromaticScale::C:
		return Music::Weight::Whole;
	case Music::ChromaticScale::CsDf:
		return Music::Weight::Half;
	case Music::ChromaticScale::D:
		return Music::Weight::Whole;
	case Music::ChromaticScale::DsEf:
		return Music::Weight::Half;
	case Music::ChromaticScale::E:
		return Music::Weight::Whole;
	case Music::ChromaticScale::F:
		return Music::Weight::Whole;
	case Music::ChromaticScale::FsGf:
		return Music::Weight::Half;
	case Music::ChromaticScale::G:
		return Music::Weight::Whole;
	case Music::ChromaticScale::GsAf:
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