/*
	CSC160 8N0 Computer Science 1
	File: ChordPatterns.cpp
	By: Len Mahaffey
	Project: Final Project
	Last Edited: 12/5/20
	Description: Quick and dirty data structure to store chord patterns. A chord is comprised of a specific pattern of notes derived from a scale.
				 This is my least favorite part of the program and needs refactoring
*/
#pragma once
namespace Music{
	class ChordPatterns
	{
	public:
		//Constructors
		ChordPatterns();

		struct chordPattern
		{
			int *pattern;
			int length;
		};

		chordPattern I_Chord;
		chordPattern II_Chord;
		chordPattern III_Chord;
		chordPattern IV_Chord;
		chordPattern V_Chord;
		chordPattern VI_Chord;
		chordPattern VII_Chord;

		Music::ChordPatterns::chordPattern getI();
		Music::ChordPatterns::chordPattern getII();
		Music::ChordPatterns::chordPattern getIII();
		Music::ChordPatterns::chordPattern getIV();
		Music::ChordPatterns::chordPattern getV();
		Music::ChordPatterns::chordPattern getVI();
		Music::ChordPatterns::chordPattern getVII();
	};
}

