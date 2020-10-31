#pragma once
#include <string>
#include "ChromaticScale.h"
#include "Step.h"
#include "Weight.h"

namespace Music {

	class Object
	{
	public:
		//Constructors
		Music::Object();
		Music::Object(Music::ChromaticScalePosition note);
		Music::Object(std::string note);
		Music::Object(int note);

		//Accessors
		Music::ChromaticScalePosition getPosition();
		std::string getNameAsString();

		//Methods
		Music::ChromaticScalePosition accendHalfStep();
		Music::ChromaticScalePosition accendFullStep();
		Music::ChromaticScalePosition accendStepAndAHalf();

		//Operator overloads
		Music::Object operator ++();
		Music::Object operator ++(int);
		Music::Object operator --();
		Music::Object operator --(int);
		bool operator ==(Music::Object);
		bool operator !=(Music::Object);
		bool operator <(Music::Object otherObject);
		bool operator <=(Music::Object otherObject);
		bool operator >(Music::Object otherObject);
		bool operator >=(Music::Object otherObject);

	protected:
		//Properties
		Music::ChromaticScalePosition position;
		std::string textName;

		//Static class methods
		static Music::ChromaticScalePosition GetPositionFromChromaticScale(std::string note);
		static Music::ChromaticScalePosition GetPositionFromChromaticScale(int note);
		static Music::Weight GetWeightForPosition(Music::ChromaticScalePosition position);
		static std::string GetPositionAsString(Music::ChromaticScalePosition position);
		static std::string GetWeightAsString(Music::Weight weight);
		static std::string GetStepAsString(Music::Step step);
	};
}

