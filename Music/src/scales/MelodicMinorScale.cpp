#pragma once
#include "MelodicMinorScale.h"

Music::MelodicMinorScale::MelodicMinorScale(Music::Position::ChromaticScalePosition note) :
	Music::Scale(note, pattern, isMajor),
	pattern{Music::Position::Step::Half,
			Music::Position::Step::Whole,
			Music::Position::Step::Half,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole}
{
	Music::MelodicMinorScale::setScale(note);
}

Music::MelodicMinorScale::MelodicMinorScale(int note) :
	Music::Scale(note, pattern, isMajor),
	pattern{Music::Position::Step::Half,
			Music::Position::Step::Whole,
			Music::Position::Step::Half,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole}
{
	Music::MelodicMinorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}

Music::MelodicMinorScale::MelodicMinorScale(char note) :
	Music::Scale(note, pattern, isMajor),
	pattern{Music::Position::Step::Half,
			Music::Position::Step::Whole,
			Music::Position::Step::Half,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole,
			Music::Position::Step::Whole}
{
	Music::MelodicMinorScale::setScale(Music::Position::GetPositionFromChromaticScale(note));
}