/*
	CSC160 8N0 Computer Science 1
	File: Note.h
	By: Len Mahaffey
	Project: Final Project
	Last Edited: 12/5/20
	Description: Note class declaration. More useful later than it is now.
*/
#pragma once
#include "MusicObject.h"

namespace Music {
	class Note : public MusicObject

	{
	public:
		//Constructors
		Note();
		Note(Pitch note);
		Note(std::string note);
		Note(int note);

		//Operator Overloads
		Note operator =(const Note& otherNote);
		Note operator =(const Pitch& pitch);
		Note operator =(const int& pitchAsInt);
		Note operator =(const std::string& pitchAsString);
		Note operator ++();
		Note operator ++(int);
		Note operator --();
		Note operator --(int);
		bool operator ==(const Note& otherNote) const;
		bool operator !=(const Note& otherNote) const;
		bool operator <(const Note& otherNote) const;
		bool operator <=(const Note& otherNote) const;
		bool operator >(const Note& otherNote) const;
		bool operator >=(const Note& otherNote) const;
	};
}

