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

	//Note A = Note(ChromaticScalePosition::A);
	//Music::Scale n = Music::Scale(Music::ChromaticScale::A, pattern, true);
	//Music::MajorScale newMajorScale = Music::MajorScale(Music::ChromaticScale::A);
	//Music::PentatonicMinorScale newScale = Music::PentatonicMinorScale(Music::ChromaticScale::E);
	//cout << newScale.getScaleAsString() << endl;
	//cout << (int)A.getChromaticScalePosition() << endl;
	//cout << A.getTextName() << endl;
	//Note B = A.goFullStep();
	//Note As = A.goHalfStep();
	//cout << As.getTextName() << B.getTextName() << endl;

	//Object C = Object("C");
	//Object A = Object("A");
	Note A("C");
	Note C("C");
	//char newChar = 'ASFD';
	if (A == C) {
		cout << "TRUE";
	}
	else
	{
		cout << "FALSE";
	}
	//cout << C.getNameAsString();
	return 0;
}

