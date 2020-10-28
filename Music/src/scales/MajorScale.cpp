#pragma once
#include "MajorScale.h"
Music::MajorScale::MajorScale(Music::ChromaticScale note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::MajorScale::setScale(note);
}

Music::MajorScale::MajorScale(int note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::MajorScale::setScale(Music::Object::GetFromChromaticScale(note));
}

Music::MajorScale::MajorScale(char note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::MajorScale::setScale(Music::Object::GetFromChromaticScale(note));
}