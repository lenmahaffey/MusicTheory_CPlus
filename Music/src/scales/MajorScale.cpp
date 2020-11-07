#pragma once
#include "MajorScale.h"

Music::MajorScale::MajorScale(Music::Position::ChromaticScalePosition note) :
	Music::Scale(note, pattern, true),
	pattern{ *ScalePattern().majorScalePattern }
{
	Music::MajorScale::setScale(note);
}

Music::MajorScale::MajorScale(int note) :
	Music::Scale(note, pattern, true),
	pattern{ *ScalePattern().majorScalePattern }
{
	Music::MajorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}

Music::MajorScale::MajorScale(std::string note) :
	Music::Scale(note, pattern, true),
	pattern{ *ScalePattern().majorScalePattern }
{
}