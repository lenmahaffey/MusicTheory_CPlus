#pragma once
#include "CppUnitTest.h"
#include "../src/Chord.cpp"
#include "../src/scales/MajorScale.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace MajorScaleChord_Test
{
	TEST_CLASS(MajorChord_Test)
	{
		TEST_METHOD(I_Test)
		{
			string expected = "C E G";
			MajorScale scaleToTest = MajorScale(Music::Pitch("C"));
			Assert::AreEqual(expected, scaleToTest.getIAsString());
		}
		TEST_METHOD(II_Test)
		{
			string expected = "D F A";
			MajorScale scaleToTest = MajorScale(Music::Pitch("C"));
			Assert::AreEqual(expected, scaleToTest.getIIAsString());
		}
		TEST_METHOD(III_Test)
		{
			string expected = "E G B";
			MajorScale scaleToTest = MajorScale(Music::Pitch("C"));
			Assert::AreEqual(expected, scaleToTest.getIIIAsString());
		}
		TEST_METHOD(IV_Test)
		{
			string expected = "F A C";
			MajorScale scaleToTest = MajorScale(Music::Pitch("C"));
			Assert::AreEqual(expected, scaleToTest.getIVAsString());
		}
		TEST_METHOD(V_Test)
		{
			string expected = "G B D";
			MajorScale scaleToTest = MajorScale(Music::Pitch("C"));
			Assert::AreEqual(expected, scaleToTest.getVAsString());
		}
		TEST_METHOD(VI_Test)
		{
			string expected = "A C E";
			MajorScale scaleToTest = MajorScale(Music::Pitch("C"));
			Assert::AreEqual(expected, scaleToTest.getVIAsString());
		}
		TEST_METHOD(VII_Test)
		{
			string expected = "B D F";
			MajorScale scaleToTest = MajorScale(Music::Pitch("C"));
			Assert::AreEqual(expected, scaleToTest.getVIIAsString());
		}
	};
}
