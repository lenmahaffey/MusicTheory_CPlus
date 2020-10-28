#pragma once
#include "../Scale.h"

namespace Music {

    class MajorScale : public Music::Scale
    {
	public:
		Music::MajorScale() = default;
		Music::MajorScale(Music::ChromaticScalePosition note);
		Music::MajorScale(int note);
		Music::MajorScale(char note);

	private:
		bool isMajor = true;
		Music::Step pattern[7] =
		{
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Half,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::Whole
		};
	};
}

