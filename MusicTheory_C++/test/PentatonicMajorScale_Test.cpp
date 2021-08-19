#pragma once
#include "CppUnitTest.h"
#include "../src/scales/PentatonicMajorScale.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace PentatonicMajorScale_Test
{
	TEST_CLASS(getUnresolvedScaleAsString_Test)
	{
		TEST_METHOD(APentatonicMajor_getUnresolvedScaleAsString_Test)
		{
			string expectedString = "A B CsDf E FsGf";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::A);
			Assert::AreEqual(expectedString, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(AsBfPentatonicMajor_getUnresolvedScaleAsString_Test)
		{
			string expected = "AsBf C D F G";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::AsBf);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(BPentatonicMajor_getUnresolvedScaleAsString_Test)
		{
			string expected = "B CsDf DsEf FsGf GsAf";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::B);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(CPentatonicMajor_getUnresolvedScaleAsString_Test)
		{
			string expected = "C D E G A";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::C);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(CsDfPentatonicMajor_getUnresolvedScaleAsString_Test)
		{
			string expected = "CsDf DsEf F GsAf AsBf";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::CsDf);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(DPentatonicMajor_getUnresolvedScaleAsString_Test)
		{
			string expected = "D E FsGf A B";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::D);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(DsEfPentatonicMajor_getUnresolvedScaleAsString_Test)
		{
			string expected = "DsEf F G AsBf C";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::DsEf);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(EPentatonicMajor_getUnresolvedScaleAsString_Test)
		{
			string expected = "E FsGf GsAf B CsDf";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::E);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(FPentatonicMajor_getUnresolvedScaleAsString_Test)
		{
			string expected = "F G A C D";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::F);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(FsGfPentatonicMajor_getUnresolvedScaleAsString_Test)
		{
			string expected = "FsGf GsAf AsBf CsDf DsEf";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::FsGf);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(GPentatonicMajor_getUnresolvedScaleAsString_Test)
		{
			string expected = "G A B D E";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::G);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
		TEST_METHOD(GsAfPentatonicMajor_getUnresolvedScaleAsString_Test)
		{
			string expected = "GsAf AsBf C DsEf F";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::GsAf);
			Assert::AreEqual(expected, scaleToTest.getUnresolvedScaleAsString());
		}
	};
	TEST_CLASS(getScaleAsString_Test)
	{
		TEST_METHOD(APentatonicMajor_getScaleAsString_Test)
		{
			string expectedString = "A B Cs E Fs";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::A);
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(AsBfPentatonicMajor_getScaleAsString_Test)
		{
			string expected = "Bf C D F G";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::AsBf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(BPentatonicMajor_getScaleAsString_Test)
		{
			string expected = "B Cs Ds Fs Gs";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::B);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CPentatonicMajor_getScaleAsString_Test)
		{
			string expected = "C D E G A";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::C);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CsDfPentatonicMajor_getScaleAsString_Test)
		{
			string expected = "Cs Ds F Gs As";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::CsDf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DPentatonicMajor_getScaleAsString_Test)
		{
			string expected = "D E Fs A B";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::D);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DsEfPentatonicMajor_getScaleAsString_Test)
		{
			string expected = "Ef F G Bf C";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::DsEf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(EPentatonicMajor_getScaleAsString_Test)
		{
			string expected = "E Fs Gs B Cs";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::E);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FPentatonicMajor_getScaleAsString_Test)
		{
			string expected = "F G A C D";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::F);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FsGfPentatonicMajor_getScaleAsString_Test)
		{
			string expected = "Fs Gs As Cs Ds";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::FsGf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GPentatonicMajor_getScaleAsString_Test)
		{
			string expected = "G A B D E";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::G);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GsAfPentatonicMajor_getScaleAsString_Test)
		{
			string expected = "Af Bf C Df F";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::GsAf);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
	TEST_CLASS(isMajorOrMinor_Test)
	{
		TEST_METHOD(APentatonicMajor_isMajorOrMinor_Test)
		{
			string expected = "Major";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::A);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(AsBfPentatonicMajor_isMajorOrMinor_Test)
		{
			string expected = "Major";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::AsBf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(BPentatonicMajor_isMajorOrMinor_Test)
		{
			string expected = "Major";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::B);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(CPentatonicMajor_isMajorOrMinor_Test)
		{
			string expected = "Major";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::C);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(CsDfPentatonicMajor_isMajorOrMinor_Test)
		{
			string expected = "Major";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::CsDf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(DPentatonicMajor_isMajorOrMinor_Test)
		{
			string expected = "Major";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::D);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(DsEfPentatonicMajor_isMajorOrMinor_Test)
		{
			string expected = "Major";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::DsEf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(EPentatonicMajor_isMajorOrMinor_Test)
		{
			string expected = "Major";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::E);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(FPentatonicMajor_isMajorOrMinor_Test)
		{
			string expected = "Major";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::F);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(FsGfPentatonicMajor_isMajorOrMinor_Test)
		{
			string expected = "Major";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::FsGf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(GPentatonicMajor_isMajorOrMinor_Test)
		{
			string expected = "Major";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::G);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(GsAfPentatonicMajor_isMajorOrMinor_Test)
		{
			string expected = "Major";
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(Music::Position::ChromaticScalePosition::GsAf);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
	};
}