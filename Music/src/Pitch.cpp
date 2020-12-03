#include "Pitch.h"

Music::Pitch::Pitch()
{
	position = Music::ChromaticScalePosition::NONE;
	weight = GetWeightForPosition(Music::ChromaticScalePosition::NONE);
}

Music::Pitch::Pitch(Music::ChromaticScalePosition pos)
{
	position = pos;
	weight = GetWeightForPosition(pos);
}
Music::Pitch::Pitch(int pitchAsInt)
{
	position = GetPositionFromChromaticScale(pitchAsInt);
	weight = GetWeightForPosition(GetPositionFromChromaticScale(pitchAsInt));
}
Music::Pitch::Pitch(std::string pitchAsString)
{
	Music::Pitch::position = GetPositionFromChromaticScale(pitchAsString);
	Music::Pitch::weight = GetWeightForPosition(GetPositionFromChromaticScale(pitchAsString));
}

//Class Methods
Music::ChromaticScalePosition Music::Pitch::GetPosition() const
{
	return position;
}
std::string Music::Pitch::GetPositionAsString() const
{
	return GetPositionAsString(position);
}
Music::Weight Music::Pitch::GetWeight() const
{
	return weight;
}
std::string Music::Pitch::GetWeightAsString() const
{
	return GetWeightAsString(weight);
}

//Static Methods
Music::ChromaticScalePosition Music::Pitch::GetPositionFromChromaticScale(std::string pitchAsString)
{
	if (pitchAsString == "NONE")
		return Music::ChromaticScalePosition::NONE;
	else if (pitchAsString == "A")
		return Music::ChromaticScalePosition::A;
	else if (pitchAsString == "AsBf" || pitchAsString == "As" || pitchAsString == "Bf")
		return Music::ChromaticScalePosition::AsBf;
	else if (pitchAsString == "B")
		return Music::ChromaticScalePosition::B;
	else if (pitchAsString == "C")
		return Music::ChromaticScalePosition::C;
	else if (pitchAsString == "CsDf" || pitchAsString == "Cs" || pitchAsString == "Df")
		return Music::ChromaticScalePosition::CsDf;
	else if (pitchAsString == "D")
		return Music::ChromaticScalePosition::D;
	else if (pitchAsString == "DsEf" || pitchAsString == "Ds" || pitchAsString == "Ef")
		return Music::ChromaticScalePosition::DsEf;
	else if (pitchAsString == "E")
		return Music::ChromaticScalePosition::E;
	else if (pitchAsString == "F")
		return Music::ChromaticScalePosition::F;
	else if (pitchAsString == "FsGf" || pitchAsString == "Fs" || pitchAsString == "Gf")
		return Music::ChromaticScalePosition::FsGf;
	else if (pitchAsString == "G")
		return Music::ChromaticScalePosition::G;
	else if (pitchAsString == "GsAf" || pitchAsString == "Gs" || pitchAsString == "Af")
		return Music::ChromaticScalePosition::GsAf;
	else
		throw MusicException::InvalidString;
}
Music::ChromaticScalePosition Music::Pitch::GetPositionFromChromaticScale(int pitchAsInt)
{
	switch (pitchAsInt) {
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
		throw MusicException::InvalidInteger;
	}
}
Music::Weight Music::Pitch::GetWeightForPosition(Music::ChromaticScalePosition position)
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
		throw MusicException::InvalidPosition;
	}
}
std::string Music::Pitch::GetPositionAsString(ChromaticScalePosition position)
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
		throw MusicException::InvalidPosition;
	}
}
std::string Music::Pitch::GetWeightAsString(Weight weight)
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
		throw MusicException::InvalidWeight;
	}
}
std::string Music::Pitch::GetStepAsString(Music::Step step)
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
		throw MusicException::InvalidStep;
	}
}

//Operator Overloads
Music::Pitch Music::Pitch::operator =(const Music::Pitch& otherPitch)
{
	if (this != &otherPitch)
	{
		position = otherPitch.GetPosition();
		weight = otherPitch.GetWeight();
	}
	return *this;
}
Music::Pitch Music::Pitch::operator =(const int& pitchAsInt)
{
	if ((int)this->position != pitchAsInt)
	{
		position = GetPositionFromChromaticScale(pitchAsInt);
		weight = GetWeightForPosition(GetPositionFromChromaticScale(pitchAsInt));
	}
	return *this;
}
Music::Pitch Music::Pitch::operator =(const std::string& pitchAsString)
{
	if (this->GetPositionAsString() != pitchAsString)
	{
		position = GetPositionFromChromaticScale(pitchAsString);
		weight = GetWeightForPosition(GetPositionFromChromaticScale(pitchAsString));
	}
	return *this;
}
Music::Pitch Music::Pitch::operator ++()
{
	Music::Pitch newPosition = Music::Pitch((int)position + 1);
	*this = newPosition;
	return newPosition;
}
Music::Pitch Music::Pitch::operator ++(int)
{
	Music::Pitch temp = *this;
	Music::Pitch newPosition = Music::Pitch((int)position + 1);
	*this = newPosition;
	return temp;
}
Music::Pitch Music::Pitch::operator --()
{
	Music::Pitch newPosition = Music::Pitch((int)position - 1);
	*this = newPosition;
	return newPosition;
}
Music::Pitch Music::Pitch::operator --(int)
{
	Music::Pitch temp = *this;
	Music::Pitch newPosition = Music::Pitch((int)position - 1);
	*this = newPosition;
	return temp;
}
bool Music::Pitch::operator ==(const Music::Pitch& otherPitch) const
{
	return position == otherPitch.position;
}
bool Music::Pitch::operator !=(const Music::Pitch& otherPitch) const
{
	return position != otherPitch.position;
}
bool Music::Pitch::operator <(const Music::Pitch& otherPitch) const
{
	return position < otherPitch.position;
}
bool Music::Pitch::operator <=(const Music::Pitch& otherPitch) const
{
	return position <= otherPitch.position;
}
bool Music::Pitch::operator >(const Music::Pitch& otherPitch) const
{
	return position > otherPitch.position;
}
bool Music::Pitch::operator >=(const Music::Pitch& otherPitch) const
{
	return position >= otherPitch.position;
}
