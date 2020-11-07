#pragma once
#include "../pch.h"
#include "CppUnitTest.h"
#include "../../Music/src/Scale.cpp"
#include "../../Music/src/ScalePattern.cpp"
//#include "../../Music/src/Position.cpp"
//#include "../../Music/src/Position.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Scale_Test
{
	ScalePattern pattern = ScalePattern();

	TEST_CLASS(ConstructorWithPosition_Test)
	{

		TEST_METHOD(A_ConstructorWithPosition_Test)
		{
			Scale A = Scale(Music::Position::ChromaticScalePosition::A, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.getPosition());
		}
		TEST_METHOD(AsBf_ConstructorFromPosition_Test)
		{
			Scale AsBf = Scale(Music::Position::ChromaticScalePosition::AsBf, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.getPosition());
		}
		TEST_METHOD(B_ConstructorFromPosition_Test)
		{
			Scale B = Scale(Music::Position::ChromaticScalePosition::B, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.getPosition());
		}
		TEST_METHOD(C_ConstructorWithPosition_Test)
		{
			Scale C = Scale(Music::Position::ChromaticScalePosition::C, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.getPosition());
		}
		TEST_METHOD(CsDf_ConstructorWithPosition_Test)
		{
			Scale CsDf = Scale(Music::Position::ChromaticScalePosition::CsDf, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.getPosition());
		}
		TEST_METHOD(D_ConstructorWithPosition_Test)
		{
			Scale D = Scale(Music::Position::ChromaticScalePosition::D, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.getPosition());
		}
		TEST_METHOD(DsEf_ConstructorWithPosition_Test)
		{
			Scale DsEf = Scale(Music::Position::ChromaticScalePosition::DsEf, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.getPosition());
		}
		TEST_METHOD(E_ConstructorWithPosition_Test)
		{
			Scale E = Scale(Music::Position::ChromaticScalePosition::E, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.getPosition());
		}
		TEST_METHOD(F_ConstructorWithPosition_Test)
		{
			Scale F = Scale(Music::Position::ChromaticScalePosition::F, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.getPosition());
		}
		TEST_METHOD(FsGf_ConstructorWithPosition_Test)
		{
			Scale FsGf = Scale(Music::Position::ChromaticScalePosition::FsGf, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.getPosition());
		}
		TEST_METHOD(G_ConstructorWithPosition_Test)
		{
			Scale G = Scale(Music::Position::ChromaticScalePosition::G, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.getPosition());
		}
		TEST_METHOD(GsAf_ConstructorWithPosition_Test)
		{
			Scale GsAf = Scale(Music::Position::ChromaticScalePosition::GsAf, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.getPosition());
		}
	};
	TEST_CLASS(ConstructorWithInt_Test)
	{
		TEST_METHOD(A_ConstructorWithInt_Test)
		{
			Scale A = Scale(1, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.getPosition());
		}
		TEST_METHOD(AsBf_ConstructorFromPosition_Test)
		{
			Scale AsBf = Scale(2, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.getPosition());
		}
		TEST_METHOD(B_ConstructorFromPosition_Test)
		{
			Scale B = Scale(3, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.getPosition());
		}
		TEST_METHOD(C_ConstructorWithInt_Test)
		{
			Scale C = Scale(4, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.getPosition());
		}
		TEST_METHOD(CsDf_ConstructorWithInt_Test)
		{
			Scale CsDf = Scale(5, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.getPosition());
		}
		TEST_METHOD(D_ConstructorWithInt_Test)
		{
			Scale D = Scale(6, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.getPosition());
		}
		TEST_METHOD(DsEf_ConstructorWithInt_Test)
		{
			Scale DsEf = Scale(7, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.getPosition());
		}
		TEST_METHOD(E_ConstructorWithInt_Test)
		{
			Scale E = Scale(8, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.getPosition());
		}
		TEST_METHOD(F_ConstructorWithInt_Test)
		{
			Scale F = Scale(9, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.getPosition());
		}
		TEST_METHOD(FsGf_ConstructorWithInt_Test)
		{
			Scale FsGf = Scale(10, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.getPosition());
		}
		TEST_METHOD(G_ConstructorWithInt_Test)
		{
			Scale G = Scale(11, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.getPosition());
		}
		TEST_METHOD(GsAf_ConstructorWithInt_Test)
		{
			Scale GsAf = Scale(12, pattern.emptyScalePattern, true);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.getPosition());
		}
	};
	TEST_CLASS(ConstructorWithString_Test)
	{
		TEST_METHOD(A_ConstructorWithString_Test)
		{
			Scale A = Scale(Music::Position::ChromaticScalePosition::A, pattern.emptyScalePattern, true);
			std::string expected = "A";
			Assert::AreEqual(expected, A.getNameAsString());
		}
		TEST_METHOD(AsBf_ConstructorFromPosition_Test)
		{
			Scale AsBf = Scale(Music::Position::ChromaticScalePosition::AsBf, pattern.emptyScalePattern, true);
			std::string expected = "AsBf";
			Assert::AreEqual(expected, AsBf.getNameAsString());
		}
		TEST_METHOD(B_ConstructorFromPosition_Test)
		{
			Scale B = Scale(Music::Position::ChromaticScalePosition::B, pattern.emptyScalePattern, true);
			std::string expected = "B";
			Assert::AreEqual(expected, B.getNameAsString());
		}
		TEST_METHOD(C_ConstructorWithString_Test)
		{
			Scale C = Scale(Music::Position::ChromaticScalePosition::C, pattern.emptyScalePattern, true);
			std::string expected = "C";
			Assert::AreEqual(expected, C.getNameAsString());
		}
		TEST_METHOD(CsDf_ConstructorWithString_Test)
		{
			Scale CsDf = Scale(Music::Position::ChromaticScalePosition::CsDf, pattern.emptyScalePattern, true);
			std::string expected = "CsDf";
			Assert::AreEqual(expected, CsDf.getNameAsString());
		}
		TEST_METHOD(D_ConstructorWithString_Test)
		{
			Scale D = Scale(Music::Position::ChromaticScalePosition::D, pattern.emptyScalePattern, true);
			std::string expected = "D";
			Assert::AreEqual(expected, D.getNameAsString());
		}
		TEST_METHOD(DsEf_ConstructorWithString_Test)
		{
			Scale DsEf = Scale(Music::Position::ChromaticScalePosition::DsEf, pattern.emptyScalePattern, true);
			std::string expected = "DsEf";
			Assert::AreEqual(expected, DsEf.getNameAsString());
		}
		TEST_METHOD(E_ConstructorWithString_Test)
		{
			Scale E = Scale(Music::Position::ChromaticScalePosition::E, pattern.emptyScalePattern, true);
			std::string expected = "E";
			Assert::AreEqual(expected, E.getNameAsString());
		}
		TEST_METHOD(F_ConstructorWithString_Test)
		{
			Scale F = Scale(Music::Position::ChromaticScalePosition::F, pattern.emptyScalePattern, true);
			std::string expected = "F";
			Assert::AreEqual(expected, F.getNameAsString());
		}
		TEST_METHOD(FsGf_ConstructorWithString_Test)
		{
			Scale FsGf = Scale(Music::Position::ChromaticScalePosition::FsGf, pattern.emptyScalePattern, true);
			std::string expected = "FsGf";
			Assert::AreEqual(expected, FsGf.getNameAsString());
		}
		TEST_METHOD(G_ConstructorWithString_Test)
		{
			Scale G = Scale(Music::Position::ChromaticScalePosition::G, pattern.emptyScalePattern, true);
			std::string expected = "G";
			Assert::AreEqual(expected, G.getNameAsString());
		}
		TEST_METHOD(GsAf_ConstructorWithString_Test)
		{
			Scale GsAf = Scale(Music::Position::ChromaticScalePosition::GsAf, pattern.emptyScalePattern, true);
			std::string expected = "GsAf";
			Assert::AreEqual(expected, GsAf.getNameAsString());
		}
	};
	TEST_CLASS(getScaleAsString_Test){
		TEST_METHOD(AMajor_getScaleAsString_Test)
		{
			string expectedString = "A B CsDf D E FsGf GsAf";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::A, pattern.emptyScalePattern, true);
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());

		}
		TEST_METHOD(AsBfMajor_getScaleAsString_Test)
		{
			string expected = "AsBf C D DsEf F G A";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::AsBf, pattern.emptyScalePattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(BMajor_getScaleAsString_Test)
		{

			string expected = "B CsDf DsEf E FsGf GsAf AsBf";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::B, pattern.emptyScalePattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CMajor_getScaleAsString_Test)
		{
			string expected = "C D E F G A B";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::C, pattern.emptyScalePattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(CsDfMajor_getScaleAsString_Test)
		{
			string expected = "CsDf DsEf F FsGf GsAf AsBf C";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::CsDf, pattern.emptyScalePattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DMajor_getScaleAsString_Test)
		{
			string expected = "D E FsGf G A B CsDf";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::D, pattern.emptyScalePattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(DsEfMajor_getScaleAsString_Test)
		{
			string expected = "DsEf F G GsAf AsBf C D";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::DsEf, pattern.emptyScalePattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(EMajor_getScaleAsString_Test)
		{
			string expected = "E FsGf GsAf A B CsDf DsEf";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::E, pattern.emptyScalePattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FMajor_getScaleAsString_Test)
		{
			string expected = "F G A AsBf C D E";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::F, pattern.emptyScalePattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(FsGfMajor_getScaleAsString_Test)
		{
			string expected = "FsGf GsAf AsBf B CsDf DsEf F";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::FsGf, pattern.emptyScalePattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GMajor_getScaleAsString_Test)
		{
			string expected = "G A B C D E FsGf";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::G, pattern.emptyScalePattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
		TEST_METHOD(GsAfMajor_getScaleAsString_Test)
		{
			string expected = "GsAf AsBf C CsDf DsEf F G";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::GsAf, pattern.emptyScalePattern, true);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
	TEST_CLASS(isMajorOrMinor_Test)
	{
		TEST_METHOD(isMajor_Test)
		{
			string expected = "Major";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::A, pattern.emptyScalePattern, true);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
		TEST_METHOD(isMinor_Test)
		{
			string expected = "Minor";
			Scale scaleToTest = Scale(Music::Position::ChromaticScalePosition::A, pattern.emptyScalePattern, false);
			Assert::AreEqual(expected, scaleToTest.isMajorOrMinor());
		}
	};
	TEST_CLASS(Operator_Test)
	{
		ScalePattern pattern = ScalePattern();
		TEST_METHOD(preIncrement_Test)
		{
			Scale B = Scale("B", pattern.emptyScalePattern, true);
			Scale during;
			Scale expectedBefore = Scale("A", pattern.emptyScalePattern, true);
			Scale expectedDuring = Scale("C", pattern.emptyScalePattern, true);
			Scale expectedAfter = Scale("C", pattern.emptyScalePattern, true);

			Assert::AreEqual((int)expectedBefore.getPosition(), (int)B.getPosition());
			during = ++B;
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)during.getPosition());
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)B.getPosition());
		}
		TEST_METHOD(postIncrement_Test)
		{
			Scale B("B", pattern.emptyScalePattern, true);
			Scale during;
			Scale expectedBefore = Scale("B", pattern.emptyScalePattern, true);
			Scale expectedDuring = Scale("B", pattern.emptyScalePattern, true);
			Scale expectedAfter = Scale("C", pattern.emptyScalePattern, true);

			Assert::AreEqual((int)expectedBefore.getPosition(), (int)B.getPosition());
			during = B++;
			Assert::AreEqual((int)expectedBefore.getPosition(), (int)during.getPosition());
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)B.getPosition());
		}
		TEST_METHOD(preDeincrement_Test)
		{
			Scale C("C", pattern.emptyScalePattern, true);
			Scale during;
			Scale expectedBefore = Scale("C", pattern.emptyScalePattern, true);
			Scale expectedDuring = Scale("C", pattern.emptyScalePattern, true);
			Scale expectedAfter = Scale("B", pattern.emptyScalePattern, true);

			Assert::AreEqual((int)expectedBefore.getPosition(), (int)C.getPosition());
			during = --C;
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)during.getPosition());
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)C.getPosition());
		}
		TEST_METHOD(postDeIncrement_Test)
		{
			Scale C("C", pattern.emptyScalePattern, true);
			Scale during;
			Scale expectedBefore = Scale("C", pattern.emptyScalePattern, true);
			Scale expectedDuring = Scale("B", pattern.emptyScalePattern, true);
			Scale expectedAfter = Scale("B", pattern.emptyScalePattern, true);

			Assert::AreEqual((int)expectedBefore.getPosition(), (int)C.getPosition());
			during = C--;
			Assert::AreEqual((int)expectedBefore.getPosition(), (int)during.getPosition());
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)C.getPosition());
		}
		TEST_METHOD(isEqualOperator_Test)
		{
			Scale A("A", pattern.emptyScalePattern, true);
			Scale B1("B", pattern.emptyScalePattern, true);
			Scale B2("B", pattern.emptyScalePattern, true);
			Scale C("C", pattern.emptyScalePattern, true);

			Assert::IsFalse(A == B1);
			Assert::IsTrue(B1 == B2);
			Assert::IsTrue(B2 == B1);
			Assert::IsTrue(A == A);
			Assert::IsTrue(B1 == B2);
			Assert::IsFalse(B2 == C);
		}
		TEST_METHOD(isNotEqualOperator_Test)
		{
			Scale A("A", pattern.emptyScalePattern, true);
			Scale B1("B", pattern.emptyScalePattern, true);
			Scale B2("B", pattern.emptyScalePattern, true);
			Scale C("C", pattern.emptyScalePattern, true);

			Assert::IsTrue(A != B1);
			Assert::IsFalse(B1 != B2);
			Assert::IsFalse(B2 != B1);
			Assert::IsFalse(A != A);
			Assert::IsFalse(B1 != B2);
			Assert::IsTrue(B2 != C);
		}
		TEST_METHOD(isGreaterThan_Test)
		{
			Scale A("A", pattern.emptyScalePattern, true);
			Scale B("B", pattern.emptyScalePattern, true);
			Scale C("C", pattern.emptyScalePattern, true);

			Assert::IsTrue(C > B);
			Assert::IsTrue(B > A);
			Assert::IsFalse(B > C);
			Assert::IsFalse(A > B);
		}
		TEST_METHOD(isGreaterThanOrEqual_Test)
		{
			Scale A("A", pattern.emptyScalePattern, true);
			Scale B1("B", pattern.emptyScalePattern, true);
			Scale B2("B", pattern.emptyScalePattern, true);
			Scale C("C", pattern.emptyScalePattern, true);

			Assert::IsTrue(C >= B2);
			Assert::IsTrue(B2 >= B1);
			Assert::IsTrue(B1 >= A);
			Assert::IsFalse(B2 >= C);
			Assert::IsTrue(B1 >= B2);
			Assert::IsFalse(A >= B1);
		}
		TEST_METHOD(isLessThan_Test)
		{
			Scale A("A", pattern.emptyScalePattern, true);
			Scale B("B", pattern.emptyScalePattern, true);
			Scale C("C", pattern.emptyScalePattern, true);

			Assert::IsTrue(A < B);
			Assert::IsFalse(C < B);
		}
		TEST_METHOD(isLessThanOrEqualTo_Test)
		{
			Scale A("A", pattern.emptyScalePattern, true);
			Scale B1("B", pattern.emptyScalePattern, true);
			Scale B2("B", pattern.emptyScalePattern, true);
			Scale C("C", pattern.emptyScalePattern, true);

			Assert::IsTrue(A <= B1);
			Assert::IsTrue(B1 <= B2);
			Assert::IsTrue(B2 <= C);
			Assert::IsFalse(C <= B2);
			Assert::IsTrue(B2 <= B1);
			Assert::IsFalse(B1 <= A);
		};
	};
}
