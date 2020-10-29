#pragma once
#include "../Scale.h"

namespace Music {

	class HarmonicMinorScale : public Music::Scale
	{
	public:
		Music::HarmonicMinorScale() = default;
		Music::HarmonicMinorScale(Music::ChromaticScalePosition note);
		Music::HarmonicMinorScale(int note);
		Music::HarmonicMinorScale(char note);

	private:
		bool isMajor = false;
		Music::Step pattern[7] =
		{
			Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::WholeandAHalf,
		};
	};
}

