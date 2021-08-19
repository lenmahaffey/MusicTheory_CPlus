#pragma once
#include "../Scale.h"

namespace Music {

    class NaturalMinorScale : public Music::Scale
    {
	public:
		Music::NaturalMinorScale();
		Music::NaturalMinorScale(Music::Position::ChromaticScalePosition note);
		Music::NaturalMinorScale(int noteIndex);
		Music::NaturalMinorScale(std::string note);

	protected:
		Music::Position::Step pattern[7] = {Music::Position::Step::Whole,
											Music::Position::Step::Whole,
											Music::Position::Step::Half,
											Music::Position::Step::Whole,
											Music::Position::Step::Whole,
											Music::Position::Step::Half,
											Music::Position::Step::Whole };
		void resolveScale();
    };
}

