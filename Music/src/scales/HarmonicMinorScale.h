#pragma once
#include "../Scale.h"

namespace Music {

	class HarmonicMinorScale : public Music::Scale
	{
	public:
		Music::HarmonicMinorScale();
		Music::HarmonicMinorScale(Music::Position::ChromaticScalePosition note);
		Music::HarmonicMinorScale(int note);
		Music::HarmonicMinorScale(char note);

	protected:
		Music::Position::Step(*pattern)[7];
	};
}

