#pragma once
#include "Object.h"

Music::Object::Object()
{
}

Music::Object::Object(Music::ChromaticScale note) :
	note(note),
	name(GetNoteName(note))
{
}

Music::Object::Object(char note) :
	note(Music::Object::GetFromChromaticScale(note)),
	name(GetNoteName(Music::Object::note))
{
}

Music::Object::Object(std::string note) :
	note(Music::Object::GetFromChromaticScale(note)),
	name(GetNoteName(Music::Object::note))
{
}

Music::ChromaticScale Music::Object::getName()
{
	return Music::Object::note;
}

std::string Music::Object::getTextName()
{
	return Music::Object::name;
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
	if (letter == "AsBf")
		return Music::ChromaticScale::AsBf;
	if (letter == "B")
		return Music::ChromaticScale::B;
	if (letter == "C")
		return Music::ChromaticScale::C;
	if (letter == "CsDf")
		return Music::ChromaticScale::CsDf;
	if (letter == "D")
		return Music::ChromaticScale::D;
	if (letter == "DsEf")
		return Music::ChromaticScale::DsEf;
	if (letter == "E")
		return Music::ChromaticScale::E;
	if (letter == "F")
		return Music::ChromaticScale::F;
	if (letter == "FsGf")
		return Music::ChromaticScale::FsGf;
	if (letter == "G")
		return Music::ChromaticScale::G;
	if (letter == "GsAf")
		return Music::ChromaticScale::GsAf;
}

std::string Music::Object::GetNoteName(Music::ChromaticScale note) {
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
	}
}