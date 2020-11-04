#pragma once
#include <string>
#include "Object.h"

namespace Music {
	class Note : public Music::Object

	{
	public:
		//Constructors
		Music::Note();
		Music::Note(Music::ChromaticScalePosition note);
		Music::Note(std::string note);
		Music::Note(int note);

		//Accessors
		Music::Weight getWeight();
		std::string getWeightAsString();

		Music::Note operator ++();
		Music::Note operator ++(int);
		Music::Note operator --();
		Music::Note operator --(int);
		bool operator ==(Music::Note);
		bool operator !=(Music::Note);
		bool operator <(Music::Note otherNote);
		bool operator <=(Music::Note otherNote);
		bool operator >(Music::Note otherNote);
		bool operator >=(Music::Note otherNote);

	protected:
		//Properties
		 Music::Weight weight;
	};
}

