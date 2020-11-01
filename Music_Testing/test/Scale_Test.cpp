#pragma once
#include "../../Music_Testing/pch.h"
#include "CppUnitTest.h"
#include "../../Music/src/Scale.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Scale_Test
{
	TEST_CLASS(ConstructorWithPosition_Test)
	{
		TEST_METHOD(A_ConstructorWithPosition_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale A = Scale(ChromaticScalePosition::A, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.getPosition());
		}
		TEST_METHOD(AsBf_ConstructorFromPosition_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale AsBf = Scale(ChromaticScalePosition::AsBf, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.getPosition());
		}
		TEST_METHOD(B_ConstructorFromPosition_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale B = Scale(ChromaticScalePosition::B, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.getPosition());
		}
		TEST_METHOD(C_ConstructorWithPosition_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale C = Scale(ChromaticScalePosition::C, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.getPosition());
		}
		TEST_METHOD(CsDf_ConstructorWithPosition_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale CsDf = Scale(ChromaticScalePosition::CsDf, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.getPosition());
		}
		TEST_METHOD(D_ConstructorWithPosition_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale D = Scale(ChromaticScalePosition::D, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.getPosition());
		}
		TEST_METHOD(DsEf_ConstructorWithPosition_Test)
		{
			Music::Step pattern[7] =
			{	 Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale DsEf = Scale(ChromaticScalePosition::DsEf, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.getPosition());
		}
		TEST_METHOD(E_ConstructorWithPosition_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale E = Scale(ChromaticScalePosition::E, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.getPosition());
		}
		TEST_METHOD(F_ConstructorWithPosition_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale F = Scale(ChromaticScalePosition::F, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.getPosition());
		}
		TEST_METHOD(FsGf_ConstructorWithPosition_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale FsGf = Scale(ChromaticScalePosition::FsGf, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.getPosition());
		}
		TEST_METHOD(G_ConstructorWithPosition_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale G = Scale(ChromaticScalePosition::G, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.getPosition());
		}
		TEST_METHOD(GsAf_ConstructorWithPosition_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale GsAf = Scale(ChromaticScalePosition::GsAf, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.getPosition());
		}
	};
	TEST_CLASS(ConstructorWithInt_Test)
	{
		TEST_METHOD(A_ConstructorWithInt_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale A = Scale(1, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.getPosition());
		}
		TEST_METHOD(AsBf_ConstructorFromPosition_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale AsBf = Scale(2, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.getPosition());
		}
		TEST_METHOD(B_ConstructorFromPosition_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale B = Scale(3, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.getPosition());
		}
		TEST_METHOD(C_ConstructorWithInt_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale C = Scale(4, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.getPosition());
		}
		TEST_METHOD(CsDf_ConstructorWithInt_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale CsDf = Scale(5, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.getPosition());
		}
		TEST_METHOD(D_ConstructorWithInt_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale D = Scale(6, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.getPosition());
		}
		TEST_METHOD(DsEf_ConstructorWithInt_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale DsEf = Scale(7, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.getPosition());
		}
		TEST_METHOD(E_ConstructorWithInt_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale E = Scale(8, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.getPosition());
		}
		TEST_METHOD(F_ConstructorWithInt_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale F = Scale(9, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.getPosition());
		}
		TEST_METHOD(FsGf_ConstructorWithInt_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale FsGf = Scale(10, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.getPosition());
		}
		TEST_METHOD(G_ConstructorWithInt_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale G = Scale(11, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.getPosition());
		}
		TEST_METHOD(GsAf_ConstructorWithInt_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale GsAf = Scale(12, pattern, true);
			Music::ChromaticScalePosition expected = Music::ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.getPosition());
		}
	};
	TEST_CLASS(ConstructorWithString_Test)
	{
		TEST_METHOD(A_ConstructorWithString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale A = Scale(ChromaticScalePosition::A, pattern, true);
			std::string expected = "A";
			Assert::AreEqual(expected, A.getNameAsString());
		}
		TEST_METHOD(AsBf_ConstructorFromPosition_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale AsBf = Scale(ChromaticScalePosition::AsBf, pattern, true);
			std::string expected = "AsBf";
			Assert::AreEqual(expected, AsBf.getNameAsString());
		}
		TEST_METHOD(B_ConstructorFromPosition_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale B = Scale(ChromaticScalePosition::B, pattern, true);
			std::string expected = "B";
			Assert::AreEqual(expected, B.getNameAsString());
		}
		TEST_METHOD(C_ConstructorWithString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE
			};
			Scale C = Scale(ChromaticScalePosition::C, pattern, true);
			std::string expected = "C";
			Assert::AreEqual(expected, C.getNameAsString());
		}
		TEST_METHOD(CsDf_ConstructorWithString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale CsDf = Scale(ChromaticScalePosition::CsDf, pattern, true);
			std::string expected = "CsDf";
			Assert::AreEqual(expected, CsDf.getNameAsString());
		}
		TEST_METHOD(D_ConstructorWithString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale D = Scale(ChromaticScalePosition::D, pattern, true);
			std::string expected = "D";
			Assert::AreEqual(expected, D.getNameAsString());
		}
		TEST_METHOD(DsEf_ConstructorWithString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale DsEf = Scale(ChromaticScalePosition::DsEf, pattern, true);
			std::string expected = "DsEf";
			Assert::AreEqual(expected, DsEf.getNameAsString());
		}
		TEST_METHOD(E_ConstructorWithString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale E = Scale(ChromaticScalePosition::E, pattern, true);
			std::string expected = "E";
			Assert::AreEqual(expected, E.getNameAsString());
		}
		TEST_METHOD(F_ConstructorWithString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale F = Scale(ChromaticScalePosition::F, pattern, true);
			std::string expected = "F";
			Assert::AreEqual(expected, F.getNameAsString());
		}
		TEST_METHOD(FsGf_ConstructorWithString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale FsGf = Scale(ChromaticScalePosition::FsGf, pattern, true);
			std::string expected = "FsGf";
			Assert::AreEqual(expected, FsGf.getNameAsString());
		}
		TEST_METHOD(G_ConstructorWithString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			Scale G = Scale(ChromaticScalePosition::G, pattern, true);
			std::string expected = "G";
			Assert::AreEqual(expected, G.getNameAsString());
		}
		TEST_METHOD(GsAf_ConstructorWithString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE	};
			Scale GsAf = Scale(ChromaticScalePosition::GsAf, pattern, true);
			std::string expected = "GsAf";
			Assert::AreEqual(expected, GsAf.getNameAsString());
		}
	};
	TEST_CLASS(getScaleAsString_Test){
		TEST_METHOD(AMajor_getScaleAsString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole	};
			string expectedString = "A B CsDf D E FsGf GsAf";
			Scale scaleToTest = Scale(ChromaticScalePosition::A, pattern, true);
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());

		}
		TEST_METHOD(AsBfMajor_getScaleAsString_Test)
		{
			Music::Step pattern[7] =
			{ Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole };
			string expected = "AsBf C D DsEf F G A";
			Scale scaleToTest = Scale(ChromaticScalePosition::AsBf, pattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(BMajor_getScaleAsString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole	};
			string expected = "B CsDf DsEf E FsGf GsAf AsBf";
			Scale scaleToTest = Scale(ChromaticScalePosition::B, pattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CMajor_getScaleAsString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole	};
			string expected = "C D E F G A B";
			Scale scaleToTest = Scale(ChromaticScalePosition::C, pattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CsDfMajor_getScaleAsString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole };
			string expected = "CsDf DsEf F FsGf GsAf AsBf C";
			Scale scaleToTest = Scale(ChromaticScalePosition::CsDf, pattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DMajor_getScaleAsString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole	};
			string expected = "D E FsGf G A B CsDf";
			Scale scaleToTest = Scale(ChromaticScalePosition::D, pattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DsEfMajor_getScaleAsString_Test)
		{
			Music::Step pattern[7] =
			{ Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole };
			string expected = "DsEf F G GsAf AsBf C D";
			Scale scaleToTest = Scale(ChromaticScalePosition::DsEf, pattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(EMajor_getScaleAsString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole	};
			string expected = "E FsGf GsAf A B CsDf DsEf";
			Scale scaleToTest = Scale(ChromaticScalePosition::E, pattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FMajor_getScaleAsString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole	};
			string expected = "F G A AsBf C D E";
			Scale scaleToTest = Scale(ChromaticScalePosition::F, pattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FsGfMajor_getScaleAsString_Test)
		{
			Music::Step pattern[7] =
			{ Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole };
			string expected = "FsGf GsAf AsBf B CsDf DsEf F";
			Scale scaleToTest = Scale(ChromaticScalePosition::FsGf, pattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GMajor_getScaleAsString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole	};
			string expected = "G A B C D E FsGf";
			Scale scaleToTest = Scale(ChromaticScalePosition::G, pattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GsAfMajor_getScaleAsString_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole };
			string expected = "GsAf AsBf C CsDf DsEf F G";
			Scale scaleToTest = Scale(ChromaticScalePosition::GsAf, pattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
	TEST_CLASS(isMajorOrMinor_Test)
	{
		TEST_METHOD(isMajor_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			string expected = "Major";
			Scale scaleToTest = Scale(ChromaticScalePosition::A, pattern, true);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(isMinor_Test)
		{
			Music::Step pattern[7] =
			{	Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE,
				Music::Step::NONE };
			string expected = "Minor";
			Scale scaleToTest = Scale(ChromaticScalePosition::A, pattern, false);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
	};
}
