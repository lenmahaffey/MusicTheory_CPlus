/*
	CSC160 8N0 Computer Science 1
	File: CSC160_C___main.cpp
	By: Len Mahaffey
	Project:
	Last Edited:
	Description:
*/
#include "src/scales/MajorScale.h"
#include <iostream>

using namespace std;
using namespace Music;

int main()
{
	MajorScale C("C");
	cout << C.isMajorOrMinor() << endl;
	cout << C.getIAsString() << endl;
	return 0;
}

