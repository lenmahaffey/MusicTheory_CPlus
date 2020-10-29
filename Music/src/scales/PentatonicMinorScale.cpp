#pragma once
#include "PentatonicMinorScale.h"
Music::PentatonicMinorScale::PentatonicMinorScale(Music::ChromaticScalePosition note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::PentatonicMinorScale::setScale(note);
}

Music::PentatonicMinorScale::PentatonicMinorScale(int note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::PentatonicMinorScale::setScale(Music::Object::GetPositionFromChromaticScale(note));
}

Music::PentatonicMinorScale::PentatonicMinorScale(char note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::PentatonicMinorScale::setScale(Music::Object::GetPositionFromChromaticScale(note));
}