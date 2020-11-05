#pragma once
#include "NaturalMinorScale.h"
#include "../ScalePatterns.h"

Music::NaturalMinorScale::NaturalMinorScale(Music::Position::ChromaticScalePosition note) :
	Music::Scale(note, *pattern, false),
	pattern{ }
{
	Music::NaturalMinorScale::setScale(note);
}

Music::NaturalMinorScale::NaturalMinorScale(int note) :
	Music::Scale(note, *pattern, false),
	pattern{ }
{
	Music::NaturalMinorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}

Music::NaturalMinorScale::NaturalMinorScale(char note) :
	Music::Scale(note, *pattern, false),
	pattern{ }
{
	Music::NaturalMinorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}