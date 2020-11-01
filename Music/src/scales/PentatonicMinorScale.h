#pragma once
#include "../Scale.h"

namespace Music {

	class PentatonicMinorScale : public Music::Scale
	{
	public:
		Music::PentatonicMinorScale() = default;
		Music::PentatonicMinorScale(Music::ChromaticScalePosition note);
		Music::PentatonicMinorScale(int noteIndex);
		Music::PentatonicMinorScale(char note);

	protected:
		Music::Step pattern[7];
	};
}

