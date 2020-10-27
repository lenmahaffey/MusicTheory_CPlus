#include "ChromaticScale.h"

Music::ChromaticScale Music::GetNoteFromChromaticScale(char note)
{
	switch (note) {
	case 'NONE':
		return Music::ChromaticScale::NONE;
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

Music::ChromaticScale Music::GetNoteFromChromaticScale(std::string note)
{
	if (note == "NONE")
		return Music::ChromaticScale::NONE;
	if (note == "A")
		return Music::ChromaticScale::A;
	if (note == "AsBf")
		return Music::ChromaticScale::AsBf;
	if (note == "B")
		return Music::ChromaticScale::B;
	if (note == "C")
		return Music::ChromaticScale::C;
	if (note == "CsDf")
		return Music::ChromaticScale::CsDf;
	if (note == "D")
		return Music::ChromaticScale::D;
	if (note == "DsEf")
		return Music::ChromaticScale::DsEf;
	if (note == "E")
		return Music::ChromaticScale::E;
	if (note == "F")
		return Music::ChromaticScale::F;
	if (note == "FsGf")
		return Music::ChromaticScale::FsGf;
	if (note == "G")
		return Music::ChromaticScale::G;
	if (note == "GsAf")
		return Music::ChromaticScale::GsAf;
}

Music::ChromaticScale Music::GetNoteFromChromaticScale(int note)
{
	switch (note) {
	case 0:
		return Music::ChromaticScale::NONE;
	case 1:
		return Music::ChromaticScale::A;
	case 2:
		return Music::ChromaticScale::AsBf;
	case 3:
		return Music::ChromaticScale::B;
	case 4:
		return Music::ChromaticScale::C;
	case 5:
		return Music::ChromaticScale::CsDf;
	case 6:
		return Music::ChromaticScale::D;
	case 7:
		return Music::ChromaticScale::DsEf;
	case 8:
		return Music::ChromaticScale::E;
	case 9:
		return Music::ChromaticScale::F;
	case 10:
		return Music::ChromaticScale::FsGf;
	case 11:
		return Music::ChromaticScale::G;
	case 12:
		return Music::ChromaticScale::GsAf;
	}
}

std::string Music::GetNoteNameAsString(Music::ChromaticScale note) {
	switch (note) {
	case Music::ChromaticScale::NONE:
		return "NONE";
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
