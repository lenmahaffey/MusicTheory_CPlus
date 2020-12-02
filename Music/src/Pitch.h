#pragma once
#include<string>
#include "Step.h"
#include "ChromaticScale.h"
#include "Weight.h"

namespace Music
{
	class Pitch
	{
	public:
		Pitch();
		Pitch(Music::Pitch::ChromaticScalePosition position);
		Pitch(int pitchAsInt);
		Pitch(std::string pitchAsString);

		Music::ChromaticScalePosition GetPosition() const;
		std::string GetPositionAsString() const;
		Music::Weight GetWeight() const;
		std::string GetWeightAsString() const;

		Music::Pitch operator =(const Music::Pitch& otherPitch);
		Music::Pitch operator =(const int& otherPitch);
		Music::Pitch operator =(const std::string& otherPitch);
		Music::Pitch operator ++();
		Music::Pitch operator ++(int);
		Music::Pitch operator --();
		Music::Pitch operator --(int);
		bool operator ==(const Music::Pitch& otherPitch) const;
		bool operator !=(const Music::Pitch& otherPitch) const;
		bool operator <(const Music::Pitch& otherPitch) const;
		bool operator <=(const Music::Pitch& otherPitch) const;
		bool operator >(const Music::Pitch& otherPitch) const;
		bool operator >=(const Music::Pitch& otherPitch) const;

		static ChromaticScalePosition GetPositionFromChromaticScale(std::string note);
		static ChromaticScalePosition GetPositionFromChromaticScale(int note);
		static std::string GetPositionAsString(ChromaticScalePosition position);
		static Weight GetWeightForPosition(ChromaticScalePosition position);
		static std::string GetWeightAsString(Weight weight);
		static std::string GetStepAsString(Music::Step step);

	private:
		Music::ChromaticScalePosition position;
		Music::Weight weight;
	};
}

