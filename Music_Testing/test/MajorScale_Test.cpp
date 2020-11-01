#pragma once
#include "../../Music_Testing/pch.cpp"
#include "CppUnitTest.h"
#include "../../Music/src/scales/MajorScale.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace MajorScale_Test
{
	TEST_CLASS(getScaleAsString_Test)
	{
		TEST_METHOD(AMajor_getScaleAsString_Test)
		{
			string expected = "A B CsDf D E FsGf GsAf";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::A);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());

		}
		TEST_METHOD(AsBfMajor_getScaleAsString_Test)
		{
			string expected = "AsBf C D DsEf F G A";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::AsBf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(BMajor_getScaleAsString_Test)
		{
			string expected = "B CsDf DsEf E FsGf GsAf AsBf";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::B);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());

		}
		TEST_METHOD(CMajor_getScaleAsString_Test)
		{
			string expected = "C D E F G A B";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::C);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CsDfMajor_getScaleAsString_Test)
		{
			string expected = "CsDf DsEf F FsGf GsAf AsBf C";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::CsDf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DMajor_getScaleAsString_Test)
		{
			string expected = "D E FsGf G A B CsDf";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::D);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DsEfMajor_getScaleAsString_Test)
		{
			string expected = "DsEf F G GsAf AsBf C D";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::DsEf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(EMajor_getScaleAsString_Test)
		{
			string expected = "E FsGf GsAf A B CsDf DsEf";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::E);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FMajor_getScaleAsString_Test)
		{
			string expected = "F G A AsBf C D E";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::F);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FsGfMajor_getScaleAsString_Test)
		{
			string expected = "FsGf GsAf AsBf B CsDf DsEf F";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::FsGf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GMajor_getScaleAsString_Test)
		{
			string expected = "G A B C D E FsGf";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::G);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GsAfMajor_getScaleAsString_Test)
		{
			string expected = "GsAf AsBf C CsDf DsEf F G";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::GsAf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(isMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::A);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
	};
	TEST_CLASS(isMajorOrMinor_Test)
	{
		TEST_METHOD(AMajor_isMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::A);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(BMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::B);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(CMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::C);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(DMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::D);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(EMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::E);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(FMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::F);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(GMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::G);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(AsBfMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::AsBf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(CsDfMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::CsDf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(DsEfMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::DsEf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(FsGfMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::FsGf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(GsAfMajor_IsMajorOrMinor_Test)
		{
			string expected = "Major";
			MajorScale scaleToTest = MajorScale(ChromaticScalePosition::GsAf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
	};
}
