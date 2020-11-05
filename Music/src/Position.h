#pragma once
#include<string>

namespace Music
{
	class Position
	{
	public:
		static enum class ChromaticScalePosition
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
		static enum class Weight
		{
			NONE = 0,
			Half,
			Whole
		};
		static enum class Step
		{
			NONE = 0,
			Half,
			Whole,
			WholeandAHalf,
			Double
		};

		static ChromaticScalePosition GetPositionFromChromaticScale(std::string note);
		static ChromaticScalePosition GetPositionFromChromaticScale(int note);
		static Weight GetWeightForPosition(ChromaticScalePosition position);
		static std::string GetPositionAsString(ChromaticScalePosition position);
		static std::string GetWeightAsString(Weight weight);
		static std::string GetStepAsString(Step step);

	};
}

