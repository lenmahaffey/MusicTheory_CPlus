#pragma once
#include "../Scale.h"

namespace Music {

	class PentatonicMajorScale : public Music::Scale
	{
	public:
		Music::PentatonicMajorScale() = default;
		Music::PentatonicMajorScale(Music::ChromaticScalePosition note);
		Music::PentatonicMajorScale(int noteIndex);
		Music::PentatonicMajorScale(char note);

	protected:
		Music::Step pattern[7];
	};
}

