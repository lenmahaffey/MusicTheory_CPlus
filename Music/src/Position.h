#pragma once
#include<string>

namespace Music
{
	class Position
	{
	public:
		enum class ChromaticScalePosition
		{
			NONE = 0,
			A,
			AsBf,
			B,
			C,
			CsDf,
			D,
			DsEf,
			E,
			F,
			FsGf,
			G,
			GsAf
		};
		enum class Weight
		{
			NONE = 0,
			Half,
			Whole
		};
		enum class Step
		{
			NONE = 0,
			Half,
			Whole,
			WholeandAHalf,
			Double
		};

		Position();
		Position(Music::Position::ChromaticScalePosition position);
		Position(int noteAsInt);
		Position(std::string noteAsString);

		Music::Position::ChromaticScalePosition GetName() const;
		std::string GetNameAsString() const;
		Music::Position::Weight GetWeight() const;

		static ChromaticScalePosition GetPositionFromChromaticScale(std::string note);
		static ChromaticScalePosition GetPositionFromChromaticScale(int note);
		static Weight GetWeightForPosition(ChromaticScalePosition position);
		static std::string GetPositionAsString(ChromaticScalePosition position);
		static std::string GetWeightAsString(Weight weight);
		static std::string GetStepAsString(Step step);

	private:
		Music::Position::ChromaticScalePosition name;
		Music::Position::Weight weight;
	};
}

