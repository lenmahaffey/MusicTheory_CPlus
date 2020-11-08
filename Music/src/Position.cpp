#include "Position.h"

Music::Position::Position() :
	position(Music::Position::ChromaticScalePosition::NONE),
	weight(GetWeightForPosition(Music::Position::ChromaticScalePosition::NONE))
{
}

Music::Position::Position(Music::Position::ChromaticScalePosition position) :
	position(position),
	weight(GetWeightForPosition(position))
{

}
Music::Position::Position(int noteAsInt) :
	position(GetPositionFromChromaticScale(noteAsInt)),
	weight(GetWeightForPosition(GetPositionFromChromaticScale(noteAsInt)))
{
}

Music::Position::Position(std::string noteAsString) :
	position(GetPositionFromChromaticScale(noteAsString)),
	weight(GetWeightForPosition(GetPositionFromChromaticScale(noteAsString)))
{
}

//Class Methods
Music::Position::ChromaticScalePosition Music::Position::GetPosition() const
{
	return Music::Position::position;
}
std::string Music::Position::GetPositionAsString() const
{
	return GetPositionAsString(position);
}
Music::Position::Weight Music::Position::GetWeight() const
{
	return (weight);
}

//Static Methods
Music::Position::ChromaticScalePosition Music::Position::GetPositionFromChromaticScale(std::string noteAsString)
{
	if (noteAsString == "NONE")
		return Music::Position::ChromaticScalePosition::NONE;
	else if (noteAsString == "A")
		return Music::Position::ChromaticScalePosition::A;
	else if (noteAsString == "AsBf")
		return Music::Position::ChromaticScalePosition::AsBf;
	else if (noteAsString == "B")
		return Music::Position::ChromaticScalePosition::B;
	else if (noteAsString == "C")
		return Music::Position::ChromaticScalePosition::C;
	else if (noteAsString == "CsDf")
		return Music::Position::ChromaticScalePosition::CsDf;
	else if (noteAsString == "D")
		return Music::Position::ChromaticScalePosition::D;
	else if (noteAsString == "DsEf")
		return Music::Position::ChromaticScalePosition::DsEf;
	else if (noteAsString == "E")
		return Music::Position::ChromaticScalePosition::E;
	else if (noteAsString == "F")
		return Music::Position::ChromaticScalePosition::F;
	else if (noteAsString == "FsGf")
		return Music::Position::ChromaticScalePosition::FsGf;
	else if (noteAsString == "G")
		return Music::Position::ChromaticScalePosition::G;
	else if (noteAsString == "GsAf")
		return Music::Position::ChromaticScalePosition::GsAf;
	else
		//**TODO** implement exception handler
		return Music::Position::ChromaticScalePosition::NONE;
}
Music::Position::ChromaticScalePosition Music::Position::GetPositionFromChromaticScale(int noteAsInt)
{
	switch (noteAsInt) {
	case 0:
		return Music::Position::ChromaticScalePosition::NONE;
	case 1:
		return Music::Position::ChromaticScalePosition::A;
	case 2:
		return Music::Position::ChromaticScalePosition::AsBf;
	case 3:
		return Music::Position::ChromaticScalePosition::B;
	case 4:
		return Music::Position::ChromaticScalePosition::C;
	case 5:
		return Music::Position::ChromaticScalePosition::CsDf;
	case 6:
		return Music::Position::ChromaticScalePosition::D;
	case 7:
		return Music::Position::ChromaticScalePosition::DsEf;
	case 8:
		return Music::Position::ChromaticScalePosition::E;
	case 9:
		return Music::Position::ChromaticScalePosition::F;
	case 10:
		return Music::Position::ChromaticScalePosition::FsGf;
	case 11:
		return Music::Position::ChromaticScalePosition::G;
	case 12:
		return Music::Position::ChromaticScalePosition::GsAf;
	default:
		//**TODO** implement exception handler
		return Music::Position::ChromaticScalePosition::NONE;
	}
}
Music::Position::Weight Music::Position::GetWeightForPosition(Music::Position::ChromaticScalePosition position)
{
	switch (position)
	{
	case Music::Position::ChromaticScalePosition::NONE:
		return Weight::NONE;
	case Music::Position::ChromaticScalePosition::A:
		return Weight::Whole;
	case Music::Position::ChromaticScalePosition::AsBf:
		return Weight::Half;
	case Music::Position::ChromaticScalePosition::B:
		return Weight::Whole;
	case Music::Position::ChromaticScalePosition::C:
		return Weight::Whole;
	case Music::Position::ChromaticScalePosition::CsDf:
		return Weight::Half;
	case Music::Position::ChromaticScalePosition::D:
		return Weight::Whole;
	case Music::Position::ChromaticScalePosition::DsEf:
		return Weight::Half;
	case Music::Position::ChromaticScalePosition::E:
		return Weight::Whole;
	case Music::Position::ChromaticScalePosition::F:
		return Weight::Whole;
	case Music::Position::ChromaticScalePosition::FsGf:
		return Weight::Half;
	case Music::Position::ChromaticScalePosition::G:
		return Weight::Whole;
	case Music::Position::ChromaticScalePosition::GsAf:
		return Weight::Half;
	default:
		//**TODO** implement exception handler?
		return Weight::NONE;
	}
}
std::string Music::Position::GetPositionAsString(ChromaticScalePosition position)
{
	switch (position) {
	case Music::Position::ChromaticScalePosition::NONE:
		return "NONE";
	case Music::Position::ChromaticScalePosition::A:
		return "A";
	case Music::Position::ChromaticScalePosition::AsBf:
		return "AsBf";
	case Music::Position::ChromaticScalePosition::B:
		return "B";
	case Music::Position::ChromaticScalePosition::C:
		return "C";
	case Music::Position::ChromaticScalePosition::CsDf:
		return "CsDf";
	case Music::Position::ChromaticScalePosition::D:
		return "D";
	case Music::Position::ChromaticScalePosition::DsEf:
		return "DsEf";
	case Music::Position::ChromaticScalePosition::E:
		return "E";
	case Music::Position::ChromaticScalePosition::F:
		return "F";
	case Music::Position::ChromaticScalePosition::FsGf:
		return "FsGf";
	case Music::Position::ChromaticScalePosition::G:
		return "G";
	case Music::Position::ChromaticScalePosition::GsAf:
		return "GsAf";
	default:
		//**TODO** implement exception handler
		return "NONE";
	}
}
std::string Music::Position::GetWeightAsString(Weight weight)
{
	switch (weight)
	{
	case Weight::NONE:
		return std::string("None");
	case Music::Position::Weight::Half:
		return std::string("Half");
	case Music::Position::Weight::Whole:
		return std::string("Whole");
	default:
		//**TODO** implement exception handler?
		return std::string("None");
	}
}
std::string Music::Position::GetStepAsString(Step step)
{
	switch (step)
	{
	case Music::Position::Step::NONE:
		return "NONE";
	case Music::Position::Step::Half:
		return "Half";
	case Music::Position::Step::Whole:
		return "Whole";
	case Music::Position::Step::WholeandAHalf:
		return "Whole and a Half";
	case Music::Position::Step::Double:
		return "Double";
	default:
		//**TODO** implement exception handler
		return "NONE";
	}
}

//Operator Overloads
Music::Position Music::Position::operator =(const Music::Position& otherPosition)
{
	if (this != &otherPosition)
	{
		position = otherPosition.position;
		weight = otherPosition.weight;
	}
}
Music::Position Music::Position::operator =(const int& positionAsInt)
{
	if ((int)this->position != positionAsInt)
	{
		position = GetPositionFromChromaticScale(positionAsInt);
		weight = GetWeightForPosition(GetPositionFromChromaticScale(positionAsInt));
	}
}
Music::Position Music::Position::operator =(const std::string& positionAsString)
{
	if (this->GetPositionAsString() != positionAsString)
	{
		position = GetPositionFromChromaticScale(positionAsString);
		weight = GetWeightForPosition(GetPositionFromChromaticScale(positionAsString));
	}
}
Music::Position Music::Position::operator ++()
{
	Music::Position newPosition = Music::Position((int)position + 1);
	*this = newPosition;
	return newPosition;
}
Music::Position Music::Position::operator ++(int)
{
	Music::Position temp = *this;
	Music::Position newPosition = Music::Position((int)position + 1);
	*this = newPosition;
	return temp;
}
Music::Position Music::Position::operator --()
{
	Music::Position newPosition = Music::Position((int)position - 1);
	*this = newPosition;
	return newPosition;
}
Music::Position Music::Position::operator --(int)
{
	Music::Position temp = *this;
	Music::Position newPosition = Music::Position((int)position - 1);
	*this = newPosition;
	return temp;
}
bool Music::Position::operator ==(const Music::Position& otherObject) const
{
	return position == otherObject.position;
}
bool Music::Position::operator !=(const Music::Position& otherPosition) const
{
	return position != otherPosition.position;
}
bool Music::Position::operator <(const Music::Position& otherPosition) const
{
	return position < otherPosition.position;
}
bool Music::Position::operator <=(const Music::Position& otherPosition) const
{
	return position <= otherPosition.position;
}
bool Music::Position::operator >(const Music::Position& otherPosition) const
{
	return position > otherPosition.position;
}
bool Music::Position::operator >=(const Music::Position& otherPosition) const
{
	return position >= otherPosition.position;
}
