#pragma once
#include <string>

namespace Music
{
	enum class Step
	{
		NONE,
		Half,
		Whole,
		WholeandAHalf,
		Double
	};

	static std::string GetStepAsString(Music::Step step);
}

