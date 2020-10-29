#pragma once
#include "MajorScale.h"
Music::MajorScale::MajorScale(Music::ChromaticScalePosition note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::MajorScale::setScale(note);
}

Music::MajorScale::MajorScale(int note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::MajorScale::setScale(Music::Object::GetPositionFromChromaticScale(note));
}

Music::MajorScale::MajorScale(char note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::MajorScale::setScale(Music::Object::GetPositionFromChromaticScale(note));
}