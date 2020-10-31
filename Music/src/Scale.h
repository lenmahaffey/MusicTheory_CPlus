#pragma once
#include "Note.h"
#include "Object.h"
#include <string>

namespace Music{

	class Scale : public Music::Object
	{
	public:
		Music::Scale();
		Music::Scale(const Music::ChromaticScalePosition position, const Music::Step (&pattern)[7], const bool isMajor);
		Music::Scale(const int position, const Music::Step(&pattern)[7], const bool isMajor);
		Music::Scale(const std::string note, const Music::Step(&pattern)[7], const bool isMajor);

		std::string getScaleAsString();
		std::string isMajorOrMinor();

		const Music::Scale& operator=(const Music::Scale& otherObject);

	protected:
		const Music::Step(&pattern)[7];
		const int scalePatternLength;
		const bool isMajor;

		Music::Note scale[7];
		void setScale(Music::ChromaticScalePosition);

	};
}
