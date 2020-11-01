#pragma once
#include "MajorScale.h"

Music::MajorScale::MajorScale(Music::ChromaticScalePosition note) :
	Music::Scale(note, pattern, true),
	pattern{Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Whole}
{
	Music::MajorScale::setScale(note);
}

Music::MajorScale::MajorScale(int note) :
	Music::Scale(note, pattern, true),
	pattern{Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Whole}
{
	Music::MajorScale::setScale(Music::Object::GetPositionFromChromaticScale(note));
}

Music::MajorScale::MajorScale(std::string note) :
	Music::Scale(note, pattern, true),
	pattern{Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Whole}
{
}