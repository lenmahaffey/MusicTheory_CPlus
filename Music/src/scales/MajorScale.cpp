#pragma once
#include "MajorScale.h"

Music::MajorScale::MajorScale(Music::Position::ChromaticScalePosition note) :
	Music::Scale(note, pattern, true),
	pattern{Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::Half,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole}
{
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	Music::MajorScale::setScale(note);
}

Music::MajorScale::MajorScale(int note) :
	Music::Scale(note, pattern, true),
	pattern{Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::Half,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole}
{
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	Music::MajorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}

Music::MajorScale::MajorScale(std::string note) :
	Music::Scale(note, pattern, true),
	pattern{Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::Half,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole}
{
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	Music::MajorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}