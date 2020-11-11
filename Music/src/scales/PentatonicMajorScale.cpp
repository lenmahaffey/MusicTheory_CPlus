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
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
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
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
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
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	Music::PentatonicMajorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}