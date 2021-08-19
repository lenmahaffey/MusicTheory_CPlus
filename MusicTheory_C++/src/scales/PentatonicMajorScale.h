#pragma once
#include "../Scale.h"

namespace Music {

	class PentatonicMajorScale : public Music::Scale
	{
	public:
		Music::PentatonicMajorScale();
		Music::PentatonicMajorScale(Music::Position::ChromaticScalePosition note);
		Music::PentatonicMajorScale(int noteIndex);
		Music::PentatonicMajorScale(char note);

	protected:
		Music::Position::Step pattern[7]{Music::Position::Step::WholeandAHalf,
										 Music::Position::Step::Whole,
										 Music::Position::Step::Whole,
										 Music::Position::Step::WholeandAHalf,
										 Music::Position::Step::Whole };
		void resolveScale();
	};
}

