#pragma once
#include "PentatonicMajorScale.h"
Music::PentatonicMajorScale::PentatonicMajorScale(Music::ChromaticScale note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::PentatonicMajorScale::setScale(note);
}

Music::PentatonicMajorScale::PentatonicMajorScale(int note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::PentatonicMajorScale::setScale(Music::Object::GetFromChromaticScale(note));
}

Music::PentatonicMajorScale::PentatonicMajorScale(char note) :
	Music::Scale(note, pattern, isMajor)
{
	Music::PentatonicMajorScale::setScale(Music::Object::GetFromChromaticScale(note));
}