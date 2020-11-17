#pragma once
#include "CppUnitTest.h"
#include "../src/scales/HarmonicMinorScale.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace HarmonicMinorScale_Test
{
	TEST_CLASS(getUnresolvedScaleAsString_Test)
	{
		TEST_METHOD(AHarmonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "A B C D E F GsAf";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::A);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}

		TEST_METHOD(BHarmonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "B CsDf D E FsGf G AsBf";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::B);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}

		TEST_METHOD(CHarmonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "C D DsEf F G GsAf B";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::C);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}

		TEST_METHOD(DHarmonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "D E F G A AsBf CsDf";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::D);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}

		TEST_METHOD(EHarmonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "E FsGf G A B C DsEf";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::E);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}

		TEST_METHOD(FHarmonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "F G GsAf AsBf C CsDf E";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::F);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}

		TEST_METHOD(GHarmonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "G A AsBf C D DsEf FsGf";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::G);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}

		TEST_METHOD(AsBfHarmonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "AsBf C CsDf DsEf F FsGf A";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::AsBf);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}

		TEST_METHOD(CsDfHarmonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "CsDf DsEf E FsGf GsAf A C";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::CsDf);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}

		TEST_METHOD(DsEfHarmonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "DsEf F FsGf GsAf AsBf B D";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::DsEf);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}

		TEST_METHOD(FsGfHarmonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "FsGf GsAf A B CsDf D F";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::FsGf);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}

		TEST_METHOD(GsAfHarmonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "GsAf AsBf B CsDf DsEf E G";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::GsAf);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
	};
	TEST_CLASS(getScaleAsString_Test)
	{
		TEST_METHOD(AHarmonicMinor_getScaleAsString_Test)
		{
			string expected = "A B C D E F Gs";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale("A");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(AsBfHarmonicMinor_getScaleAsString_Test)
		{
			string expected = "As Bs Cs Ds E Fs G";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale("As");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(BHarmonicMinor_getScaleAsString_Test)
		{
			string expected = "B Cs D E Fs G As";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale("B");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CHarmonicMinor_getScaleAsString_Test)
		{
			string expected = "C D Ef F G Af B";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale("C");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CsDfHarmonicMinor_getScaleAsString_Test)
		{
			string expected = "Cs Ds E Fs Gs A Bs";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale("Cs");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DHarmonicMinor_getScaleAsString_Test)
		{
			string expected = "D E F G A Bf Cs";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale("D");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DsEfHarmonicMinor_getScaleAsString_Test)
		{
			string expected = "Ds F Fs Gs As B D";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale("Ds");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(EHarmonicMinor_getScaleAsString_Test)
		{
			string expected = "E Fs G A B C Ds";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale("E");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FHarmonicMinor_getScaleAsString_Test)
		{
			string expected = "F G Af Bf C Df E";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale("F");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FsGfHarmonicMinor_getScaleAsString_Test)
		{
			string expected = "Fs Gs A B Cs D F";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale("Fs");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GHarmonicMinor_getScaleAsString_Test)
		{
			string expected = "G A Bf C D Ef Fs";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale("G");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GsAfHarmonicMinor_getScaleAsString_Test)
		{
			string expected = "Gs As B Cs Ds E G";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale("Gs");
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
	TEST_CLASS(isMajorOrMinor_Test)
	{
		TEST_METHOD(AHarmonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::A);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(BHarmonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::B);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(CHarmonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::C);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(DHarmonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::D);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(EHarmonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::E);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(FHarmonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::F);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(GHarmonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::G);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(AsBfHarmonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::AsBf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(CsDfHarmonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::CsDf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(DsEfHarmonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::DsEf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(FsGfHarmonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::FsGf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(GsAfHarmonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(Music::Position::ChromaticScalePosition::GsAf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
	};
}

