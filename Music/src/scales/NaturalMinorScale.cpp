#pragma once
#include "NaturalMinorScale.h"
Music::NaturalMinorScale::NaturalMinorScale(Music::ChromaticScale note) :
	Music::Scale(note, scalePattern, isMajor)
{
	Music::NaturalMinorScale::setScale(note);
}

Music::NaturalMinorScale::NaturalMinorScale(int note) :
	Music::Scale(note, scalePattern, isMajor)
{
	Music::NaturalMinorScale::setScale(Music::Object::GetFromChromaticScale(note));
}

Music::NaturalMinorScale::NaturalMinorScale(char note) :
	Music::Scale(note, scalePattern, isMajor)
{
	Music::NaturalMinorScale::setScale(Music::Object::GetFromChromaticScale(note));
}