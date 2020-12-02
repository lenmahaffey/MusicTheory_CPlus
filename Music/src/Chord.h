#pragma once
#include "Note.h"
namespace Music {

	class Chord
	{
	public:
		Music::Chord();
		Music::Chord(std::string name, Music::Pitch pitch);
		Music::Chord(std::string name, int pitchAsInt);
		Music::Chord(std::string name, std::string note);
		Music::Note chord[3];
		void setChord(Note scale[], int pattern[], int patternLength);
		std::string GetName() const;

	private:
		std::string name;
	};
}

