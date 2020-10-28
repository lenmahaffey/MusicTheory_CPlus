/*
	CSC160 8N0 Computer Science 1
	File: CSC160_C___main.cpp
	By: Len Mahaffey
	Project:
	Last Edited:
	Description:
*/
#include "src/scales/PentatonicMinorScale.h"
#include "src/scales/MajorScale.h"
#include <iostream>

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
		Music::Step::Whole,
	};

	//Music::Scale n = Music::Scale(Music::ChromaticScale::A, pattern, true);

	//Music::MajorScale newMajorScale = Music::MajorScale(Music::ChromaticScale::A);
	Music::PentatonicMinorScale newScale = Music::PentatonicMinorScale(Music::ChromaticScale::E);
	cout << newScale.getScaleAsString() << endl;
	return 0;
}

