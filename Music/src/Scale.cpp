#pragma once
#include "Scale.h"

//Constructors
Music::Scale::Scale() :
	Music::Object(),
	pattern { Music::Position::Step::NONE },
	scale { 0 },
	resolvedScale{ 0 },
	unresolvedScale{ 0 }
{
	Music::Scale::isMajor = true;
	Music::Scale::scalePatternLength = sizeof(pattern) / sizeof(pattern[0]);
}

Music::Scale::Scale( Music::Position::ChromaticScalePosition note,  Music::Position::Step (&pattern)[7],  bool isMajor) :
	Music::Object(note),
	pattern{ Music::Position::Step::NONE },
	scale{ 0 },
	resolvedScale{ 0 },
	unresolvedScale{ 0 }
{
	Music::Scale::isMajor = isMajor;
	Music::Scale::scalePatternLength = sizeof(pattern) / sizeof(pattern[0]);
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	Music::Scale::setScale(Music::Scale::GetPosition());
}

Music::Scale::Scale( int note,  Music::Position::Step(&pattern)[7],  bool isMajor) :
	Music::Object(note),
	pattern{ Music::Position::Step::NONE },
	scale{ 0 },
	resolvedScale{ 0 },
	unresolvedScale{ 0 }
{
	isMajor = isMajor;
	scalePatternLength = sizeof(pattern) / sizeof(pattern[0]);
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	Music::Scale::setScale(Music::Scale::GetPosition());
}

Music::Scale::Scale(std::string note, Music::Position::Step(&pattern)[7], bool isMajor) :
	Music::Object(note),
	pattern{ Music::Position::Step::NONE },
	scale{ 0 },
	resolvedScale{ 0 },
	unresolvedScale{ 0 }
{
	isMajor = isMajor;
	scalePatternLength = sizeof(pattern) / sizeof(pattern[0]);
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	Music::Scale::setScale(Music::Scale::GetPosition());
}

//Accessors
std::string Music::Scale::isMajorOrMinor() const
{
	if (Music::Scale::isMajor == true)
	{
		return "Major";
	}
	else
	{
		return "Minor";
	}
}
std::string Music::Scale::getScaleAsString() const
{
	std::string s;
	for (Music::Note note : scale)
	{
		if (note.GetName() != "NONE") {
			s += note.GetName();
			s += " ";
		}
	}
	s.pop_back();
	return s;
}
std::string Music::Scale::getResolvedScaleAsString() const
{
	std::string s;
	for (Music::Note note : resolvedScale)
	{
		if (note.GetName() != "NONE") {
			s += note.GetName();
			s += " ";
		}
	}
	s.pop_back();
	return s;
}

//Methods
void Music::Scale::setScale(Music::Position position)
{
	Music::Scale::unresolvedScale[0] = Music::Note(position);
	Music::Note nextNote = position;
	for (int i = 1; i < 7; i++) {

		if (Music::Scale::pattern[i] == Music::Position::Step::NONE)
			continue;

		else if (Music::Scale::pattern[i] == Music::Position::Step::Whole)
		{
			nextNote = nextNote.accendFullStep();;
			Music::Scale::unresolvedScale[i] = nextNote;
		}

		else if (Music::Scale::pattern[i] == Music::Position::Step::Half)
		{
			nextNote = nextNote.accendHalfStep();
			Music::Scale::unresolvedScale[i] = Note(nextNote);
		}

		else if (Music::Scale::pattern[i] == Music::Position::Step::WholeandAHalf)
		{
			nextNote = nextNote.accendStepAndAHalf();
			Music::Scale::unresolvedScale[i] = Note(nextNote);
		}
	}
	Music::Scale::copyScale(unresolvedScale, scale);
	//Music::Scale::resolveScale();
}
//
//void Music::Scale::resolveScale()
//{
//	for (int i = 0; i < Music::Scale::scalePatternLength; i++)
//	{
//		int distance;
//		Music::Note previousNote;
//		Music::Note currentNote;
//		std::string currentNoteNameFrontPosition;
//		std::string currentNoteNameBackPosition;
//		std::string previousNoteName;
//		std::string currentNoteNewName;
//		currentNote = unresolvedScale[i];
//
//		if (currentNote.GetName().length() == 1)
//		{
//			resolvedScale[i] = currentNote;
//			continue;
//		}
//		if (currentNote.GetName().length() == 2)
//		{
//			resolvedScale[i] = currentNote;
//			continue;
//		}
//
//		if(currentNote.GetName().length() > 2){
//			currentNoteNameFrontPosition = currentNote.GetPosition().GetPositionAsString();
//			currentNoteNameFrontPosition.pop_back();
//			currentNoteNameFrontPosition.pop_back();
//			//frontPosition.pop_back();
//			currentNoteNameBackPosition = currentNote.GetPosition().GetPositionAsString();
//			currentNoteNameBackPosition.erase(0, 2);
//		}
//		// If this is the first iteration then there is no previous note to compare to.
//		if (i == 0)
//		{
//			currentNote.SetName(name);
//			if (currentNote.GetName() == "As") {
//				currentNote.SetName("Bf");
//			}
//			else if (currentNote.GetName() == "Cs") {
//				currentNote.SetName("Df");
//			}
//			else if (currentNote.GetName() == "Cs") {
//				currentNote.SetName("Df");
//			}
//			else if (currentNote.GetName() == "Ds") {
//				currentNote.SetName("Ef");
//			}
//			else if (currentNote.GetName() == "Fs") {
//				currentNote.SetName("Fs");
//			}
//			else if (currentNote.GetName() == "Gs") {
//				currentNote.SetName("Af");
//			}
//			resolvedScale[i] = currentNote;
//			continue;
//		}
//		else if (i >= 1)
//		{
//			previousNote = resolvedScale[i - 1];
//			previousNoteName = previousNote.GetName();
//			if (previousNoteName.length() > 1) { previousNoteName.pop_back(); }
//
//			currentNoteNewName = ++previousNoteName[0];
//			if (currentNoteNewName == "H") {
//				currentNoteNewName = "A";
//			}
//			if (currentNoteNameFrontPosition[0] == currentNoteNewName[0]) {
//				currentNote.SetName(currentNoteNameFrontPosition);
//			}
//			else
//			{
//				currentNote.SetName(currentNoteNameBackPosition);
//			}
//			resolvedScale[i] = currentNote;
//		}
//	}
//}
void Music::Scale::copyScale(Music::Note (&s1)[7], Music::Note (&s2)[7])
{
	std::copy(std::begin(s1), std::end(s1), std::begin(s2));
}
//Music::Scale Music::Scale::operator =(const Music::Scale& otherScale)
//{
//	if (this != &otherScale)
//	{
//		this->position = otherScale.position;
//		std::copy(std::begin(otherScale.pattern), std::end(otherScale.pattern), std::begin(Music::Scale::pattern));
//		this->setScale(Music::Scale::GetPosition());
//	}
//	return *this;
//}
//Music::Scale Music::Scale::operator =(const Music::Position& otherPosition)
//{
//	if (this->position != otherPosition)
//	{
//		this->position = otherPosition;
//		this->setScale(Music::Scale::GetPosition());
//	}
//	return *this;
//}
//Music::Scale Music::Scale::operator =(const int& scaleAsInt)
//{
//	if ((int)this->GetPosition().GetChromaticScalePosition() != scaleAsInt)
//	{
//		this->position = scaleAsInt;
//		this->setScale(Music::Scale::GetPosition());
//	}
//	return *this;
//}
//Music::Scale Music::Scale::operator =(const std::string& scaleAsString)
//{
//	if (this->GetPosition().GetPositionAsString() != scaleAsString)
//	{
//		this->position = scaleAsString;
//		this->setScale(Music::Scale::GetPosition());
//	}
//	return *this;
//}
//Music::Scale Music::Scale::operator ++()
//{
//	Music::Scale newScale = Music::Scale((int)position.GetChromaticScalePosition() + 1, pattern, isMajor);
//	*this = newScale;
//	return newScale;
//}
//Music::Scale Music::Scale::operator ++(int)
//{
//	Music::Scale temp = *this;
//	Music::Scale newScale = Music::Scale((int)position.GetChromaticScalePosition() + 1, pattern, isMajor);
//	*this = newScale;
//	return temp;
//}
//Music::Scale Music::Scale::operator --()
//{
//	Music::Scale newScale = Music::Scale((int)position.GetChromaticScalePosition() - 1, pattern, isMajor);
//	*this = newScale;
//	return newScale;
//}
//Music::Scale Music::Scale::operator --(int)
//{
//	Music::Scale temp = *this;
//	Music::Scale newScale = Music::Scale((int)position.GetChromaticScalePosition() - 1, pattern, isMajor);
//	*this = newScale;
//	return temp;
//}
bool Music::Scale::operator ==(const Music::Scale& otherScale) const
{
	return Music::Scale::position == otherScale.position;
}
bool Music::Scale::operator !=(const Music::Scale& otherScale) const
{
	return Music::Scale::position != otherScale.position;
}
bool Music::Scale::operator <(const Music::Scale& otherScale) const
{
	return Music::Scale::position < otherScale.position;
}
bool Music::Scale::operator <=(const Music::Scale& otherScale) const
{
	return Music::Scale::position <= otherScale.position;
}
bool Music::Scale::operator >(const Music::Scale& otherScale) const
{
	return Music::Scale::position > otherScale.position;
}
bool Music::Scale::operator >=(const Music::Scale& otherScale) const
{
	return Music::Scale::position >= otherScale.position;
}