#pragma once
#include <string>
#include "Object.h"

namespace Music {
	class Note : public Music::Object

	{
	public:
		//Constructors
		Music::Note();
		Music::Note(Music::Position note);
		Music::Note(std::string note);
		Music::Note(int note);

		//Operator Overloads
		Music::Note operator =(const Music::Note& otherNote);
		Music::Note operator =(const Music::Position& position);
		Music::Note operator =(const int& noteAsInt);
		Music::Note operator =(const std::string& noteAsInt);
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

