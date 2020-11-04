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
using namespace Music;

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
	Scale C("C", pattern, true);

	//Music::Step step = *C.pattern[0];
	//cout << step << endl;
	//cout << C.pattern[1];

	cout << C.getNameAsString() << endl;

	return 0;
}

