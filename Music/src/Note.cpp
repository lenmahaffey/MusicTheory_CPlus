#pragma once
#include "Note.h"

Music::Note::Note() :
	Music::Object(),
	weight(Music::Object::GetWeightForPosition(Music::Object::GetPositionFromChromaticScale("NONE")))
{
}

Music::Note::Note( Music::ChromaticScalePosition note) :
	Music::Object(note),
	weight(Music::Object::GetWeightForPosition(note))
{
}

Music::Note::Note( std::string note) :
	Music::Object(note),
	weight(Music::Object::GetWeightForPosition(Music::Object::GetPositionFromChromaticScale(note)))
{

}

Music::Weight Music::Note::GetWeight()
{
	return Music::Note::weight;
}

// Music::Note& Music::Note::operator=( Music::Note otherNote)
//{
//	if (this != &otherNote)
//	{
//		*this = otherNote;
//	}
//	return *this;
//}
