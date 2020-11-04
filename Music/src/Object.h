#pragma once
#include <string>
#include "Music.h"
//#include "ChromaticScale.h"
//#include "Step.h"
//#include "Weight.h"

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
		Music::ChromaticScalePosition getPosition() const;
		std::string getNameAsString() const;

		//Methods
		Music::ChromaticScalePosition accendHalfStep();
		Music::ChromaticScalePosition accendFullStep();
		Music::ChromaticScalePosition accendStepAndAHalf();

		//Operator overloads
		Music::Object operator ++();
		Music::Object operator ++(int);
		Music::Object operator --();
		Music::Object operator --(int);
		bool operator ==(const Music::Object& otherObject) const;
		bool operator !=(const Music::Object& otherObject) const;
		bool operator <(const Music::Object& otherObject) const;
		bool operator <=(const Music::Object& otherObject) const;
		bool operator >(const Music::Object& otherObject) const;
		bool operator >=(const Music::Object& otherObject) const;

	protected:
		//Properties
		Music::ChromaticScalePosition position;
		std::string textName;
	};
}

