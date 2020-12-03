#pragma once
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
