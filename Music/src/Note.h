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

		//Accessors
		Music::Weight getWeight();
		std::string getWeightAsString();

	protected:
		//Properties
		 Music::Weight weight;
	};
}

