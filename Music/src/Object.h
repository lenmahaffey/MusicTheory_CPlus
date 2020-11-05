#pragma once
#include <string>
#include "Position.h"

namespace Music
{
	class Object
	{
	public:
		//Constructors
		Music::Object();
		Music::Object(Music::Position::ChromaticScalePosition note);
		Music::Object(std::string note);
		Music::Object(int note);

		//Accessors
		Music::Position::ChromaticScalePosition getPosition() const;
		std::string getNameAsString() const;

		//Methods
		Music::Position::ChromaticScalePosition accendHalfStep();
		Music::Position::ChromaticScalePosition accendFullStep();
		Music::Position::ChromaticScalePosition accendStepAndAHalf();

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
		Music::Position::ChromaticScalePosition position;
		std::string textName;
	};
}

