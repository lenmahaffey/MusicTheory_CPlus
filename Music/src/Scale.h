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
		Music::Scale(Music::ChromaticScalePosition position,  Music::Step (&pattern)[7],  bool isMajor);
		Music::Scale(int position,  Music::Step(&pattern)[7],  bool isMajor);
		Music::Scale(std::string note,  Music::Step(&pattern)[7],  bool isMajor);

		//Accessors
		std::string getScaleAsString();
		std::string isMajorOrMinor();

		//Operator overloads
		Music::Scale operator ++();
		Music::Scale operator ++(int);
		Music::Scale operator --();
		Music::Scale operator --(int);
		bool operator ==(const Music::Scale) const;
		bool operator !=(const Music::Scale) const;
		bool operator <(const Music::Scale otherScale) const;
		bool operator <=(const Music::Scale otherScale) const;
		bool operator >(const Music::Scale otherScale) const;
		bool operator >=(const Music::Scale otherScale) const;

	protected:
		//Properties
		Music::Step pattern[7];
		int scalePatternLength;
		bool isMajor;
		Music::Note scale[7];

		//Methods
		void setScale(Music::ChromaticScalePosition);

	};
}
