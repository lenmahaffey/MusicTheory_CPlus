#pragma once
#include "PentatonicMinorScale.h"

Music::PentatonicMinorScale::PentatonicMinorScale(Music::Position::ChromaticScalePosition note) :
	Music::Scale(note, pattern, false),
	pattern{Music::Position::Step::Whole,
			Music::Position::Step::WholeandAHalf,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::WholeandAHalf}
{
	Music::PentatonicMinorScale::setScale(note);
}

Music::PentatonicMinorScale::PentatonicMinorScale(int note) :
	Music::Scale(note, pattern, false),
	pattern{Music::Position::Step::Whole,
			Music::Position::Step::WholeandAHalf,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::WholeandAHalf}
{
	Music::PentatonicMinorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}

Music::PentatonicMinorScale::PentatonicMinorScale(char note) :
	Music::Scale(note, pattern, false),
	pattern{Music::Position::Step::Whole,
			Music::Position::Step::WholeandAHalf,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::WholeandAHalf}
{
	Music::PentatonicMinorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}