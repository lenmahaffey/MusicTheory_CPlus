#pragma once
#include "CppUnitTest.h"
#include "../src/Scale.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Scale_Test
{
	Music::Position::Step pattern[7] = {Music::Position::Step::Whole,
										Music::Position::Step::Whole,
										Music::Position::Step::Whole,
										Music::Position::Step::Half,
										Music::Position::Step::Whole,
										Music::Position::Step::Whole,
										Music::Position::Step::Whole };

	TEST_CLASS(ConstructorWithPosition_Test)
	{

		TEST_METHOD(A_ConstructorWithPosition_Test)
		{
			string expectedString = "A B CsDf D E FsGf GsAf";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::A;

			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::A, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			//Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(AsBf_ConstructorFromPosition_Test)
		{
			Scale AsBf = Scale(Music::Position::ChromaticScalePosition::AsBf, pattern, true);
			string expectedString = "AsBf C D DsEf F G A";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::AsBf;

			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::AsBf, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(B_ConstructorFromPosition_Test)
		{
			Scale B = Scale(Music::Position::ChromaticScalePosition::B, pattern, true);
			string expectedString = "B CsDf DsEf E FsGf GsAf AsBf";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::B;

			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::B, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(C_ConstructorWithPosition_Test)
		{
			Scale C = Scale(Music::Position::ChromaticScalePosition::C, pattern, true);
			string expectedString = "C D E F G A B";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::C;

			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::C, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CsDf_ConstructorWithPosition_Test)
		{
			Scale CsDf = Scale(Music::Position::ChromaticScalePosition::CsDf, pattern, true);
			string expectedString = "CsDf DsEf F FsGf GsAf AsBf C";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::CsDf;

			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::CsDf, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(D_ConstructorWithPosition_Test)
		{
			Scale D = Scale(Music::Position::ChromaticScalePosition::D, pattern, true);
			string expectedString = "D E FsGf G A B CsDf";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::D;

			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::D, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DsEf_ConstructorWithPosition_Test)
		{
			Scale DsEf = Scale(Music::Position::ChromaticScalePosition::DsEf, pattern, true);
			string expectedString = "DsEf F G GsAf AsBf C D";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::DsEf;

			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::DsEf, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(E_ConstructorWithPosition_Test)
		{
			Scale E = Scale(Music::Position::ChromaticScalePosition::E, pattern, true);
			string expectedString = "E FsGf GsAf A B CsDf DsEf";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::E;

			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::E, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(F_ConstructorWithPosition_Test)
		{
			Scale F = Scale(Music::Position::ChromaticScalePosition::F, pattern, true);
			string expectedString = "F G A AsBf C D E";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::F;

			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::F, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FsGf_ConstructorWithPosition_Test)
		{
			Scale FsGf = Scale(Music::Position::ChromaticScalePosition::FsGf, pattern, true);
			string expectedString = "FsGf GsAf AsBf B CsDf DsEf F";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::FsGf;

			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::FsGf, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(G_ConstructorWithPosition_Test)
		{
			string expectedString = "G A B C D E FsGf";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::G, pattern, true);
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::G;

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GsAf_ConstructorWithPosition_Test)
		{
			string expectedString = "GsAf AsBf C CsDf DsEf F G";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::GsAf;

			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::GsAf, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
	};
	TEST_CLASS(ConstructorWithInt_Test)
	{
		TEST_METHOD(A_ConstructorWithInt_Test)
		{
			string expectedString = "A B CsDf D E FsGf GsAf";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::A;

			Scale scaleToTest = Scale(1, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(AsBf_ConstructorFromInt_Test)
		{
			string expectedString = "AsBf C D DsEf F G A";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::AsBf;

			Scale scaleToTest = Scale(2, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(B_ConstructorFromInt_Test)
		{
			string expectedString = "B CsDf DsEf E FsGf GsAf AsBf";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::B;

			Scale scaleToTest = Scale(3, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(C_ConstructorWithInt_Test)
		{
			string expectedString = "C D E F G A B";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::C;

			Scale scaleToTest = Scale(4, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CsDf_ConstructorWithInt_Test)
		{
			string expectedString = "CsDf DsEf F FsGf GsAf AsBf C";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::CsDf;

			Scale scaleToTest = Scale(5, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(D_ConstructorWithInt_Test)
		{
			string expectedString = "D E FsGf G A B CsDf";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::D;

			Scale scaleToTest = Scale(6, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DsEf_ConstructorWithInt_Test)
		{
			string expectedString = "DsEf F G GsAf AsBf C D";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::DsEf;

			Scale scaleToTest = Scale(7, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(E_ConstructorWithInt_Test)
		{
			string expectedString = "E FsGf GsAf A B CsDf DsEf";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::E;

			Scale scaleToTest = Scale(8, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(F_ConstructorWithInt_Test)
		{
			string expectedString = "F G A AsBf C D E";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::F;

			Scale scaleToTest = Scale(9, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FsGf_ConstructorWithInt_Test)
		{
			string expectedString = "FsGf GsAf AsBf B CsDf DsEf F";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::FsGf;

			Scale scaleToTest = Scale(10, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(G_ConstructorWithInt_Test)
		{
			string expectedString = "G A B C D E FsGf";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::G;

			Scale scaleToTest = Scale(11, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GsAf_ConstructorWithInt_Test)
		{
			string expectedString = "GsAf AsBf C CsDf DsEf F G";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::GsAf;

			Scale scaleToTest = Scale(12, pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
	};
	TEST_CLASS(ConstructorWithString_Test)
	{
		TEST_METHOD(A_ConstructorWithString_Test)
		{
			string expectedString = "A B CsDf D E FsGf GsAf";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::A;

			Scale scaleToTest = Scale("A", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(AsBf_ConstructorFromString_Test)
		{
			string expectedString = "AsBf C D DsEf F G A";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::AsBf;

			Scale scaleToTest = Scale("AsBf", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(B_ConstructorFromString_Test)
		{
			string expectedString = "B CsDf DsEf E FsGf GsAf AsBf";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::B;

			Scale scaleToTest = Scale("B", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(C_ConstructorWithString_Test)
		{
			string expectedString = "C D E F G A B";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::C;

			Scale scaleToTest = Scale("C", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CsDf_ConstructorWithString_Test)
		{
			string expectedString = "CsDf DsEf F FsGf GsAf AsBf C";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::CsDf;

			Scale scaleToTest = Scale("CsDf", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(D_ConstructorWithString_Test)
		{
			string expectedString = "D E FsGf G A B CsDf";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::D;

			Scale scaleToTest = Scale("D", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DsEf_ConstructorWithString_Test)
		{
			string expectedString = "DsEf F G GsAf AsBf C D";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::DsEf;

			Scale scaleToTest = Scale("DsEf", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(E_ConstructorWithString_Test)
		{
			string expectedString = "E FsGf GsAf A B CsDf DsEf";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::E;

			Scale scaleToTest = Scale("E", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(F_ConstructorWithString_Test)
		{
			string expectedString = "F G A AsBf C D E";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::F;

			Scale scaleToTest = Scale("F", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FsGf_ConstructorWithString_Test)
		{
			string expectedString = "FsGf GsAf AsBf B CsDf DsEf F";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::FsGf;

			Scale scaleToTest = Scale("FsGf", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(G_ConstructorWithString_Test)
		{
			string expectedString = "G A B C D E FsGf";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::G;

			Scale scaleToTest = Scale("G", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GsAf_ConstructorWithString_Test)
		{
			string expectedString = "GsAf AsBf C CsDf DsEf F G";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::GsAf;

			Scale scaleToTest = Scale("GsAf", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}
	};
	TEST_CLASS(isMajorOrMinor_Test)
	{
		TEST_METHOD(isMajor_Test)
		{
			string expectedString = "Major";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::A, pattern, true);
			Assert::AreEqual(expectedString, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(isMinor_Test)
		{
			string expectedString = "Minor";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::A, pattern, false);
			Assert::AreEqual(expectedString, scaleToTest.isMajorOrMinor());
		}
	};
	TEST_CLASS(Operator_Test)
	{
		TEST_METHOD(assignmentWithScale_Test)
		{
			Music::Scale testBScale = Music::Scale(Music::Position::ChromaticScalePosition::B, pattern, true);
			Music::Scale testCScale = Music::Scale(Music::Position::ChromaticScalePosition::C, pattern, true);
			//string expectedBScaleString = "B CsDf DsEf E FsGf GsAf AsBf";
			string expectedBScaleString = "C D E F G A B";
			string expectedCScaleString = "C D E F G A B";
			Music::Position expectedBScalePosition = Music::Position::ChromaticScalePosition::C;
			Music::Position expectedCScalePosition = Music::Position::ChromaticScalePosition::C;

			testBScale = testCScale;

			Assert::AreEqual((int)expectedBScalePosition.GetChromaticScalePosition(), (int)testBScale.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedBScaleString, testBScale.getScaleAsString());
			Assert::AreEqual((int)expectedCScalePosition.GetChromaticScalePosition(), (int)testCScale.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedCScaleString, testCScale.getScaleAsString());
		}
		TEST_METHOD(assignemntWithPosition_test)
		{
			Music::Scale testBScale = Music::Scale(Music::Position::ChromaticScalePosition::B, pattern, true);
			Music::Scale testCScale = Music::Scale(Music::Position::ChromaticScalePosition::C, pattern, true);
			string expectedBScaleString = "C D E F G A B";
			string expectedCScaleString = "B CsDf DsEf E FsGf GsAf AsBf";
			Music::Position expectedBScalePosition = Music::Position::ChromaticScalePosition::C;
			Music::Position expectedCScalePosition = Music::Position::ChromaticScalePosition::B;

			testBScale = Music::Position("C");
			testCScale = Music::Position("B");
			Assert::AreEqual((int)expectedBScalePosition.GetChromaticScalePosition(), (int)testBScale.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedBScaleString, testBScale.getScaleAsString());
			Assert::AreEqual((int)expectedCScalePosition.GetChromaticScalePosition(), (int)testCScale.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedCScaleString, testCScale.getScaleAsString());
		}
		TEST_METHOD(assignemntWithInt_test)
		{
			Music::Scale testBScale = Music::Scale(Music::Position::ChromaticScalePosition::B, pattern, true);
			Music::Scale testCScale = Music::Scale(Music::Position::ChromaticScalePosition::C, pattern, true);
			string expectedBScaleString = "C D E F G A B";
			string expectedCScaleString = "B CsDf DsEf E FsGf GsAf AsBf";
			Music::Position expectedBScalePosition = Music::Position::ChromaticScalePosition::C;
			Music::Position expectedCScalePosition = Music::Position::ChromaticScalePosition::B;

			testBScale = 4;
			testCScale = 3;
			Assert::AreEqual((int)expectedBScalePosition.GetChromaticScalePosition(), (int)testBScale.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedBScaleString, testBScale.getScaleAsString());
			Assert::AreEqual((int)expectedCScalePosition.GetChromaticScalePosition(), (int)testCScale.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedCScaleString, testCScale.getScaleAsString());
		}
		TEST_METHOD(assignemntWithString_test)
		{
			Music::Scale testBScale = Music::Scale(Music::Position::ChromaticScalePosition::B, pattern, true);
			Music::Scale testCScale = Music::Scale(Music::Position::ChromaticScalePosition::C, pattern, true);
			string expectedBScaleString = "C D E F G A B";
			string expectedCScaleString = "B CsDf DsEf E FsGf GsAf AsBf";
			Music::Position expectedBScalePosition = Music::Position::ChromaticScalePosition::C;
			Music::Position expectedCScalePosition = Music::Position::ChromaticScalePosition::B;

			testBScale = "C";
			testCScale = "B";
			Assert::AreEqual((int)expectedBScalePosition.GetChromaticScalePosition(), (int)testBScale.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedBScaleString, testBScale.getScaleAsString());
			Assert::AreEqual((int)expectedCScalePosition.GetChromaticScalePosition(), (int)testCScale.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedCScaleString, testCScale.getScaleAsString());
		}
		TEST_METHOD(preIncrement_Test)
		{
			Scale B = Scale("B", pattern, true);
			Scale during;
			Scale expectedBefore = Scale("B", pattern, true);
			Scale expectedDuring = Scale("C", pattern, true);
			Scale expectedAfter = Scale("C", pattern, true);

			Assert::AreEqual((int)expectedBefore.GetPosition().GetChromaticScalePosition(), (int)B.GetPosition().GetChromaticScalePosition());
			during = ++B;
			Assert::AreEqual((int)expectedAfter.GetPosition().GetChromaticScalePosition(), (int)during.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual((int)expectedAfter.GetPosition().GetChromaticScalePosition(), (int)B.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(postIncrement_Test)
		{
			Scale B("B", pattern, true);
			Scale during;
			Scale expectedBefore = Scale("B", pattern, true);
			Scale expectedDuring = Scale("B", pattern, true);
			Scale expectedAfter = Scale("C", pattern, true);

			Assert::AreEqual((int)expectedBefore.GetPosition().GetChromaticScalePosition(), (int)B.GetPosition().GetChromaticScalePosition());
			during = B++;
			Assert::AreEqual((int)expectedBefore.GetPosition().GetChromaticScalePosition(), (int)during.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual((int)expectedAfter.GetPosition().GetChromaticScalePosition(), (int)B.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(preDeincrement_Test)
		{
			Scale C("C", pattern, true);
			Scale during;
			Scale expectedBefore = Scale("C", pattern, true);
			Scale expectedDuring = Scale("B", pattern, true);
			Scale expectedAfter = Scale("B", pattern, true);

			Assert::AreEqual((int)expectedBefore.GetPosition().GetChromaticScalePosition(), (int)C.GetPosition().GetChromaticScalePosition());
			during = --C;
			Assert::AreEqual((int)expectedAfter.GetPosition().GetChromaticScalePosition(), (int)during.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual((int)expectedAfter.GetPosition().GetChromaticScalePosition(), (int)C.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(postDeIncrement_Test)
		{
			Scale C("C", pattern, true);
			Scale during;
			Scale expectedBefore = Scale("C", pattern, true);
			Scale expectedDuring = Scale("C", pattern, true);
			Scale expectedAfter = Scale("B", pattern, true);

			Assert::AreEqual((int)expectedBefore.GetPosition().GetChromaticScalePosition(), (int)C.GetPosition().GetChromaticScalePosition());
			during = C--;
			Assert::AreEqual((int)expectedBefore.GetPosition().GetChromaticScalePosition(), (int)during.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual((int)expectedAfter.GetPosition().GetChromaticScalePosition(), (int)C.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(isEqualOperator_Test)
		{
			Scale A("A", pattern, true);
			Scale B1("B", pattern, true);
			Scale B2("B", pattern, true);
			Scale C("C", pattern, true);

			Assert::IsFalse(A == B1);
			Assert::IsTrue(B1 == B2);
			Assert::IsTrue(B2 == B1);
			Assert::IsTrue(A == A);
			Assert::IsTrue(B1 == B2);
			Assert::IsFalse(B2 == C);
		}
		TEST_METHOD(isNotEqualOperator_Test)
		{
			Scale A("A", pattern, true);
			Scale B1("B", pattern, true);
			Scale B2("B", pattern, true);
			Scale C("C", pattern, true);

			Assert::IsTrue(A != B1);
			Assert::IsFalse(B1 != B2);
			Assert::IsFalse(B2 != B1);
			Assert::IsFalse(A != A);
			Assert::IsFalse(B1 != B2);
			Assert::IsTrue(B2 != C);
		}
		TEST_METHOD(isGreaterThan_Test)
		{
			Scale A("A", pattern, true);
			Scale B("B", pattern, true);
			Scale C("C", pattern, true);

			Assert::IsTrue(C > B);
			Assert::IsTrue(B > A);
			Assert::IsFalse(B > C);
			Assert::IsFalse(A > B);
		}
		TEST_METHOD(isGreaterThanOrEqual_Test)
		{
			Scale A("A", pattern, true);
			Scale B1("B", pattern, true);
			Scale B2("B", pattern, true);
			Scale C("C", pattern, true);

			Assert::IsTrue(C >= B2);
			Assert::IsTrue(B2 >= B1);
			Assert::IsTrue(B1 >= A);
			Assert::IsFalse(B2 >= C);
			Assert::IsTrue(B1 >= B2);
			Assert::IsFalse(A >= B1);
		}
		TEST_METHOD(isLessThan_Test)
		{
			Scale A("A", pattern, true);
			Scale B("B", pattern, true);
			Scale C("C", pattern, true);

			Assert::IsTrue(A < B);
			Assert::IsFalse(C < B);
		}
		TEST_METHOD(isLessThanOrEqualTo_Test)
		{
			Scale A("A", pattern, true);
			Scale B1("B", pattern, true);
			Scale B2("B", pattern, true);
			Scale C("C", pattern, true);

			Assert::IsTrue(A <= B1);
			Assert::IsTrue(B1 <= B2);
			Assert::IsTrue(B2 <= C);
			Assert::IsFalse(C <= B2);
			Assert::IsTrue(B2 <= B1);
			Assert::IsFalse(B1 <= A);
		};
	};
	TEST_CLASS(ResolveScale_Test)
	{
		TEST_METHOD(A_ResolveString_Test)
		{
			string expectedString = "A B Cs D E Fs Gs";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::A;

			Scale scaleToTest = Scale("A", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getResolvedScaleAsString());
		}
		TEST_METHOD(As_ResolveScale_Test)
		{
			string expectedString = "Bf C D Ef F G A";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::AsBf;

			Scale scaleToTest = Scale("As", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getResolvedScaleAsString());
		}
		TEST_METHOD(B_ResolveScale_Test)
		{
			string expectedString = "B Cs Ds E Fs Gs As";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::B;

			Scale scaleToTest = Scale("B", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getResolvedScaleAsString());
		}
		TEST_METHOD(C_ResolveString_Test)
		{
			string expectedString = "C D E F G A B";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::C;

			Scale scaleToTest = Scale("C", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getResolvedScaleAsString());
		}
		TEST_METHOD(Cs_ResolveString_Test)
		{
			string expectedString = "Df Ef F Gf Af Bf C";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::CsDf;

			Scale scaleToTest = Scale("Cs", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getResolvedScaleAsString());
		}
		TEST_METHOD(D_ResolveString_Test)
		{
			string expectedString = "D E Fs G A B Cs";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::D;

			Scale scaleToTest = Scale("D", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getResolvedScaleAsString());
		}
		TEST_METHOD(Ds_ResolveString_Test)
		{
			string expectedString = "Ef F G Af Bf C D";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::DsEf;

			Scale scaleToTest = Scale("Ds", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getResolvedScaleAsString());
		}
		TEST_METHOD(E_ResolveString_Test)
		{
			string expectedString = "E Fs Gs A B Cs Ds";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::E;

			Scale scaleToTest = Scale("E", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getResolvedScaleAsString());
		}
		TEST_METHOD(F_ResolveString_Test)
		{
			string expectedString = "F G A Bf C D E";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::F;

			Scale scaleToTest = Scale("F", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getResolvedScaleAsString());
		}
		TEST_METHOD(Fs_ResolveString_Test)
		{
			string expectedString = "Fs Gs As B Cs Ds F";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::FsGf;

			Scale scaleToTest = Scale("Fs", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getResolvedScaleAsString());
		}
		TEST_METHOD(G_ResolveString_Test)
		{
			string expectedString = "G A B C D E Fs";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::G;

			Scale scaleToTest = Scale("G", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getResolvedScaleAsString());
		}
		TEST_METHOD(Gs_ResolveString_Test)
		{
			string expectedString = "Af Bf C Df Ef F G";
			Music::Position::ChromaticScalePosition expectedPosition = Music::Position::ChromaticScalePosition::GsAf;

			Scale scaleToTest = Scale("Gs", pattern, true);

			Assert::AreEqual((int)expectedPosition, (int)scaleToTest.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual(expectedString, scaleToTest.getResolvedScaleAsString());
		}
	};
}
