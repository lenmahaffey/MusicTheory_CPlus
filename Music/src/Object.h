#pragma once
#include "Pitch.h"

namespace Music {

	class Object
	{
	public:
		//Constructors
		Music::Object();
		Music::Object(Music::Pitch pitch);
		Music::Object(std::string pitchAsString);
		Music::Object(int pitchAsInt);

		//Getters
		Music::Pitch& GetPosition();
		std::string GetName() const;

		//Setters
		void SetName(std::string newName);

		//Methods
		Music::Pitch accendHalfStep();
		Music::Pitch accendFullStep();
		Music::Pitch accendStepAndAHalf();

		//Operator overloads
		Music::Object operator =(const Music::Object& otherObject);
		Music::Object operator =(const Music::Pitch& otherPitch);
		Music::Object operator =(const int& positionAsInt);
		Music::Object operator =(const std::string& pitchAsString);
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
		Music::Pitch pitch;
		std::string name;
	};
}

