/*
	CSC160 8N0 Computer Science 1
	File: Chord.cpp
	By: Len Mahaffey
	Project: Final Project
	Last Edited: 12/5/20
	Description: Chord class implementation
*/
#include "Chord.h"
Music::Chord::Chord() :
	chord { 0 }
{
	*chord = new Note[3];
	name = "Chord";
}
Music::Chord::Chord(std::string n, Music::Pitch pitch) :
	chord { 0 }
{
	*chord = new Note[3];
	name = n;
}
Music::Chord::Chord(std::string n, int pitchAsInt) :
	chord{ 0 }
{
	*chord = new Note[3];
	name = n;
}
Music::Chord::Chord(std::string n, std::string pitchAsString) :
	chord { 0 }
{
	*chord = new Note[3];
	name = n;
}
Music::Chord::~Chord()
{
}
std::string Music::Chord::GetName() const
{
	return name;
}
void Music::Chord::setChord(Note scale[], int pattern[], int patternLength)
{
	for (int i = 0; i < patternLength; i++)
	{
		std::string name = scale[pattern[i]].GetName();
		chord[i] = new Note(name);
		chord[i]->SetName(name);
	}
}