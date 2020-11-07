#pragma once
#include "NaturalMinorScale.h"

Music::NaturalMinorScale::NaturalMinorScale(Music::Position::ChromaticScalePosition note) :
	Music::Scale(note, pattern, false),
	pattern{ *ScalePattern().pentatonicMinorScalePattern }
{
	Music::NaturalMinorScale::setScale(note);
}

Music::NaturalMinorScale::NaturalMinorScale(int note) :
	Music::Scale(note, pattern, false),
	pattern{ *ScalePattern().pentatonicMinorScalePattern }
{
	Music::NaturalMinorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}

Music::NaturalMinorScale::NaturalMinorScale(char note) :
	Music::Scale(note, pattern, false),
	pattern{ *ScalePattern().pentatonicMinorScalePattern }
{
	Music::NaturalMinorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}