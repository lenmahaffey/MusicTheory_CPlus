/*
	CSC160 8N0 Computer Science 1
	File: Scale.h
	By: Len Mahaffey
	Project: Final Project
	Last Edited: 12/5/20
	Description: Scale virtual class deceleration. This class must be implemented by a derived class and that derived class must
				 provide the pattern for the scale as well as implement a method to resolve the names of the notes.
*/
#pragma once
#include <sstream>
#include <iomanip>
#include "Chord.h"
#include "ChordPatterns.h"
#include "Note.h"

namespace Music{

	class Scale : public MusicObject
	{
	public:
		//Constructors
		Scale();
		Scale(Music::Pitch pitch,  Music::Step (&pattern)[7],  bool isMajor);
		Scale(int pitchAsInt,  Music::Step(&pattern)[7],  bool isMajor);
		Scale(std::string note,  Music::Step(&pattern)[7],  bool isMajor);

		//Accessors
		std::string isMajorOrMinor() const;
		std::string getScaleAsString() const;
		std::string getUnresolvedScaleAsString() const;
		std::string getChordAsString(Chord c) const;
		std::string getIAsString() const;
		std::string getIIAsString() const;
		std::string getIIIAsString() const;
		std::string getIVAsString() const;
		std::string getVAsString() const;
		std::string getVIAsString() const;
		std::string getVIIAsString() const;

		//Operator Overloads
		bool operator ==(const Scale& otherScale) const;
		bool operator !=(const Scale& otherScale) const;
		bool operator <(const Scale& otherScale) const;
		bool operator <=(const Scale& otherScale) const;
		bool operator >(const Scale& otherScale) const;
		bool operator >=(const Scale& otherScale) const;

	protected:
		//Properties
		bool isMajor;
		int scalePatternLength;
		Step pattern[7];
		Note scale[7];
		Note unresolvedScale[7];
		Chord I;
		Chord II;
		Chord III;
		Chord IV;
		Chord V;
		Chord VI;
		Chord VII;

		void SetI();
		void SetII();
		void SetIII();
		void SetIV();
		void SetV();
		void SetVI();
		void SetVII();
		ChordPatterns chordPatterns;

		//Methods
		void setScale(Music::Pitch);
		void copyScale(Music::Note(&s1)[7], Music::Note(&s2)[7]);
		void setAllChords();

	private:
		virtual void resolveScale() = 0;
	};
}
