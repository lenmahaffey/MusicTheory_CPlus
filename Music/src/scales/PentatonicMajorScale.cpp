#pragma once
#include "PentatonicMajorScale.h"

Music::PentatonicMajorScale::PentatonicMajorScale(Music::Position::ChromaticScalePosition note) :
	Music::Scale(note, pattern, true),
	pattern{Music::Position::Step::WholeandAHalf,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::WholeandAHalf,
			Music::Position::Step::Whole}
{
	Music::PentatonicMajorScale::setScale(note);
}

Music::PentatonicMajorScale::PentatonicMajorScale(int note) :
	Music::Scale(note, pattern, true),
	pattern{Music::Position::Step::WholeandAHalf,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::WholeandAHalf,
			Music::Position::Step::Whole}
{
	Music::PentatonicMajorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}

Music::PentatonicMajorScale::PentatonicMajorScale(char note) :
	Music::Scale(note, pattern, true),
	pattern{Music::Position::Step::WholeandAHalf,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::WholeandAHalf,
			Music::Position::Step::Whole}
{
	Music::PentatonicMajorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}