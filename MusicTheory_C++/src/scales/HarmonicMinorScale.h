#pragma once
#include "../Scale.h"

namespace Music {

	class HarmonicMinorScale : public Music::Scale
	{
	public:
		Music::HarmonicMinorScale();
		Music::HarmonicMinorScale(Music::Position::ChromaticScalePosition note);
		Music::HarmonicMinorScale(int note);
		Music::HarmonicMinorScale(std::string note);

	protected:
		Music::Position::Step pattern[7] = { Music::Position::Step::Half,
											Music::Position::Step::Whole,
											Music::Position::Step::Half,
											Music::Position::Step::Whole,
											Music::Position::Step::Whole,
											Music::Position::Step::Half,
											Music::Position::Step::WholeandAHalf };
	private:
		void resolveScale();
	};
}

