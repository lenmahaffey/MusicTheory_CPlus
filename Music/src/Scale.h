#pragma once
#include "Note.h"
#include "Object.h"
#include <string>

namespace Music{

	class Scale : public Music::Object
	{
	public:
		//Constructors
		Music::Scale();
		Music::Scale(Music::Position::ChromaticScalePosition position,  Music::Position::Step (&pattern)[7],  bool isMajor);
		Music::Scale(int position,  Music::Position::Step(&pattern)[7],  bool isMajor);
		Music::Scale(std::string note,  Music::Position::Step(&pattern)[7],  bool isMajor);

		//Accessors
		std::string getScaleAsString();
		std::string isMajorOrMinor();

		//Operator overloads
		//Music::Scale operator =(const Music::Scale& otherScale);
		//Music::Scale operator =(const Music::Position& position);
		//Music::Scale operator =(const int& positionAsInt);
		//Music::Scale operator =(const std::string& positionAsString);
		//Music::Scale operator ++();
		//Music::Scale operator ++(int);
		//Music::Scale operator --();
		//Music::Scale operator --(int);
		bool operator ==(const Music::Scale& otherObject) const;
		bool operator !=(const Music::Scale& otherObject) const;
		bool operator <(const Music::Scale& otherObject) const;
		bool operator <=(const Music::Scale& otherObject) const;
		bool operator >(const Music::Scale& otherObject) const;
		bool operator >=(const Music::Scale& otherObject) const;

	protected:
		//Properties
		Music::Position::Step(&pattern)[7];
		int scalePatternLength;
		bool isMajor;
		Music::Note scale[7];

		//Methods
		void setScale(Music::Position);

	};
}
