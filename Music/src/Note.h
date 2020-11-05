#pragma once
#include "Object.h"

namespace Music {
	class Note : public Music::Object

	{
	public:
		//Constructors
		Music::Note();
		Music::Note(Music::Position::ChromaticScalePosition note);
		Music::Note(std::string note);
		Music::Note(int note);

		//Accessors
		Music::Position::Weight getWeight() const;
		std::string getWeightAsString() const;

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

	protected:
		//Properties
		 Music::Position::Weight weight;
	};
}

