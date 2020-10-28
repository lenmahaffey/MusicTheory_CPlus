#pragma once
#include <string>
#include "ChromaticScale.h"
#include "Step.h"
#include "Weight.h"
//#include "Music.h"

namespace Music {

	class Object
	{
	public:
		Music::Object();
		Music::Object(Music::ChromaticScale note);
		Music::Object(char note);
		Music::Object(std::string note);

		Music::ChromaticScale getChromaticScalePosition();
		std::string getTextName();

		Music::ChromaticScale goFullStep(Music::ChromaticScale note);
		Music::ChromaticScale goHalfStep(Music::ChromaticScale note);
		Music::ChromaticScale goStepAndAHalf(Music::ChromaticScale note);

		static Music::ChromaticScale GetFromChromaticScale(char note);
		static Music::ChromaticScale GetFromChromaticScale(std::string note);
		static Music::ChromaticScale GetFromChromaticScale(int note);
		static std::string GetNameAsString(Music::ChromaticScale note);
		static std::string GetWeightAsString(Music::Weight weight);
		static std::string GetStepAsString(Music::Step step);
		static Music::Weight GetWeight(Music::ChromaticScale note);

	protected:
		Music::ChromaticScale chromaticScalePosition;
		std::string textName;
		Music::Weight weight;
	};
}
