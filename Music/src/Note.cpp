#pragma once
#include "Note.h"

// Constructors
Music::Note::Note(Music::ChromaticScalePosition note) :
	Music::Object(note),
	weight(Music::Object::GetWeightForPosition(note))
{
}

Music::Note::Note(std::string note) :
	Music::Object(note),
	weight(Music::Object::GetWeightForPosition(Music::Object::GetPositionFromChromaticScale(note)))
{

}

Music::Weight Music::Note::GetWeight()
{
	return Music::Note::weight;
}