#pragma once
#include "HarmonicMinorScale.h"

Music::HarmonicMinorScale::HarmonicMinorScale(Music::Position::ChromaticScalePosition note) :
	Music::Scale(note, pattern, false),
	pattern{ *ScalePattern().harmonicMinorScalePattern }
{
	Music::HarmonicMinorScale::setScale(note);
}

Music::HarmonicMinorScale::HarmonicMinorScale(int note) :
	Music::Scale(note, pattern, false),
	pattern{ *ScalePattern().harmonicMinorScalePattern }
{
	Music::HarmonicMinorScale::setScale(Music::Position::GetPositionFromChromaticScale(note) );
}

Music::HarmonicMinorScale::HarmonicMinorScale(char note) :
	Music::Scale(note, pattern, false),
	pattern{ *ScalePattern().harmonicMinorScalePattern }
{
	Music::HarmonicMinorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}
