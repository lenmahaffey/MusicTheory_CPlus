#pragma once
#include "../Scale.h"

namespace Music {

    class NaturalMinorScale : public Music::Scale
    {
	public:
		Music::NaturalMinorScale() = default;
		Music::NaturalMinorScale(Music::ChromaticScalePosition note);
		Music::NaturalMinorScale(int noteIndex);
		Music::NaturalMinorScale(char note);

	protected:
		Music::Step pattern[7];
    };
}

