#pragma once
#include <string>
namespace Music
{
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
		NONE,
		Half,
		Whole
	};

	enum class Step
	{
		NONE,
		Half,
		Whole,
		WholeandAHalf,
		Double
	};

	ChromaticScalePosition GetPositionFromChromaticScale(std::string note);
	ChromaticScalePosition GetPositionFromChromaticScale(int note);
	Weight GetWeightForPosition(ChromaticScalePosition position);
	std::string GetPositionAsString(ChromaticScalePosition position);
	std::string GetWeightAsString(Weight weight);
	std::string GetStepAsString(Step step);
}

