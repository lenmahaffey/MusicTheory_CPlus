#pragma once
#include "NaturalMinorScale.h"
Music::NaturalMinorScale::NaturalMinorScale(Music::ChromaticScalePosition note) :
	Music::Scale(note, scalePattern, isMajor)
{
	Music::NaturalMinorScale::setScale(note);
}

Music::NaturalMinorScale::NaturalMinorScale(int note) :
	Music::Scale(note, scalePattern, isMajor)
{
	Music::NaturalMinorScale::setScale(Music::Object::GetPositionFromChromaticScale(note));
}

Music::NaturalMinorScale::NaturalMinorScale(char note) :
	Music::Scale(note, scalePattern, isMajor)
{
	Music::NaturalMinorScale::setScale(Music::Object::GetPositionFromChromaticScale(note));
}