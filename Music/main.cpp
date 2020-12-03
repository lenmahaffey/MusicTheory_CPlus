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
#include "src/MusicException.h"

using namespace std;
using namespace Music;

int main()
{
	try {
		MajorScale C(20);
	}
	catch (MusicException e)
	{
		cout << (int)e << endl;
	}
	return 0;
}

