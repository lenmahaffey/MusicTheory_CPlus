#pragma once
#include "Note.h"
#include "Object.h"
#include <string>

namespace Music{

	class Scale : public Music::Object
	{
	public:
		Music::Scale() = default;
		Music::Scale(Music::ChromaticScalePosition note, Music::Step (&pattern)[7], bool isMajor);
		Music::Scale(int note, Music::Step(&pattern)[7], bool isMajor);

		std::string getScaleAsString();
		std::string isMajorOrMinor();

	protected:
		Music::Step(&pattern)[7];
		Music::Note scale[7];
		int scalePatternLength;
		bool isMajor;

		void setScale(Music::ChromaticScalePosition);

	};
}
