#pragma once
#include "CppUnitTest.h"
#include "../src/scale.cpp"
#include "../src/scales/MajorScale.cpp"
#include "../src/ChordPatterns.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace MajorScale_Test
{
	TEST_CLASS(getUnresolvedScale_Test)
	{
		TEST_METHOD(AMajor_getUnresolvedScale_Test)
		{
			string expected = "A B CsDf D E FsGf GsAf";
			MajorScale scaleToTest = MajorScale(Music::Pitch("A"));
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());

		}
		TEST_METHOD(AsBfMajor_getUnresolvedScale_Test)
		{
			string expected = "AsBf C D DsEf F G A";
			MajorScale scaleToTest = MajorScale(Music::Pitch("AsBf"));
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(BMajor_getUnresolvedScale_Test)
		{
			string expected = "B CsDf DsEf E FsGf GsAf AsBf";
			MajorScale scaleToTest = MajorScale(Music::Pitch("B"));
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());

		}
		TEST_METHOD(CMajor_getUnresolvedScale_Test)
		{
			string expected = "C D E F G A B";
			MajorScale scaleToTest = MajorScale(Music::Pitch("C"));
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(CsDfMajor_getUnresolvedScale_Test)
		{
			string expected = "CsDf DsEf F FsGf GsAf AsBf C";
			MajorScale scaleToTest = MajorScale(Music::Pitch("CsDf"));
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(DMajor_getUnresolvedScale_Test)
		{
			string expected = "D E FsGf G A B CsDf";
			MajorScale scaleToTest = MajorScale(Music::Pitch("D"));
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(DsEfMajor_getUnresolvedScale_Test)
		{
			string expected = "DsEf F G GsAf AsBf C D";
			MajorScale scaleToTest = MajorScale(Music::Pitch("DsEf"));
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(EMajor_getUnresolvedScale_Test)
		{
			string expected = "E FsGf GsAf A B CsDf DsEf";
			MajorScale scaleToTest = MajorScale(Music::Pitch("E"));
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(FMajor_getUnresolvedScale_Test)
		{
			string expected = "F G A AsBf C D E";
			MajorScale scaleToTest = MajorScale(Music::Pitch("F"));
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(FsGfMajor_getUnresolvedScale_Test)
		{
			string expected = "FsGf GsAf AsBf B CsDf DsEf F";
			MajorScale scaleToTest = MajorScale(Music::Pitch("FsGf"));
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(GMajor_getUnresolvedScale_Test)
		{
			string expected = "G A B C D E FsGf";
			MajorScale scaleToTest = MajorScale(Music::Pitch("G"));
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(GsAfMajor_getUnresolvedScale_Test)
		{
			string expected = "GsAf AsBf C CsDf DsEf F G";
			MajorScale scaleToTest = MajorScale(Music::Pitch("GsAf"));
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
	};
	TEST_CLASS(getScaleAsString_Test)
	{
		TEST_METHOD(AMajor_getScaleAsString_Test)
		{
			string expected = "A B Cs D E Fs Gs";
			MajorScale scaleToTest = MajorScale("A");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());

		}
		TEST_METHOD(AsBfMajor_getScaleAsString_Test)
		{
			string expected = "Bf C D Ef F G A";
			MajorScale scaleToTest = MajorScale("As");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(BMajor_getScaleAsString_Test)
		{
			string expected = "B Cs Ds E Fs Gs As";
			MajorScale scaleToTest = MajorScale("B");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());

		}
		TEST_METHOD(CMajor_getScaleAsString_Test)
		{
			string expected = "C D E F G A B";
			MajorScale scaleToTest = MajorScale("C");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CsDfMajor_getScaleAsString_Test)
		{
			string expected = "Df Ef F Gf Af Bf C";
			MajorScale scaleToTest = MajorScale("Cs");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DMajor_getScaleAsString_Test)
		{
			string expected = "D E Fs G A B Cs";
			MajorScale scaleToTest = MajorScale("D");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DsEfMajor_getScaleAsString_Test)
		{
			string expected = "Ef F G Af Bf C D";
			MajorScale scaleToTest = MajorScale("Ds");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(EMajor_getScaleAsString_Test)
		{
			string expected = "E Fs Gs A B Cs Ds";
			MajorScale scaleToTest = MajorScale("E");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FMajor_getScaleAsString_Test)
		{
			string expected = "F G A Bf C D E";
			MajorScale scaleToTest = MajorScale("F");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FsGfMajor_getScaleAsString_Test)
		{
			string expected = "Fs Gs As B Cs Ds F";
			MajorScale scaleToTest = MajorScale("Fs");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GMajor_getScaleAsString_Test)
		{
			string expected = "G A B C D E Fs";
			MajorScale scaleToTest = MajorScale("G");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GsAfMajor_getScaleAsString_Test)
		{
			string expected = "Af Bf C Df Ef F G";
			MajorScale scaleToTest = MajorScale("Gs");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
	TEST_CLASS(isMajorOrMinor_Test)
	{
		TEST_METHOD(AMajor_isMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(Music::Pitch("A"));
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(BMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(Music::Pitch("B"));
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(CMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(Music::Pitch("C"));
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(DMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(Music::Pitch("D"));
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(EMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(Music::Pitch("E"));
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(FMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(Music::Pitch("F"));
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(GMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(Music::Pitch("G"));
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(AsBfMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(Music::Pitch("AsBf"));
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(CsDfMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(Music::Pitch("CsDf"));
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(DsEfMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(Music::Pitch("DsEf"));
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(FsGfMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(Music::Pitch("FsGf"));
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(GsAfMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(Music::Pitch("GsAf"));
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
	};
}
