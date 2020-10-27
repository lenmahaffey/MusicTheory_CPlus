#pragma once
#include "HarmonicMinorScale.h"
Music::HarmonicMinorScale::HarmonicMinorScale(Music::ChromaticScale note) :
	Music::Scale(note, pattern, false)
{
	Music::HarmonicMinorScale::setScale(note);
}

Music::HarmonicMinorScale::HarmonicMinorScale(int note) :
	Music::Scale(note, pattern, false)
{
	Music::HarmonicMinorScale::setScale( (Music::ChromaticScale) note );
}

Music::HarmonicMinorScale::HarmonicMinorScale(char note) :
	Music::Scale(note, pattern, false)
{
	Music::HarmonicMinorScale::setScale(Music::GetNoteFromChromaticScale(note));
}
