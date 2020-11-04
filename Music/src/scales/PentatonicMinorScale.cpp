#pragma once
#include "PentatonicMinorScale.h"

Music::PentatonicMinorScale::PentatonicMinorScale(Music::ChromaticScalePosition note) :
	Music::Scale(note, pattern, false),
	pattern{Music::Step::Whole,
			Music::Step::WholeandAHalf,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::WholeandAHalf}
{
	Music::PentatonicMinorScale::setScale(note);
}

Music::PentatonicMinorScale::PentatonicMinorScale(int note) :
	Music::Scale(note, pattern, false),
	pattern{Music::Step::Whole,
			Music::Step::WholeandAHalf,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::WholeandAHalf}
{
	Music::PentatonicMinorScale::setScale(Music::GetPositionFromChromaticScale(note));
}

Music::PentatonicMinorScale::PentatonicMinorScale(char note) :
	Music::Scale(note, pattern, false),
	pattern{Music::Step::Whole,
		Music::Step::WholeandAHalf,
		Music::Step::Whole,
		Music::Step::Whole,
		Music::Step::WholeandAHalf}
{
	Music::PentatonicMinorScale::setScale(Music::GetPositionFromChromaticScale(note));
}