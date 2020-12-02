#pragma once
#include "Object.h"

namespace Music {
	class Note : public Music::Object

	{
	public:
		//Constructors
		Music::Note();
		Music::Note(Music::Pitch note);
		Music::Note(std::string note);
		Music::Note(int note);

		//Operator Overloads
		Music::Note operator =(const Music::Note& otherNote);
		Music::Note operator =(const Music::Pitch& position);
		Music::Note operator =(const int& positionAsInt);
		Music::Note operator =(const std::string& positionAsString);
		Music::Note operator ++();
		Music::Note operator ++(int);
		Music::Note operator --();
		Music::Note operator --(int);
		bool operator ==(const Music::Note& otherNote) const;
		bool operator !=(const Music::Note& otherNote) const;
		bool operator <(const Music::Note& otherNote) const;
		bool operator <=(const Music::Note& otherNote) const;
		bool operator >(const Music::Note& otherNote) const;
		bool operator >=(const Music::Note& otherNote) const;
	};
}

