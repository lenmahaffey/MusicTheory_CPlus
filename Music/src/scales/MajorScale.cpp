#pragma once
#include "MajorScale.h"
#include "../ScalePatterns.h"

Music::MajorScale::MajorScale(Music::Position::ChromaticScalePosition note) :
	Music::Scale(note, *pattern, true),
	pattern{ }
{
	Music::MajorScale::setScale(note);
}

Music::MajorScale::MajorScale(int note) :
	Music::Scale(note, *pattern, true),
	pattern{ }
{
	Music::MajorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}

Music::MajorScale::MajorScale(std::string note) :
	Music::Scale(note, *pattern, true),
	pattern{ }
{
}