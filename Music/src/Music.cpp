#include "Music.h"

 Music::ChromaticScalePosition Music::GetPositionFromChromaticScale(std::string noteAsString)
{
	if (noteAsString == "NONE")
		return Music::ChromaticScalePosition::NONE;
	else if (noteAsString == "A")
		return Music::ChromaticScalePosition::A;
	else if (noteAsString == "AsBf")
		return Music::ChromaticScalePosition::AsBf;
	else if (noteAsString == "B")
		return Music::ChromaticScalePosition::B;
	else if (noteAsString == "C")
		return Music::ChromaticScalePosition::C;
	else if (noteAsString == "CsDf")
		return Music::ChromaticScalePosition::CsDf;
	else if (noteAsString == "D")
		return Music::ChromaticScalePosition::D;
	else if (noteAsString == "DsEf")
		return Music::ChromaticScalePosition::DsEf;
	else if (noteAsString == "E")
		return Music::ChromaticScalePosition::E;
	else if (noteAsString == "F")
		return Music::ChromaticScalePosition::F;
	else if (noteAsString == "FsGf")
		return Music::ChromaticScalePosition::FsGf;
	else if (noteAsString == "G")
		return Music::ChromaticScalePosition::G;
	else if (noteAsString == "GsAf")
		return Music::ChromaticScalePosition::GsAf;
	else
		//**TODO** implement exception handler
		return Music::ChromaticScalePosition::NONE;
}
 Music::ChromaticScalePosition Music::GetPositionFromChromaticScale(int noteAsInt)
{
	switch (noteAsInt) {
	case 0:
		return Music::ChromaticScalePosition::NONE;
	case 1:
		return Music::ChromaticScalePosition::A;
	case 2:
		return Music::ChromaticScalePosition::AsBf;
	case 3:
		return Music::ChromaticScalePosition::B;
	case 4:
		return Music::ChromaticScalePosition::C;
	case 5:
		return Music::ChromaticScalePosition::CsDf;
	case 6:
		return Music::ChromaticScalePosition::D;
	case 7:
		return Music::ChromaticScalePosition::DsEf;
	case 8:
		return Music::ChromaticScalePosition::E;
	case 9:
		return Music::ChromaticScalePosition::F;
	case 10:
		return Music::ChromaticScalePosition::FsGf;
	case 11:
		return Music::ChromaticScalePosition::G;
	case 12:
		return Music::ChromaticScalePosition::GsAf;
	default:
		//**TODO** implement exception handler
		return Music::ChromaticScalePosition::NONE;
	}
}
 Music::Weight Music::GetWeightForPosition(Music::ChromaticScalePosition position)
{
	switch (position)
	{
	case Music::ChromaticScalePosition::NONE:
		return Weight::NONE;
	case Music::ChromaticScalePosition::A:
		return Weight::Whole;
	case Music::ChromaticScalePosition::AsBf:
		return Weight::Half;
	case Music::ChromaticScalePosition::B:
		return Weight::Whole;
	case Music::ChromaticScalePosition::C:
		return Weight::Whole;
	case Music::ChromaticScalePosition::CsDf:
		return Weight::Half;
	case Music::ChromaticScalePosition::D:
		return Weight::Whole;
	case Music::ChromaticScalePosition::DsEf:
		return Weight::Half;
	case Music::ChromaticScalePosition::E:
		return Weight::Whole;
	case Music::ChromaticScalePosition::F:
		return Weight::Whole;
	case Music::ChromaticScalePosition::FsGf:
		return Weight::Half;
	case Music::ChromaticScalePosition::G:
		return Weight::Whole;
	case Music::ChromaticScalePosition::GsAf:
		return Weight::Half;
	default:
		//**TODO** implement exception handler?
		return Weight::NONE;
	}
}
 std::string Music::GetPositionAsString(ChromaticScalePosition position)
 {
	 switch (position) {
	 case Music::ChromaticScalePosition::NONE:
		 return "NONE";
	 case Music::ChromaticScalePosition::A:
		 return "A";
	 case Music::ChromaticScalePosition::AsBf:
		 return "AsBf";
	 case Music::ChromaticScalePosition::B:
		 return "B";
	 case Music::ChromaticScalePosition::C:
		 return "C";
	 case Music::ChromaticScalePosition::CsDf:
		 return "CsDf";
	 case Music::ChromaticScalePosition::D:
		 return "D";
	 case Music::ChromaticScalePosition::DsEf:
		 return "DsEf";
	 case Music::ChromaticScalePosition::E:
		 return "E";
	 case Music::ChromaticScalePosition::F:
		 return "F";
	 case Music::ChromaticScalePosition::FsGf:
		 return "FsGf";
	 case Music::ChromaticScalePosition::G:
		 return "G";
	 case Music::ChromaticScalePosition::GsAf:
		 return "GsAf";
	 default:
		 //**TODO** implement exception handler
		 return "NONE";
	 }
 }
 std::string Music::GetWeightAsString(Weight weight)
 {
	 switch (weight)
	 {
	 case Weight::NONE:
		 return std::string("None");
	 case Music::Weight::Half:
		 return std::string("Half");
	 case Music::Weight::Whole:
		 return std::string("Whole");
	 default:
		 //**TODO** implement exception handler?
		 return std::string("None");
	 }
 }
 std::string Music::GetStepAsString(Step step)
 {
	 switch (step)
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
		 //**TODO** implement exception handler
		 return "NONE";
	 }
 }
