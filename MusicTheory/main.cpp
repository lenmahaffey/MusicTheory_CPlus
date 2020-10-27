/*
	CSC160 8N0 Computer Science 1
	File: main.cpp
	By: Len Mahaffey
	Project:
	Last Edited:
	Description:
*/

#include <iostream>
#include "ChromaticScale.h"
#include "Weight.h"
#include "Step.h"
#include "Note.h"
#include "Object.h"
#include "Scale.h"
#include "scales/MajorScale.h"

using namespace std;

int main()
{
	Music::Step pattern[7] =
	{
		Music::Step::Whole,
		Music::Step::Whole,
		Music::Step::Whole,
		Music::Step::Half,
		Music::Step::Whole,
		Music::Step::Whole,
		Music::Step::Whole
	};

	Music::Note newNote = Music::Note(Music::ChromaticScale::A);
	Music::MajorScale newScale = Music::MajorScale(Music::ChromaticScale::C);

	cout << newScale.getScaleAsString() << endl;
	cout << newNote.getTextName() << endl;
	cout << Music::GetWeightAsString(Music::Weight::Half);
	return 0;
}

