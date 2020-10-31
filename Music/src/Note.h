#pragma once
#include <string>
#include "Object.h"

namespace Music {
	class Note : public Music::Object

	{
	public:
		Music::Note();
		Music::Note( Music::ChromaticScalePosition note);
		Music::Note( std::string note);

		Music::Weight GetWeight();
		//Music::Note& operator=( Music::Note otherObject);

	protected:
		 Music::Weight weight;
	};
}

