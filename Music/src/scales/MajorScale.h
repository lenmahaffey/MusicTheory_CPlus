#pragma once
#include "../Scale.h"

namespace Music {

    class MajorScale : public Music::Scale
    {
	public:
		Music::MajorScale();
		Music::MajorScale(Music::Position::ChromaticScalePosition note);
		Music::MajorScale(int note);
		Music::MajorScale(std::string note);

	protected:
		Music::Position::Step(*pattern)[7];
	};
}

