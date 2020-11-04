#pragma once
#include "PentatonicMajorScale.h"

Music::PentatonicMajorScale::PentatonicMajorScale(Music::ChromaticScalePosition note) :
	Music::Scale(note, pattern, true),
	pattern{Music::Step::WholeandAHalf,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::WholeandAHalf,
			Music::Step::Whole}
{
	Music::PentatonicMajorScale::setScale(note);
}

Music::PentatonicMajorScale::PentatonicMajorScale(int note) :
	Music::Scale(note, pattern, true),
	pattern{Music::Step::WholeandAHalf,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::WholeandAHalf,
			Music::Step::Whole}
{
	Music::PentatonicMajorScale::setScale(Music::GetPositionFromChromaticScale(note));
}

Music::PentatonicMajorScale::PentatonicMajorScale(char note) :
	Music::Scale(note, pattern, true),
	pattern{Music::Step::WholeandAHalf,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::WholeandAHalf,
			Music::Step::Whole}
{
	Music::PentatonicMajorScale::setScale(Music::GetPositionFromChromaticScale(note));
}