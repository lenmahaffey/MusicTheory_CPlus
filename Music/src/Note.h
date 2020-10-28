#pragma once
#include <string>
#include "Object.h"

namespace Music {
	class Note : public Music::Object

	{
	public:
		Music::Note() = default;
		Music::Note(Music::ChromaticScale note);
		Music::Note(int note);
		Music::Note(char note);
		Music::Note(std::string note);
	};
}

