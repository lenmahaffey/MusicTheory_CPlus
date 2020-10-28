#pragma once
#include "Note.h"

// Constructors
Music::Note::Note(Music::ChromaticScalePosition note) :
	Music::Object(note),
	weight(Music::Note::GetWeight())
{
}

Music::Note::Note(std::string note) :
	Music::Object(note),
	weight(Music::Note::GetWeight())
{

}

Music::Weight Music::Note::GetWeight()
{
	switch (Music::Note::chromaticScalePosition) {
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