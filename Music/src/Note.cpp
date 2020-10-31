#pragma once
#include "Note.h"

//Constructors
Music::Note::Note() :
	Music::Object(),
	weight(Music::Object::GetWeightForPosition(Music::Object::GetPositionFromChromaticScale("NONE")))
{
}

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

//Accessors
Music::Weight Music::Note::GetWeight()
{
	return Music::Note::weight;
}
