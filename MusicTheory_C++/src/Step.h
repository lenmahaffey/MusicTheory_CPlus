/*
	CSC160 8N0 Computer Science 1
	File: Step.h
	By: Len Mahaffey
	Project: Final Project
	Last Edited: 12/5/20
	Description: Enumeration of steps on the chromatic scale
*/
#pragma once
namespace Music
{
	enum class Step
	{
		NONE = 0,
		Half,
		Whole,
		WholeandAHalf,
		Double
	};
}