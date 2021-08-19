/*
	CSC160 8N0 Computer Science 1
	File: Chord.cpp
	By: Len Mahaffey
	Project: Final Project
	Last Edited: 12/5/20
	Description: Chord class declaration.
*/
#pragma once
#include "Note.h"
namespace Music {

	class Chord
	{
	public:
		Chord();
		Chord(std::string name, Music::Pitch pitch);
		Chord(std::string name, int pitchAsInt);
		Chord(std::string name, std::string note);
		~Chord();
		Note* chord[3];
		void setChord(Note scale[], int pattern[], int patternLength);
		std::string GetName() const;

	private:
		std::string name;
	};
}

