#pragma once
#include "MelodicMinorScale.h"
#include "../ScalePatterns.h"

Music::MelodicMinorScale::MelodicMinorScale(Music::Position::ChromaticScalePosition note) :
	Music::Scale(note, *pattern, isMajor),
	pattern{ }
{
	Music::MelodicMinorScale::setScale(note);
}

Music::MelodicMinorScale::MelodicMinorScale(int note) :
	Music::Scale(note, *pattern, isMajor),
	pattern{ }
{
	Music::MelodicMinorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}

Music::MelodicMinorScale::MelodicMinorScale(char note) :
	Music::Scale(note, *pattern, isMajor),
	pattern{ }
{
	Music::MelodicMinorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}