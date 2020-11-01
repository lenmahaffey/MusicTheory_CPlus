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

	protected:
		Music::Step pattern[7];
	};
}

