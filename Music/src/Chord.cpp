#include "Chord.h"
Music::Chord::Chord() :
	chord { 0 }
{
}
Music::Chord::Chord(std::string n, Music::Pitch pitch) :
	chord { 0 }
{
	name = n;
}
Music::Chord::Chord(std::string n, int pitchAsInt) :
	chord{ 0 }
{
	name = n;
}
Music::Chord::Chord(std::string n, std::string pitchAsString) :
	chord { 0 }
{
	name = n;
}

void Music::Chord::setChord(Note scale[], int pattern[], int patternLength)
{
	for (int i = 0; i < patternLength; i++)
	{
		chord[i] = scale[pattern[i]];
	}
}