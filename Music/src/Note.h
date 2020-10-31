#pragma once
#include <string>
#include "Object.h"

namespace Music {
	class Note : public Music::Object

	{
	public:
		Music::Note();
		Music::Note(const Music::ChromaticScalePosition note);
		Music::Note(const std::string note);

		Music::Weight GetWeight();
		const Music::Note& operator=(const Music::Note& otherObject);

	protected:
		const Music::Weight weight;
	};
}

