#pragma once
#include "../Scale.h"

namespace Music {

    class MajorScale : public Music::Scale
    {
	public:
		MajorScale();
		MajorScale(Music::Position::ChromaticScalePosition note);
		MajorScale(int note);
		MajorScale(std::string note);

	protected:
		Music::Position::Step pattern[7] = {Music::Position::Step::Whole,
											Music::Position::Step::Whole,
											Music::Position::Step::Whole,
											Music::Position::Step::Half,
											Music::Position::Step::Whole,
											Music::Position::Step::Whole,
											Music::Position::Step::Whole};

	private:
		void resolveScale();
	};
}

