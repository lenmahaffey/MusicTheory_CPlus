/*
	CSC160 8N0 Computer Science 1
	File: Pitch.h
	By: Len Mahaffey
	Project: Final Project
	Last Edited: 12/5/20
	Description: Pitch class deceleration. Class manages enumerations of chromatic scale positions.
*/
#pragma once
#include<string>
#include "MusicException.h"
#include "Step.h"
#include "ChromaticScale.h"
#include "Weight.h"

namespace Music
{
	class Pitch
	{
	public:
		Pitch();
		Pitch(Pitch::ChromaticScalePosition position);
		Pitch(int pitchAsInt);
		Pitch(std::string pitchAsString);

		ChromaticScalePosition GetPosition() const;
		std::string GetPositionAsString() const;
		Weight GetWeight() const;
		std::string GetWeightAsString() const;

		Pitch operator =(const Pitch& otherPitch);
		Pitch operator =(const int& otherPitch);
		Pitch operator =(const std::string& otherPitch);
		Pitch operator ++();
		Pitch operator ++(int);
		Pitch operator --();
		Pitch operator --(int);
		bool operator ==(const Pitch& otherPitch) const;
		bool operator !=(const Pitch& otherPitch) const;
		bool operator <(const Pitch& otherPitch) const;
		bool operator <=(const Pitch& otherPitch) const;
		bool operator >(const Pitch& otherPitch) const;
		bool operator >=(const Pitch& otherPitch) const;

		static ChromaticScalePosition GetPositionFromChromaticScale(std::string note);
		static ChromaticScalePosition GetPositionFromChromaticScale(int note);
		static std::string GetPositionAsString(ChromaticScalePosition position);
		static Weight GetWeightForPosition(ChromaticScalePosition position);
		static std::string GetWeightAsString(Weight weight);
		static std::string GetStepAsString(Step step);

	private:
		ChromaticScalePosition position;
		Weight weight;
	};
}

