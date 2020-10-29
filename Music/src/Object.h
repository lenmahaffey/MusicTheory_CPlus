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

		Music::ChromaticScalePosition getPosition();
		std::string getNameAsString();

		Music::ChromaticScalePosition accendFullStep();
		Music::ChromaticScalePosition accendHalfStep();
		Music::ChromaticScalePosition accendStepAndAHalf();
		bool operator==(const Music::Object&) const;
		bool operator !=(const Music::Object&) const;
		Music::Object operator ++();
		Music::Object operator ++(int);
		Music::Object operator --();
		Music::Object operator --(int);
		bool operator <(const Music::Object& o1);
		bool operator <=(const Music::Object& o1);
		bool operator >(const Music::Object& o1);
		bool operator >=(const Music::Object& o1);

	protected:
		Music::ChromaticScalePosition position;
		std::string textName;

		static Music::ChromaticScalePosition GetPositionFromChromaticScale(std::string note);
		static Music::ChromaticScalePosition GetPositionFromChromaticScale(int note);
		static Music::Weight GetWeightForPosition(Music::ChromaticScalePosition position);
		static std::string GetPositionAsString(Music::ChromaticScalePosition position);
		static std::string GetWeightAsString(Music::Weight weight);
		static std::string GetStepAsString(Music::Step step);
	};
}

