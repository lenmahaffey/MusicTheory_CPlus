#pragma once
#include "../Scale.h"

namespace Music {

	class MelodicMinorScale : public Music::Scale
	{
	public:
		Music::MelodicMinorScale();
		Music::MelodicMinorScale(Music::Position::ChromaticScalePosition note);
		Music::MelodicMinorScale(int noteIndex);
		Music::MelodicMinorScale(char note);

	protected:
		Music::Position::Step pattern[7] = { Music::Position::Step::Half,
											Music::Position::Step::Whole,
											Music::Position::Step::Half,
											Music::Position::Step::Whole,
											Music::Position::Step::Whole,
											Music::Position::Step::Whole,
											Music::Position::Step::Whole };
	private:
		void resolveScale();
	};
}

