#pragma once
#include "MelodicMinorScale.h"

Music::MelodicMinorScale::MelodicMinorScale(Music::ChromaticScalePosition note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::MelodicMinorScale::setScale(note);
}

Music::MelodicMinorScale::MelodicMinorScale(int note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::MelodicMinorScale::setScale(Music::Object::GetPositionFromChromaticScale(note));
}

Music::MelodicMinorScale::MelodicMinorScale(char note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::MelodicMinorScale::setScale(Music::Object::GetPositionFromChromaticScale(note));
}