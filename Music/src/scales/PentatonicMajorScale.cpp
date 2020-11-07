#pragma once
#include "PentatonicMajorScale.h"

Music::PentatonicMajorScale::PentatonicMajorScale(Music::Position::ChromaticScalePosition note) :
	Music::Scale(note, pattern, true),
	pattern{ *ScalePattern().pentatonicMajorScalePattern }
{
	Music::PentatonicMajorScale::setScale(note);
}

Music::PentatonicMajorScale::PentatonicMajorScale(int note) :
	Music::Scale(note, pattern, true),
	pattern{ *ScalePattern().pentatonicMajorScalePattern }
{
	Music::PentatonicMajorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}

Music::PentatonicMajorScale::PentatonicMajorScale(char note) :
	Music::Scale(note, pattern, true),
	pattern{ *ScalePattern().pentatonicMajorScalePattern }
{
	Music::PentatonicMajorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}