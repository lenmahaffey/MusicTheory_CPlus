#pragma once
#include <string>
#include "ChromaticScale.h"
#include "Step.h"
#include "Weight.h"

namespace Music {

	class Object
	{
	public:
		Music::Object();
		Music::Object(Music::ChromaticScalePosition note);
		Music::Object(std::string note);
		Music::Object(int note);

		Music::ChromaticScalePosition getChromaticScalePosition();
		std::string getNameAsString();

		Music::ChromaticScalePosition accendFullStep();
		Music::ChromaticScalePosition accendHalfStep();
		Music::ChromaticScalePosition accendStepAndAHalf();

	protected:
		const Music::ChromaticScalePosition chromaticScalePosition;
		const std::string textName;

		static Music::ChromaticScalePosition GetPositionFromChromaticScale(std::string note);
		static Music::ChromaticScalePosition GetPositionFromChromaticScale(int note);
		static std::string GetPositionAsString(Music::ChromaticScalePosition note);
		static std::string GetWeightAsString(Music::Weight weight);
		static std::string GetStepAsString(Music::Step step);
	};
}
