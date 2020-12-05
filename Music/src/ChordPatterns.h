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

		struct I
		{
			int pattern[3] = { 0, 2, 4 };
			int length = 3;
		};
		struct II
		{
			int pattern[3] = { 1, 3, 5 };
			int length = 3;
		};
		struct III
		{
			int pattern[3] = { 2, 4, 6 };
			int length = 3;
		};
		struct IV
		{
			int pattern[3] = { 3, 5, (7-7) };
			int length = 3;
		};
		struct V
		{
			int pattern[3] = { 4, 6, (8-7) };
			int length = 3;
		};
		struct VI
		{
			int pattern[3] = { 5, 7-7, (9-7) };
			int length = 3;
		};
		struct VII
		{
			int pattern[3] = { 6, (8-7), (10-7) };
			int length = 3;
		};

		I I_Chord;
		II II_Chord;
		III III_Chord;
		IV IV_Chord;
		V V_Chord;
		VI VI_Chord;
		VII VII_Chord;

		Music::ChordPatterns::I getI();
		Music::ChordPatterns::II getII();
		Music::ChordPatterns::III getIII();
		Music::ChordPatterns::VI getIV();
		Music::ChordPatterns::V getV();
		Music::ChordPatterns::VI getVI();
		Music::ChordPatterns::VII getVII();
	};
}

