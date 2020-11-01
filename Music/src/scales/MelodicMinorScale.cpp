#pragma once
#include "MelodicMinorScale.h"

Music::MelodicMinorScale::MelodicMinorScale(Music::ChromaticScalePosition note) :
	Music::Scale(note, pattern, isMajor),
	pattern{Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Whole}
{
	Music::MelodicMinorScale::setScale(note);
}

Music::MelodicMinorScale::MelodicMinorScale(int note) :
	Music::Scale(note, pattern, isMajor),
	pattern{Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Whole}
{
	Music::MelodicMinorScale::setScale(Music::Object::GetPositionFromChromaticScale(note));
}

Music::MelodicMinorScale::MelodicMinorScale(char note) :
	Music::Scale(note, pattern, isMajor),
	pattern{Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Whole}
{
	Music::MelodicMinorScale::setScale(Music::Object::GetPositionFromChromaticScale(note));
}