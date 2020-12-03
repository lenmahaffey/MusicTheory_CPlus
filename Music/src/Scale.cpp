#pragma once
#include "Scale.h"

//Constructors
Music::Scale::Scale() : Music::MusicObject(),
	pattern { Music::Step::NONE },
	scale { 0 },
	unresolvedScale{ 0 }
{
	chordPatterns = ChordPatterns();
	isMajor = true;
	scalePatternLength = sizeof(pattern) / sizeof(pattern[0]);
}

Music::Scale::Scale( Music::Pitch note,  Music::Step (&pattern)[7],  bool major) :	Music::MusicObject(note),
	pattern{ Music::Step::NONE },
	scale{ 0 },
	unresolvedScale{ 0 }
{
	chordPatterns = ChordPatterns();
	isMajor = major;
	scalePatternLength = sizeof(pattern) / sizeof(pattern[0]);
	std::copy(std::begin(pattern), std::end(pattern), std::begin(Music::Scale::pattern));
	setScale(Music::Scale::GetPosition());
}

Music::Scale::Scale( int note,  Music::Step(&pattern)[7],  bool major) : Music::MusicObject(note),
	pattern{ Music::Step::NONE },
	scale{ 0 },
	unresolvedScale{ 0 }
{
	chordPatterns = ChordPatterns();
	isMajor = major;
	scalePatternLength = sizeof(pattern) / sizeof(pattern[0]);
	std::copy(std::begin(pattern), std::end(pattern), std::begin(pattern));
	setScale(GetPosition());
}

Music::Scale::Scale(std::string note, Music::Step(&pattern)[7], bool isMajor) : Music::MusicObject(note),
	pattern{ Music::Step::NONE },
	scale{ 0 },
	unresolvedScale{ 0 }
{
	chordPatterns = ChordPatterns();
	isMajor = isMajor;
	scalePatternLength = sizeof(pattern) / sizeof(pattern[0]);
	std::copy(std::begin(pattern), std::end(pattern), std::begin(pattern));
	setScale(GetPosition());
}

//Accessors
std::string Music::Scale::isMajorOrMinor() const
{
	if (isMajor == true)
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

std::string Music::Scale::getUnresolvedScaleAsString() const
{
	std::string s;
	for (Music::Note note : unresolvedScale)
	{
		if (note.GetName() != "NONE") {
			s += note.GetName();
			s += " ";
		}
	}
	s.pop_back();
	return s;
}
std::string Music::Scale::getChordAsString(Chord c) const
{
	std::string s;
	for (int i = 0; i < 3; i++)
	{
		if (c.chord[i]->GetName() != "NONE") {
			s += c.chord[i]->GetName();
			s += " ";
		}
	}
	s.pop_back();
	return s;
}
std::string Music::Scale::getIAsString() const
{
	return getChordAsString(I);
}
std::string Music::Scale::getIIAsString() const
{
	return getChordAsString(II);
}
std::string Music::Scale::getIIIAsString() const
{
	return getChordAsString(III);
}
std::string Music::Scale::getIVAsString() const
{
	return getChordAsString(IV);
}
std::string Music::Scale::getVAsString() const
{
	return getChordAsString(V);
}
std::string Music::Scale::getVIAsString() const
{
	return getChordAsString(VI);
}
std::string Music::Scale::getVIIAsString() const
{
	return getChordAsString(VII);
}

//Methods
void Music::Scale::setScale(Music::Pitch position)
{
	Music::Scale::unresolvedScale[0] = Music::Note(position);
	Music::Note nextNote = position;
	for (int i = 1; i < 7; i++) {

		if (pattern[i] == Music::Step::NONE)
			continue;

		else if (pattern[i] == Music::Step::Whole)
		{
			nextNote = nextNote.accendFullStep();;
			unresolvedScale[i] = nextNote;
		}

		else if (pattern[i] == Music::Step::Half)
		{
			nextNote = nextNote.accendHalfStep();
			unresolvedScale[i] = Note(nextNote);
		}

		else if (pattern[i] == Music::Step::WholeandAHalf)
		{
			nextNote = nextNote.accendStepAndAHalf();
			unresolvedScale[i] = Note(nextNote);
		}
	}
	Music::Scale::copyScale(unresolvedScale, scale);
}
void Music::Scale::copyScale(Music::Note (&s1)[7], Music::Note (&s2)[7])
{
	std::copy(std::begin(s1), std::end(s1), std::begin(s2));
}
void Music::Scale::setAllChords()
{
	SetI();
	SetII();
	SetIII();
	SetIV();
	SetV();
	SetVI();
	SetVII();
}
bool Music::Scale::operator ==(const Music::Scale& otherScale) const
{
	return pitch == otherScale.pitch;
}
bool Music::Scale::operator !=(const Music::Scale& otherScale) const
{
	return pitch != otherScale.pitch;
}
bool Music::Scale::operator <(const Music::Scale& otherScale) const
{
	return pitch < otherScale.pitch;
}
bool Music::Scale::operator <=(const Music::Scale& otherScale) const
{
	return pitch <= otherScale.pitch;
}
bool Music::Scale::operator >(const Music::Scale& otherScale) const
{
	return pitch > otherScale.pitch;
}
bool Music::Scale::operator >=(const Music::Scale& otherScale) const
{
	return pitch >= otherScale.pitch;
}

void Music::Scale::SetI()
{
	I.setChord(scale, chordPatterns.I_Chord.pattern, chordPatterns.I_Chord.length);
}
void Music::Scale::SetII()
{
	II.setChord(scale, chordPatterns.II_Chord.pattern, chordPatterns.II_Chord.length);
}
void Music::Scale::SetIII()
{
	III.setChord(scale, chordPatterns.III_Chord.pattern, chordPatterns.III_Chord.length);
}
void Music::Scale::SetIV()
{
	IV.setChord(scale, chordPatterns.IV_Chord.pattern, chordPatterns.IV_Chord.length);
}
void Music::Scale::SetV()
{
	V.setChord(scale, chordPatterns.V_Chord.pattern, chordPatterns.V_Chord.length);
}
void Music::Scale::SetVI()
{
	VI.setChord(scale, chordPatterns.VI_Chord.pattern, chordPatterns.VI_Chord.length);
}
void Music::Scale::SetVII()
{
	VII.setChord(scale, chordPatterns.VII_Chord.pattern, chordPatterns.VII_Chord.length);
}