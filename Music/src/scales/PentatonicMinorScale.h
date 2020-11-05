#pragma once
#include "../Scale.h"

namespace Music {

	class PentatonicMinorScale : public Music::Scale
	{
	public:
		Music::PentatonicMinorScale() = default;
		Music::PentatonicMinorScale(Music::Position::ChromaticScalePosition note);
		Music::PentatonicMinorScale(int noteIndex);
		Music::PentatonicMinorScale(char note);

	protected:
		Music::Position::Step(*pattern)[7];
	};
}

