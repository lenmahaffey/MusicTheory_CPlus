#pragma once
#include "NaturalMinorScale.h"

Music::NaturalMinorScale::NaturalMinorScale(Music::ChromaticScalePosition note) :
	Music::Scale(note, pattern, false),
	pattern{Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole}
{
	Music::NaturalMinorScale::setScale(note);
}

Music::NaturalMinorScale::NaturalMinorScale(int note) :
	Music::Scale(note, pattern, false),
	pattern{Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole}
{
	Music::NaturalMinorScale::setScale(Music::Object::GetPositionFromChromaticScale(note));
}

Music::NaturalMinorScale::NaturalMinorScale(char note) :
	Music::Scale(note, pattern, false),
	pattern{Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole}
{
	Music::NaturalMinorScale::setScale(Music::Object::GetPositionFromChromaticScale(note));
}