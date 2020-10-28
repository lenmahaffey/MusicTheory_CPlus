#pragma once
#include <string>
#include "Object.h"

namespace Music {
	class Note : public Music::Object

	{
	public:
		Music::Note() = default;
		Music::Note(Music::ChromaticScalePosition note);
		Music::Note(std::string note);

	private:
		Music::Weight weight;
	};
}

