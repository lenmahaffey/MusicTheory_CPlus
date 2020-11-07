#pragma once
#include "PentatonicMinorScale.h"
#include "../ScalePatterns.h"

Music::PentatonicMinorScale::PentatonicMinorScale(Music::Position::ChromaticScalePosition note) :
	Music::Scale(note, *pattern, false),
	pattern{ &Music::ScalePattern::pentatonicMinorScale::pentatonicMinorScalePattern }
{
	Music::PentatonicMinorScale::setScale(note);
}

Music::PentatonicMinorScale::PentatonicMinorScale(int note) :
	Music::Scale(note, *pattern, false),
	pattern{ &Music::ScalePattern::pentatonicMinorScale::pentatonicMinorScalePattern }
{
	Music::PentatonicMinorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}

Music::PentatonicMinorScale::PentatonicMinorScale(char note) :
	Music::Scale(note, *pattern, false),
	pattern{ &Music::ScalePattern::pentatonicMinorScale::pentatonicMinorScalePattern }
{
	Music::PentatonicMinorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}