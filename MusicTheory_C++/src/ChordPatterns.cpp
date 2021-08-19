/*
	CSC160 8N0 Computer Science 1
	File: ChordPatterns.cpp
	By: Len Mahaffey
	Project: Final Project
	Last Edited: 12/5/20
	Description: ChordPatterns class implementation
*/
#pragma once
#include "ChordPatterns.h"
Music::ChordPatterns::ChordPatterns()
{
	I_Chord = Music::ChordPatterns::chordPattern();
	II_Chord = Music::ChordPatterns::chordPattern();
	III_Chord = Music::ChordPatterns::chordPattern();
	IV_Chord = Music::ChordPatterns::chordPattern();
	V_Chord = Music::ChordPatterns::chordPattern();
	VI_Chord = Music::ChordPatterns::chordPattern();
	VII_Chord = Music::ChordPatterns::chordPattern();
	I_Chord.pattern = new int[] { 0, 2, 4 };
	II_Chord.pattern = new int[] { 1, 3, 5 };
	III_Chord.pattern = new int[] { 2, 4, 6 };
	IV_Chord.pattern = new int[] { 3, 5, (7 - 7) };
	V_Chord.pattern = new int[] { 4, 6, (8 - 7) };
	VI_Chord.pattern = new int[] { 5, 7 - 7, (9 - 7) };
	VII_Chord.pattern = new int[] { 6, (8 - 7), (10 - 7) };
	I_Chord.length = 3;
	II_Chord.length = 3;
	III_Chord.length = 3;
	VI_Chord.length = 3;
	V_Chord.length = 3;
	VI_Chord.length = 3;
	VII_Chord.length = 3;
}

Music::ChordPatterns::chordPattern Music::ChordPatterns::getI()
{
	return I_Chord;
}
Music::ChordPatterns::chordPattern Music::ChordPatterns::getII()
{
	return II_Chord;
}
Music::ChordPatterns::chordPattern Music::ChordPatterns::getIII()
{
	return III_Chord;
}
Music::ChordPatterns::chordPattern Music::ChordPatterns::getIV()
{
	return VI_Chord;
}
Music::ChordPatterns::chordPattern Music::ChordPatterns::getV()
{
	return V_Chord;
}
Music::ChordPatterns::chordPattern Music::ChordPatterns::getVI()
{
	return VI_Chord;
}
Music::ChordPatterns::chordPattern Music::ChordPatterns::getVII()
{
	return VII_Chord;
}


