#pragma once
#include "PentatonicMajorScale.h"
Music::PentatonicMajorScale::PentatonicMajorScale(Music::ChromaticScalePosition note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::PentatonicMajorScale::setScale(note);
}

Music::PentatonicMajorScale::PentatonicMajorScale(int note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::PentatonicMajorScale::setScale(Music::Object::GetPositionFromChromaticScale(note));
}

Music::PentatonicMajorScale::PentatonicMajorScale(char note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::PentatonicMajorScale::setScale(Music::Object::GetPositionFromChromaticScale(note));
}