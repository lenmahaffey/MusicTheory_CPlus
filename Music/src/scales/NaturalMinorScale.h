#pragma once
#include "../Scale.h"

namespace Music {

    class NaturalMinorScale : public Music::Scale
    {
	public:
		Music::NaturalMinorScale() = default;
		Music::NaturalMinorScale(Music::ChromaticScale note);
		Music::NaturalMinorScale(int noteIndex);
		Music::NaturalMinorScale(char note);

	private:
		bool isMajor = false;
		Music::Step scalePattern[7] =
		{
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole,
		};
    };
}

