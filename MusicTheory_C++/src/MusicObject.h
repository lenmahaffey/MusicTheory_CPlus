/*
	CSC160 8N0 Computer Science 1
	File: MusicObject.cpp
	By: Len Mahaffey
	Project: Final Project
	Last Edited: 12/5/20
	Description: MusicObject class declaration. Base class for almost all musical objects
*/
#pragma once
#include "Pitch.h"

namespace Music {

	class MusicObject
	{
	public:
		//Constructors
		MusicObject();
		MusicObject(Music::Pitch pitch);
		MusicObject(std::string pitchAsString);
		MusicObject(int pitchAsInt);

		//Getters
		Pitch& GetPosition();
		std::string GetName() const;

		//Setters
		void SetName(std::string newName);

		//Methods
		Pitch accendHalfStep();
		Pitch accendFullStep();
		Pitch accendStepAndAHalf();

		//Operator overloads
		MusicObject operator =(const MusicObject& otherMusicObject);
		MusicObject operator =(const Pitch& otherPitch);
		MusicObject operator =(const int& positionAsInt);
		MusicObject operator =(const std::string& pitchAsString);
		MusicObject operator ++();
		MusicObject operator ++(int);
		MusicObject operator --();
		MusicObject operator --(int);
		bool operator ==(const MusicObject& otherMusicObject) const;
		bool operator !=(const MusicObject& otherMusicObject) const;
		bool operator <(const MusicObject& otherMusicObject) const;
		bool operator <=(const MusicObject& otherMusicObject) const;
		bool operator >(const MusicObject& otherMusicObject) const;
		bool operator >=(const MusicObject& otherMusicObject) const;

	protected:
		//Properties
		Pitch pitch;
		std::string name;
	};
}

