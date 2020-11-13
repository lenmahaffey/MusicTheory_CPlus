/*
	CSC160 8N0 Computer Science 1
	File: CSC160_C___main.cpp
	By: Len Mahaffey
	Project:
	Last Edited:
	Description:
*/
#include "src/scales/HarmonicMinorScale.h"
#include "src/scales/MajorScale.h"
#include <iostream>

using namespace std;
using namespace Music;

int main()
{
	Music::Position::Step pattern[7] =
	{
		Music::Position::Step::Whole,
		Music::Position::Step::Whole,
		Music::Position::Step::Whole,
		Music::Position::Step::Half,
		Music::Position::Step::Whole,
		Music::Position::Step::Whole,
		Music::Position::Step::Whole,
	};
	//Scale();
 	//Scale B("B", pattern, true);
	//Scale C("C", pattern, true);
	//HarmonicMinorScale C(4);
	//cout << A.isMajorOrMinor() << endl;
	//cout << C.isMajorOrMinor() << endl;
	//B = C;
	//Object C(4);

	//Position AsBf(Position::ChromaticScalePosition::AsBf);
	//cout << AsBf.GetName() << endl;
	//AsBf.SetName("As");
	//cout << AsBf.GetName() << endl;
	//AsBf.SetName("BF");
	//cout << AsBf.GetName() << endl;

	//Object FsGf(Position::ChromaticScalePosition::FsGf);
	//cout << FsGf.GetPosition().GetName() << endl;
	//FsGf.GetPosition().SetName("Fs");
	//cout << FsGf.GetPosition().GetName() << endl;


	//Note CsDf(Position::ChromaticScalePosition::CsDf);
	//cout << CsDf.GetPosition().GetName() << endl;
	//CsDf.GetPosition().SetName("Df");
	//cout << CsDf.GetPosition().GetName() << endl;

	//Scale F("F", pattern, true);
	//cout << F.getResolvedScaleAsString() << endl;

	//Position Af("Af");
	//cout << Af.GetPositionAsString()<< endl;
	//cout << Af.GetName();
	Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::GsAf;
	MajorScale Af("Gs");
	cout << Af.getScaleAsString() << endl;
	cout << Af.getResolvedScaleAsString() << endl;

	return 0;
}

