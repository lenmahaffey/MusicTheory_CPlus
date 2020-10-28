#pragma once
#include "Note.h"
#include "Object.h"
#include <string>

namespace Music{

	class Scale : public Music::Object
	{
	public:
		Music::Scale() = default;
		Music::Scale(Music::ChromaticScalePosition note, const Music::Step (&pattern)[7], const bool isMajor);
		Music::Scale(int note, const Music::Step(&pattern)[7], const bool isMajor);
		Music::Scale(char note, const Music::Step(&pattern)[7], const bool isMajor);

		std::string getScaleAsString();
		std::string isMajorOrMinor();

	protected:
		const Music::Step(&pattern)[7];
		Music::Note scale[7];
		const int scalePatternLength;
		const bool isMajor;

		void setScale(Music::ChromaticScalePosition);

	};
}
