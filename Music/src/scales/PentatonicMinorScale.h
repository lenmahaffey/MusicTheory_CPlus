#pragma once
#include "../Scale.h"
namespace Music {
	class PentatonicMinorScale : public Music::Scale
	{
	public:
		Music::PentatonicMinorScale() = default;
		Music::PentatonicMinorScale(Music::ChromaticScale note);
		Music::PentatonicMinorScale(int noteIndex);
		Music::PentatonicMinorScale(char note);

	private:
		bool isMajor = false;
		Music::Step pattern[7] =
		{
			Music::Step::Whole,
			Music::Step::WholeandAHalf,
			Music::Step::Whole,
			Music::Step::Whole,
			Music::Step::WholeandAHalf,
			Music::Step::NONE,
			Music::Step::NONE
		};
	};
}

