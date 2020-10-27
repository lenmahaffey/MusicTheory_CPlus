#pragma once
#include <string>
#include "ChromaticScale.h"

namespace Music
{
	enum class Weight
	{
		NONE,
		Half,
		Whole
	};

	Music::Weight GetWeight(Music::ChromaticScale note);
	std::string GetWeightAsString(Music::Weight weight);
}