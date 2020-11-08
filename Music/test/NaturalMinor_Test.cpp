#pragma once
#include "../../Music_Testing/pch.h"
#include "CppUnitTest.h"
#include "../../Music/src/scales/NaturalMinorScale.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace NaturalMinorScale_Test
{
	TEST_CLASS(getScaleAsString_Test)
	{
		TEST_METHOD(ANaturalMinor_getScaleAsString_Test)
		{
			string expectedString = "A B C D E F G";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::A);
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(BNaturalMinor_getScaleAsString_Test)
		{
			string expected = "B CsDf D E FsGf G A";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::B);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());

		}
		TEST_METHOD(CNaturalMinor_getScaleAsString_Test)
		{
			string expected = "C D DsEf F G GsAf AsBf";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::C);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DNaturalMinor_getScaleAsString_Test)
		{
			string expected = "D E F G A AsBf C";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::D);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(ENaturalMinor_getScaleAsString_Test)
		{
			string expected = "E FsGf G A B C D";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::E);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FNaturalMinor_getScaleAsString_Test)
		{
			string expected = "F G GsAf AsBf C CsDf DsEf";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::F);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GNaturalMinor_getScaleAsString_Test)
		{
			string expected = "G A AsBf C D DsEf F";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::G);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(AsBfNaturalMinor_getScaleAsString_Test)
		{
			string expected = "AsBf C CsDf DsEf F FsGf GsAf";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::AsBf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CsDfNaturalMinor_getScaleAsString_Test)
		{
			string expected = "CsDf DsEf E FsGf GsAf A B";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::CsDf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DsEfNaturalMinor_getScaleAsString_Test)
		{
			string expected = "DsEf F FsGf GsAf AsBf B CsDf";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::DsEf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FsGfNaturalMinor_getScaleAsString_Test)
		{
			string expected = "FsGf GsAf A B CsDf D E";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::FsGf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GsAfNaturalMinor_getScaleAsString_Test)
		{
			string expected = "GsAf AsBf B CsDf DsEf E FsGf";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::GsAf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
	TEST_CLASS(isMajorOrMinor_Test)
	{
		TEST_METHOD(ANaturalMinor_getScaleAsString_Test)
		{
			string expectedString = "Minor";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::A);
			Assert::AreEqual(expectedString, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(BNaturalMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::B);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());

		}
		TEST_METHOD(CNaturalMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::C);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(DNaturalMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::D);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(ENaturalMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::E);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(FNaturalMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::F);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(GNaturalMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::G);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(AsBfNaturalMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::AsBf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(CsDfNaturalMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::CsDf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(DsEfNaturalMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::DsEf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(FsGfNaturalMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::FsGf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(GsAfNaturalMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			NaturalMinorScale scaleToTest = NaturalMinorScale(Music::Position::ChromaticScalePosition::GsAf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
	};
}