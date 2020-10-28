#pragma once
#include "MelodicMinorScale.h"

Music::MelodicMinorScale::MelodicMinorScale(Music::ChromaticScale note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::MelodicMinorScale::setScale(note);
}

Music::MelodicMinorScale::MelodicMinorScale(int note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::MelodicMinorScale::setScale(Music::Object::GetFromChromaticScale(note));
}

Music::MelodicMinorScale::MelodicMinorScale(char note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::MelodicMinorScale::setScale(Music::Object::GetFromChromaticScale(note));
}