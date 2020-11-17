#pragma once
#include "CppUnitTest.h"
#include "../src/scales/PentatonicMinorScale.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace PentatonicMinorScale_Test
{
	TEST_CLASS(getUnresolvedScaleAsString_Test)
	{
		TEST_METHOD(APentatonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expectedString = "A C D E G";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::A);
			Assert::AreEqual(expectedString, scaleToTest.getUnresolvedScaleAsString());

		}
		TEST_METHOD(AsBfPentatonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "As Cs Ds Es Gs";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::AsBf);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(BPentatonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "B D E Fs A";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::B);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());

		}
		TEST_METHOD(CPentatonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "C Ef F G Bf";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::C);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(CsDfPentatonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "Cs E Fs Gs B";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::CsDf);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(DPentatonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "D F G A C";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::D);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(DsEfPentatonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "Ds Fs Gs As Cs";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::DsEf);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(EPentatonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "E G A B D";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::E);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(FPentatonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "F Af Bf C Ef";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::F);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(FsGfPentatonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "Fs A B Cs E";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::FsGf);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(GPentatonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "G Bf C D F";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::G);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(GsAfPentatonicMinor_getUnresolvedScaleAsString_Test)
		{
			string expected = "Gs B Cs Ds Fs";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::GsAf);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
	};
	TEST_CLASS(getScaleAsString_Test)
	{
		TEST_METHOD(APentatonicMinor_getScaleAsString_Test)
		{
			string expectedString = "A C D E G";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::A);
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());

		}
		TEST_METHOD(AsBfPentatonicMinor_getScaleAsString_Test)
		{
			string expected = "AsBf CsDf DsEf F GsAf";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::AsBf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(BPentatonicMinor_getScaleAsString_Test)
		{
			string expected = "B D E FsGf A";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::B);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());

		}
		TEST_METHOD(CPentatonicMinor_getScaleAsString_Test)
		{
			string expected = "C DsEf F G AsBf";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::C);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CsDfPentatonicMinor_getScaleAsString_Test)
		{
			string expected = "CsDf E FsGf GsAf B";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::CsDf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DPentatonicMinor_getScaleAsString_Test)
		{
			string expected = "D F G A C";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::D);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DsEfPentatonicMinor_getScaleAsString_Test)
		{
			string expected = "DsEf FsGf GsAf AsBf CsDf";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::DsEf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(EPentatonicMinor_getScaleAsString_Test)
		{
			string expected = "E G A B D";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::E);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FPentatonicMinor_getScaleAsString_Test)
		{
			string expected = "F GsAf AsBf C DsEf";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::F);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FsGfPentatonicMinor_getScaleAsString_Test)
		{
			string expected = "FsGf A B CsDf E";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::FsGf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GPentatonicMinor_getScaleAsString_Test)
		{
			string expected = "G AsBf C D F";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::G);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GsAfPentatonicMinor_getScaleAsString_Test)
		{
			string expected = "GsAf B CsDf DsEf FsGf";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::GsAf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
	TEST_CLASS(isMajorOrMinor_Test)
	{
		TEST_METHOD(APentatonicMinor_isMajorOrMinor_Test)
		{
			string expectedString = "Minor";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::A);
			Assert::AreEqual(expectedString, scaleToTest.isMajorOrMinor());

		}
		TEST_METHOD(AsBfPentatonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::AsBf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(BPentatonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::B);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());

		}
		TEST_METHOD(CPentatonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::C);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(CsDfPentatonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::CsDf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(DPentatonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::D);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(DsEfPentatonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::DsEf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(EPentatonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::E);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(FPentatonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::F);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(FsGfPentatonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::FsGf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(GPentatonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::G);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(GsAfPentatonicMinor_isMajorOrMinor_Test)
		{
			string expected = "Minor";
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(Music::Position::ChromaticScalePosition::GsAf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
	};
}