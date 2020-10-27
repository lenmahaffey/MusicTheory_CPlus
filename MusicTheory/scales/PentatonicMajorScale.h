#pragma once
#include "../Scale.h"
namespace Music {
	class PentatonicMajorScale : public Music::Scale
	{
	public:
		Music::PentatonicMajorScale() = default;
		Music::PentatonicMajorScale(Music::ChromaticScale note);
		Music::PentatonicMajorScale(int noteIndex);
		Music::PentatonicMajorScale(char note);

	private:
		bool isMajor = true;
		Music::Step pattern[7] =
		{
			Music::Step::WholeandAHalf,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::WholeandAHalf,
			Music::Step::Whole,
			Music::Step::NONE,
			Music::Step::NONE
		};
	};
}

