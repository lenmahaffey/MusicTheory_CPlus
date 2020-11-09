#pragma once
#include "CppUnitTest.h"
#include "../src/scales/MelodicMinorScale.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace MelodicMinorScale_Test
{
	TEST_CLASS(getScaleAsString_Test)
	{
		TEST_METHOD(AMelodicMinor_getScaleAsString_Test)
		{
			string expectedString = "A B C D E FsGf GsAf";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::A);
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(AsBfMelodicMinor_getScaleAsString_Test)
		{
			string expected = "AsBf C CsDf DsEf F G A";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::AsBf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(BMelodicMinor_getScaleAsString_Test)
		{
			string expected = "B CsDf D E FsGf GsAf AsBf";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::B);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CMelodicMinor_getScaleAsString_Test)
		{
			string expected = "C D DsEf F G A B";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::C);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CsDfMelodicMinor_getScaleAsString_Test)
		{
			string expected = "CsDf DsEf E FsGf GsAf AsBf C";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::CsDf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DMelodicMinor_getScaleAsString_Test)
		{
			string expected = "D E F G A B CsDf";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::D);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DsEfMelodicMinor_getScaleAsString_Test)
		{
			string expected = "DsEf F FsGf GsAf AsBf C D";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::DsEf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(EMelodicMinor_getScaleAsString_Test)
		{
			string expected = "E FsGf G A B CsDf DsEf";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::E);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FMelodicMinor_getScaleAsString_Test)
		{
			string expected = "F G GsAf AsBf C D E";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::F);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FsGfMelodicMinor_getScaleAsString_Test)
		{
			string expected = "FsGf GsAf A B CsDf DsEf F";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::FsGf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GMelodicMinor_getScaleAsString_Test)
		{
			string expected = "G A AsBf C D E FsGf";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::G);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GsAfMelodicMinor_getScaleAsString_Test)
		{
			string expected = "GsAf AsBf B CsDf DsEf F G";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::GsAf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};

	TEST_CLASS(isMajorOrMinor_Test)
	{
		TEST_METHOD(AMelodicMinor_isMajorOrMinor_Test)
		{
			string expectedString = "Minor";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::A);
			Assert::AreEqual(expectedString, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(AsBfMelodicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::AsBf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(BMelodicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::B);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(CMelodicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::C);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(CsDfMelodicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::CsDf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(DMelodicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::D);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(DsEfMelodicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::DsEf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(EMelodicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::E);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(FMelodicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::F);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(FsGfMelodicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::FsGf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(GMelodicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::G);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(GsAfMelodicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			MelodicMinorScale scaleToTest = MelodicMinorScale(Music::Position::ChromaticScalePosition::GsAf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
	};

}