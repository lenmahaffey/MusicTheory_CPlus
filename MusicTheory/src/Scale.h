#pragma once
#include "Note.h"
#include "Object.h"
#include <string>

namespace Music{

	class Scale : public Music::Object
	{
	public:
		Music::Scale() = default;
		Music::Scale(Music::ChromaticScale note, Music::Step (&pattern)[7], bool isMajor);
		Music::Scale(const int note, Music::Step(&pattern)[7], const bool isMajor);
		Music::Scale(const char note, Music::Step(&pattern)[7], const bool isMajor);

		std::string getScaleAsString();
		std::string isMajorOrMinor();

	protected:
		Music::Step(&pattern)[7];
		Music::Note scale[7];
		int scalePatternLength;
		bool isMajor;

		void setScale(Music::ChromaticScale);

	};
}
