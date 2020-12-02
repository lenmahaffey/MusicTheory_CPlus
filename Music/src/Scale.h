#pragma once
#include "Chord.h"
#include "ChordPatterns.h"
#include "Note.h"

namespace Music{

	class Scale : public Music::Object
	{
	public:
		//Constructors
		Music::Scale();
		Music::Scale(Music::Pitch pitch,  Music::Step (&pattern)[7],  bool isMajor);
		Music::Scale(int pitchAsInt,  Music::Step(&pattern)[7],  bool isMajor);
		Music::Scale(std::string note,  Music::Step(&pattern)[7],  bool isMajor);

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
		bool operator ==(const Music::Scale& otherScale) const;
		bool operator !=(const Music::Scale& otherScale) const;
		bool operator <(const Music::Scale& otherScale) const;
		bool operator <=(const Music::Scale& otherScale) const;
		bool operator >(const Music::Scale& otherScale) const;
		bool operator >=(const Music::Scale& otherScale) const;

	protected:
		//Properties
		bool isMajor;
		int scalePatternLength;
		Music::Step pattern[7];
		Music::Note scale[7];
		Music::Note unresolvedScale[7];
		Music::Chord I;
		Music::Chord II;
		Music::Chord III;
		Music::Chord IV;
		Music::Chord V;
		Music::Chord VI;
		Music::Chord VII;

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
