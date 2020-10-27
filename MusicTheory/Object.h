#pragma once
#include <string>
#include "ChromaticScale.h"
#include "Step.h"
#include "Weight.h"
//#include "Music.h"

namespace Music {

	class Object
	{
	public:
		Music::Object();
		Music::Object(Music::ChromaticScale note);
		Music::Object(char note);
		Music::Object(std::string note);

		Music::ChromaticScale getName();
		std::string getTextName();

		Music::ChromaticScale goFullStep(Music::ChromaticScale note);
		Music::ChromaticScale goHalfStep(Music::ChromaticScale note);
		Music::ChromaticScale goStepAndAHalf(Music::ChromaticScale note);

	protected:
		Music::ChromaticScale note;
		std::string name;

	private:
		Music::ChromaticScale GetFromChromaticScale(char letter);
		Music::ChromaticScale GetFromChromaticScale(std::string letter);
		std::string GetNoteName(Music::ChromaticScale note);
	};
}
