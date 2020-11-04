#include "Music.h"
Msuic::ChromaticScalePosition GetPositionFromChromaticScale(std::string noteAsString)
{
	if (noteAsString == "NONE")
		return ChromaticScalePosition::NONE;
	else if (noteAsString == "A")
		return ChromaticScalePosition::A;
	else if (noteAsString == "AsBf")
		return ChromaticScalePosition::AsBf;
	else if (noteAsString == "B")
		return ChromaticScalePosition::B;
	else if (noteAsString == "C")
		return ChromaticScalePosition::C;
	else if (noteAsString == "CsDf")
		return ChromaticScalePosition::CsDf;
	else if (noteAsString == "D")
		return ChromaticScalePosition::D;
	else if (noteAsString == "DsEf")
		return ChromaticScalePosition::DsEf;
	else if (noteAsString == "E")
		return ChromaticScalePosition::E;
	else if (noteAsString == "F")
		return ChromaticScalePosition::F;
	else if (noteAsString == "FsGf")
		return ChromaticScalePosition::FsGf;
	else if (noteAsString == "G")
		return ChromaticScalePosition::G;
	else if (noteAsString == "GsAf")
		return ChromaticScalePosition::GsAf;
	else
		//**TODO** implement exception handler
		return ChromaticScalePosition::NONE;
}
ChromaticScalePosition GetPositionFromChromaticScale(int noteAsInt)
{
	switch (noteAsInt) {
	case 0:
		return ChromaticScalePosition::NONE;
	case 1:
		return ChromaticScalePosition::A;
	case 2:
		return ChromaticScalePosition::AsBf;
	case 3:
		return ChromaticScalePosition::B;
	case 4:
		return ChromaticScalePosition::C;
	case 5:
		return ChromaticScalePosition::CsDf;
	case 6:
		return ChromaticScalePosition::D;
	case 7:
		return ChromaticScalePosition::DsEf;
	case 8:
		return ChromaticScalePosition::E;
	case 9:
		return ChromaticScalePosition::F;
	case 10:
		return ChromaticScalePosition::FsGf;
	case 11:
		return ChromaticScalePosition::G;
	case 12:
		return ChromaticScalePosition::GsAf;
	default:
		//**TODO** implement exception handler
		return ChromaticScalePosition::NONE;
	}
}
Weight GetWeightForPosition(ChromaticScalePosition position)
{
	switch (position)
	{
	case ChromaticScalePosition::NONE:
		return Weight::NONE;
	case ChromaticScalePosition::A:
		return Weight::Whole;
	case ChromaticScalePosition::AsBf:
		return Weight::Half;
	case ChromaticScalePosition::B:
		return Weight::Whole;
	case ChromaticScalePosition::C:
		return Weight::Whole;
	case ChromaticScalePosition::CsDf:
		return Weight::Half;
	case ChromaticScalePosition::D:
		return Weight::Whole;
	case ChromaticScalePosition::DsEf:
		return Weight::Half;
	case ChromaticScalePosition::E:
		return Weight::Whole;
	case ChromaticScalePosition::F:
		return Weight::Whole;
	case ChromaticScalePosition::FsGf:
		return Weight::Half;
	case ChromaticScalePosition::G:
		return Weight::Whole;
	case ChromaticScalePosition::GsAf:
		return Weight::Half;
	default:
		//**TODO** implement exception handler?
		return Weight::NONE;
	}
}
std::string GetPositionAsString(ChromaticScalePosition position) {
	switch (position) {
	case ChromaticScalePosition::NONE:
		return "NONE";
	case ChromaticScalePosition::A:
		return "A";
	case ChromaticScalePosition::AsBf:
		return "AsBf";
	case ChromaticScalePosition::B:
		return "B";
	case ChromaticScalePosition::C:
		return "C";
	case ChromaticScalePosition::CsDf:
		return "CsDf";
	case ChromaticScalePosition::D:
		return "D";
	case ChromaticScalePosition::DsEf:
		return "DsEf";
	case ChromaticScalePosition::E:
		return "E";
	case ChromaticScalePosition::F:
		return "F";
	case ChromaticScalePosition::FsGf:
		return "FsGf";
	case ChromaticScalePosition::G:
		return "G";
	case ChromaticScalePosition::GsAf:
		return "GsAf";
	default:
		//**TODO** implement exception handler
		return "NONE";
	}
}
std::string GetWeightAsString(Weight weight)
{
	switch (weight)
	{
	case Weight::NONE:
		return std::string("None");
	case Weight::Half:
		return std::string("Half");
	case Weight::Whole:
		return std::string("Whole");
	default:
		//**TODO** implement exception handler?
		return std::string("None");
	}
}
std::string GetStepAsString(Step step)
{
	switch (step)
	{
	case Step::NONE:
		return "NONE";
	case Step::Half:
		return "Half";
	case Step::Whole:
		return "Whole";
	case Step::WholeandAHalf:
		return "Whole and a Half";
	case Step::Double:
		return "Double";
	default:
		//**TODO** implement exception handler
		return "NONE";
	}
}
