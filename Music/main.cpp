/*
	CSC160 8N0 Computer Science 1
	File: main.cpp
	By: Len Mahaffey
	Project: Final Project
	Last Edited: 12/5/20
	Description: Main function demos scale output
*/
#include <sstream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ostream>
#include "src/MusicException.h"
#include "src/scales/MajorScale.h"

using namespace std;
using namespace Music;

//string inputScales[20];
//Music::MajorScale DemoScale;
//stringstream printScale(Music::MajorScale scale);
//void writeFile(stringstream string);
//void readFile();

int main()
{
	////Create new major scale
	//try{
	//	readFile();
	//	for (int i = 0; i < 20; i++){
	//		DemoScale = MajorScale(inputScales[i]);
	//		cout << printScale(DemoScale).str();
	//		writeFile(printScale(DemoScale));
	//	}
	//}
	//catch (MusicException e)
	//{
	//	cout << e.GetMessage() << endl;
	//}
	Music::MajorScale DemoScale = MajorScale("C");
	cout << DemoScale.getScaleAsString();
	return 0;
}
//stringstream printScale(Music::MajorScale scale)
//{
//	stringstream stream;
//	stream << "Key of " << scale.GetName() << " Major" << endl;
//	stream << "--------------" << endl;
//	stream << "    Scale:" << endl;
//	stream << scale.getScaleAsString() << endl<< endl;
//	stream << "   Chords:" << endl;
//	stream << left << setw(5) << "I: " << scale.getIAsString() << endl;
//	stream << left << setw(5) << "II: " << scale.getIIAsString() << endl;
//	stream << left << setw(5) << "III: " << scale.getIIIAsString() << endl;
//	stream << left << setw(5) << "VI: " << scale.getIVAsString() << endl;
//	stream << left << setw(5) << "V: " << scale.getVAsString() << endl;
//	stream << left << setw(5) << "VI: " << scale.getVIAsString() << endl;
//	stream << left << setw(5) << "VII: " << scale.getVIIAsString() << endl << endl;
//	return stream;
//}
//
//void readFile()
//{
//	int i = 0;
//	string input;
//	ifstream infile = ifstream("inputScale.txt");
//	while (getline(infile, input))
//	{
//		inputScales[i] = input;
//		i++;
//	}
//}
//void writeFile(stringstream string)
//{
//	ofstream outfile = ofstream("scaleData.txt", ios::app);
//	outfile << string.str();
//	outfile.close();
//}
