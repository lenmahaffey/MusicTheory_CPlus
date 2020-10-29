#pragma once
#include "../Scale.h"

namespace Music {

	class MelodicMinorScale : public Music::Scale
	{
	public:
		Music::MelodicMinorScale() = default;
		Music::MelodicMinorScale(Music::ChromaticScalePosition note);
		Music::MelodicMinorScale(int noteIndex);
		Music::MelodicMinorScale(char note);

	private:
		bool isMajor = false;
		Music::Step pattern[7] =
		{
			Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Whole,
		};
	};
}

