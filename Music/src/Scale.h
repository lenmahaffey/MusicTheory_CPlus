#pragma once
#include "Note.h"
#include "Object.h"
#include <string>

namespace Music{

	class Scale : public Music::Object
	{
	public:
		//Constructors
		Music::Scale();
		Music::Scale(Music::Position::ChromaticScalePosition position,  Music::Position::Step (&pattern)[7],  bool isMajor);
		Music::Scale(int position,  Music::Position::Step(&pattern)[7],  bool isMajor);
		Music::Scale(std::string note,  Music::Position::Step(&pattern)[7],  bool isMajor);

		//Accessors
		std::string getScaleAsString() const;
		std::string getUnresolvedScaleAsString() const;
		std::string isMajorOrMinor() const;

		//Operator overloads
		bool operator ==(const Music::Scale& otherObject) const;
		bool operator !=(const Music::Scale& otherObject) const;
		bool operator <(const Music::Scale& otherObject) const;
		bool operator <=(const Music::Scale& otherObject) const;
		bool operator >(const Music::Scale& otherObject) const;
		bool operator >=(const Music::Scale& otherObject) const;

	protected:
		//Properties
		bool isMajor;
		Music::Position::Step pattern[7];
		int scalePatternLength;
		Music::Note scale[7];
		Music::Note unresolvedScale[7];
		void copyScale(Music::Note(&s1)[7], Music::Note(&s2)[7]);

		//Methods
		void setScale(Music::Position);

	private:
		virtual void resolveScale() = 0;
	};
}
