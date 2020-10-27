#include "Step.h"
std::string GetStepAsString(Music::Step step)
{
	switch(step)
	{
	case Music::Step::NONE:
		return "NONE";
	case Music::Step::Half:
		return "Half";
	case Music::Step::Whole:
		return "Whole";
	case Music::Step::WholeandAHalf:
		return "Whole and a Half";
	case Music::Step::Double:
		return "Double";
	default:
		return "NONE";
	}
}

