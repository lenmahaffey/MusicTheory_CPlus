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
	Scale A("A", pattern, true);
	MajorScale C("C");
	cout << A.isMajorOrMinor() << endl;
	cout << C.isMajorOrMinor() << endl;
	return 0;
}

