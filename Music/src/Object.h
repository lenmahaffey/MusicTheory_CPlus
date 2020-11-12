#pragma once
#include <string>
#include "Position.h"

namespace Music {

	class Object
	{
	public:
		//Constructors
		Music::Object();
		Music::Object(Music::Position note);
		Music::Object(std::string note);
		Music::Object(int note);

		//Accessors
		Music::Position& GetPosition();

		//Methods
		Music::Position accendHalfStep();
		Music::Position accendFullStep();
		Music::Position accendStepAndAHalf();

		//Operator overloads
		Music::Object operator =(const Music::Object& otherObject);
		Music::Object operator =(const Music::Position& otherPosition);
		Music::Object operator =(const int& positionAsInt);
		Music::Object operator =(const std::string& positionAsString);
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
		Music::Position position;
	};
}

