#pragma once
#include "CppUnitTest.h"
#include "../src/MusicObject.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;


namespace MusicObject_Test
{
	TEST_CLASS(Constructor_Position_Test)
	{
		TEST_METHOD(NONE_ConstructorWithPosition_Test)
		{
			MusicObject NONE = MusicObject();
			Music::Pitch expected = Music::Pitch("NONE");
			Assert::AreEqual((int)expected.GetPosition(), (int)NONE.GetPosition().GetPosition());
		}
		TEST_METHOD(A_ConstructorWithPosition_Test)
		{
			MusicObject A = MusicObject(Music::Pitch("A"));
			Music::Pitch expected = Music::Pitch("A");
			Assert::AreEqual((int)expected.GetPosition(), (int)A.GetPosition().GetPosition());
		}
		TEST_METHOD(AsBf_ConstructorWithPosition_Test)
		{
			MusicObject AsBf = MusicObject(Music::Pitch("AsBf"));
			Music::Pitch expected = Music::Pitch("AsBf");
			Assert::AreEqual((int)expected.GetPosition(), (int)AsBf.GetPosition().GetPosition());
		}
		TEST_METHOD(B_ConstructorWithPosition_Test)
		{
			MusicObject B = MusicObject(Music::Pitch("B"));
			Music::Pitch expected = Music::Pitch("B");
			Assert::AreEqual((int)expected.GetPosition(), (int)B.GetPosition().GetPosition());
		}
		TEST_METHOD(C_ConstructorWithPosition_Test)
		{
			MusicObject C = MusicObject(Music::Pitch("C"));
			Music::Pitch expected = Music::Pitch("C");
			Assert::AreEqual((int)expected.GetPosition(), (int)C.GetPosition().GetPosition());
		}
		TEST_METHOD(CsDf_ConstructorWithPosition_Test)
		{
			MusicObject CsDf = MusicObject(Music::Pitch("CsDf"));
			Music::Pitch expected = Music::Pitch("CsDf");
			Assert::AreEqual((int)expected.GetPosition(), (int)CsDf.GetPosition().GetPosition());
		}
		TEST_METHOD(D_ConstructorWithPosition_Test)
		{
			MusicObject D = MusicObject(Music::Pitch("D"));
			Music::Pitch expected = Music::Pitch("D");
			Assert::AreEqual((int)expected.GetPosition(), (int)D.GetPosition().GetPosition());
		}
		TEST_METHOD(DsEf_ConstructorWithPosition_Test)
		{
			MusicObject DsEf = MusicObject(Music::Pitch("DsEf"));
			Music::Pitch expected = Music::Pitch("DsEf");
			Assert::AreEqual((int)expected.GetPosition(), (int)DsEf.GetPosition().GetPosition());
		}
		TEST_METHOD(E_ConstructorWithPosition_Test)
		{
			MusicObject E = MusicObject(Music::Pitch("E"));
			Music::Pitch expected = Music::Pitch("E");
			Assert::AreEqual((int)expected.GetPosition(), (int)E.GetPosition().GetPosition());
		}
		TEST_METHOD(F_ConstructorWithPosition_Test)
		{
			MusicObject F = MusicObject(Music::Pitch("F"));
			Music::Pitch expected = Music::Pitch("F");
			Assert::AreEqual((int)expected.GetPosition(), (int)F.GetPosition().GetPosition());
		}
		TEST_METHOD(FsGf_ConstructorWithPosition_Test)
		{
			MusicObject FsGf = MusicObject(Music::Pitch("FsGf"));
			Music::Pitch expected = Music::Pitch("FsGf");
			Assert::AreEqual((int)expected.GetPosition(), (int)FsGf.GetPosition().GetPosition());
		}
		TEST_METHOD(G_ConstructorWithPosition_Test)
		{
			MusicObject G = MusicObject(Music::Pitch("G"));
			Music::Pitch expected = Music::Pitch("G");
			Assert::AreEqual((int)expected.GetPosition(), (int)G.GetPosition().GetPosition());
		}
		TEST_METHOD(GsAf_ConstructorWithPosition_Test)
		{
			MusicObject GsAf = MusicObject(Music::Pitch("GsAf"));
			Music::Pitch expected = Music::Pitch("GsAf");
			Assert::AreEqual((int)expected.GetPosition(), (int)GsAf.GetPosition().GetPosition());
		}
	};
	TEST_CLASS(Constructor_Int_Test)
	{
		TEST_METHOD(NONE_ConstructorWithInt_Test)
		{
			MusicObject A = MusicObject(0);
			Music::Pitch expected = Music::Pitch("NONE");
			Assert::AreEqual((int)expected.GetPosition(), (int)A.GetPosition().GetPosition());
		}
		TEST_METHOD(A_ConstructorWithInt_Test)
		{
			MusicObject A = MusicObject(1);
			Music::Pitch expected = Music::Pitch("A");
			Assert::AreEqual((int)expected.GetPosition(), (int)A.GetPosition().GetPosition());
		}
		TEST_METHOD(AsBf_ConstructorWithInt_Test)
		{
			MusicObject AsBf = MusicObject(2);
			Music::Pitch expected = Music::Pitch("AsBf");
			Assert::AreEqual((int)expected.GetPosition(), (int)AsBf.GetPosition().GetPosition());
		}
		TEST_METHOD(B_ConstructorWithInt_Test)
		{
			MusicObject B = MusicObject(3);
			Music::Pitch expected = Music::Pitch("B");
			Assert::AreEqual((int)expected.GetPosition(), (int)B.GetPosition().GetPosition());
		}
		TEST_METHOD(C_ConstructorWithInt_Test)
		{
			MusicObject C = MusicObject(4);
			Music::Pitch expected = Music::Pitch("C");
			Assert::AreEqual((int)expected.GetPosition(), (int)C.GetPosition().GetPosition());
		}
		TEST_METHOD(CsDf_ConstructorWithInt_Test)
		{
			MusicObject CsDf = MusicObject(5);
			Music::Pitch expected = Music::Pitch("CsDf");
			Assert::AreEqual((int)expected.GetPosition(), (int)CsDf.GetPosition().GetPosition());

		}
		TEST_METHOD(D_ConstructorWithInt_Test)
		{
			MusicObject D = MusicObject(6);
			Music::Pitch expected = Music::Pitch("D");
			Assert::AreEqual((int)expected.GetPosition(), (int)D.GetPosition().GetPosition());

		}
		TEST_METHOD(DsEf_ConstructorWithInt_Test)
		{
			MusicObject DsEf = MusicObject(7);
			Music::Pitch expected = Music::Pitch("DsEf");
			Assert::AreEqual((int)expected.GetPosition(), (int)DsEf.GetPosition().GetPosition());
		}
		TEST_METHOD(E_ConstructorWithInt_Test)
		{
			MusicObject E = MusicObject(8);
			Music::Pitch expected = Music::Pitch("E");
			Assert::AreEqual((int)expected.GetPosition(), (int)E.GetPosition().GetPosition());

		}
		TEST_METHOD(F_ConstructorWithInt_Test)
		{
			MusicObject F = MusicObject(9);
			Music::Pitch expected = Music::Pitch("F");
			Assert::AreEqual((int)expected.GetPosition(), (int)F.GetPosition().GetPosition());

		}
		TEST_METHOD(FsGf_ConstructorWithInt_Test)
		{
			MusicObject FsGf = MusicObject(10);
			Music::Pitch expected = Music::Pitch("FsGf");
			Assert::AreEqual((int)expected.GetPosition(), (int)FsGf.GetPosition().GetPosition());
		}
		TEST_METHOD(G_ConstructorWithInt_Test)
		{
			MusicObject G = MusicObject(11);
			Music::Pitch expected = Music::Pitch("G");
			Assert::AreEqual((int)expected.GetPosition(), (int)G.GetPosition().GetPosition());

		}
		TEST_METHOD(GsAf_ConstructorWithInt_Test)
		{
			MusicObject GsAf = MusicObject(12);
			Music::Pitch expected = Music::Pitch("GsAf");
			Assert::AreEqual((int)expected.GetPosition(), (int)GsAf.GetPosition().GetPosition());
		}
	};
	TEST_CLASS(Constructor_String_Test)
	{
		TEST_METHOD(NONE_ConstructorWithString_Test)
		{
			MusicObject NONE = MusicObject("NONE");
			Music::Pitch expected = Music::Pitch("NONE");
			Assert::AreEqual((int)expected.GetPosition(), (int)NONE.GetPosition().GetPosition());
		}
		TEST_METHOD(A_ConstructorWithString_Test)
		{
			MusicObject A = MusicObject("A");
			Music::Pitch expected = Music::Pitch("A");
			Assert::AreEqual((int)expected.GetPosition(), (int)A.GetPosition().GetPosition());
		}
		TEST_METHOD(AsBf_ConstructorWithString_Test)
		{
			MusicObject AsBf = MusicObject("AsBf");
			Music::Pitch expected = Music::Pitch("AsBf");
			Assert::AreEqual((int)expected.GetPosition(), (int)AsBf.GetPosition().GetPosition());
		}
		TEST_METHOD(B_ConstructorWithString_Test)
		{
			MusicObject B = MusicObject("B");
			Music::Pitch expected = Music::Pitch("B");
			Assert::AreEqual((int)expected.GetPosition(), (int)B.GetPosition().GetPosition());
		}
		TEST_METHOD(C_ConstructorWithString_Test)
		{
			MusicObject C = MusicObject("C");
			Music::Pitch expected = Music::Pitch("C");
			Assert::AreEqual((int)expected.GetPosition(), (int)C.GetPosition().GetPosition());
		}
		TEST_METHOD(CsDf_ConstructorWithString_Test)
		{
			MusicObject CsDf = MusicObject("CsDf");
			Music::Pitch expected = Music::Pitch("CsDf");
			Assert::AreEqual((int)expected.GetPosition(), (int)CsDf.GetPosition().GetPosition());
		}
		TEST_METHOD(D_ConstructorWithString_Test)
		{
			MusicObject D = MusicObject("D");
			Music::Pitch expected = Music::Pitch("D");
			Assert::AreEqual((int)expected.GetPosition(), (int)D.GetPosition().GetPosition());
		}
		TEST_METHOD(DsEf_ConstructorWithString_Test)
		{
			MusicObject DsEf = MusicObject("DsEf");
			Music::Pitch expected = Music::Pitch("DsEf");
			Assert::AreEqual((int)expected.GetPosition(), (int)DsEf.GetPosition().GetPosition());
		}
		TEST_METHOD(E_ConstructorWithString_Test)
		{
			MusicObject E = MusicObject("E");
			Music::Pitch expected = Music::Pitch("E");
			Assert::AreEqual((int)expected.GetPosition(), (int)E.GetPosition().GetPosition());
		}
		TEST_METHOD(F_ConstructorWithString_Test)
		{
			MusicObject F = MusicObject("F");
			Music::Pitch expected = Music::Pitch("F");
			Assert::AreEqual((int)expected.GetPosition(), (int)F.GetPosition().GetPosition());
		}
		TEST_METHOD(FsGs_ConstructorWithString_Test)
		{
			MusicObject FsGf = MusicObject("FsGf");
			Music::Pitch expected = Music::Pitch("FsGf");
			Assert::AreEqual((int)expected.GetPosition(), (int)FsGf.GetPosition().GetPosition());
		}
		TEST_METHOD(G_ConstructorWithString_Test)
		{
			MusicObject G = MusicObject("G");
			Music::Pitch expected = Music::Pitch("G");
			Assert::AreEqual((int)expected.GetPosition(), (int)G.GetPosition().GetPosition());
		}
		TEST_METHOD(GsAf_ConstructorWithString_Test)
		{
			MusicObject GsAf("GsAf");
			Music::Pitch expected = Music::Pitch("GsAf");
			Assert::AreEqual((int)expected.GetPosition(), (int)GsAf.GetPosition().GetPosition());
		}
	};
	TEST_CLASS(getName_Test)
	{
		TEST_METHOD(NONE_GetName_Test)
		{
			MusicObject NONE = MusicObject(Music::Pitch("NONE"));
			string expected = "NONE";
			Assert::AreEqual(expected, NONE.GetName());

		}
		TEST_METHOD(A_GetName_Test)
		{
			MusicObject A = MusicObject(Music::Pitch("A"));
			string expected = "A";
			Assert::AreEqual(expected, A.GetName());

		}
		TEST_METHOD(AsBf_GetName_Test)
		{
			MusicObject AsBf = MusicObject(Music::Pitch("AsBf"));
			string expected = "AsBf";
			Assert::AreEqual(expected, AsBf.GetName());

		}
		TEST_METHOD(B_GetName_Test)
		{
			MusicObject B = MusicObject(Music::Pitch("B"));
			string expected = "B";
			Assert::AreEqual(expected, B.GetName());
		}
		TEST_METHOD(C_GetName_Test)
		{
			MusicObject C = MusicObject(Music::Pitch("C"));
			string expected = "C";
			Assert::AreEqual(expected, C.GetName());
		}
		TEST_METHOD(CsDf_GetName_Test)
		{
			MusicObject CsDf = MusicObject(Music::Pitch("CsDf"));
			string expected = "CsDf";
			Assert::AreEqual(expected, CsDf.GetName());

		}
		TEST_METHOD(D_GetName_Test)
		{
			MusicObject D = MusicObject(Music::Pitch("D"));
			string expected = "D";
			Assert::AreEqual(expected, D.GetName());

		}
		TEST_METHOD(DsEf_GetName_Test)
		{
			MusicObject DsEf = MusicObject(Music::Pitch("DsEf"));
			string expected = "DsEf";
			Assert::AreEqual(expected, DsEf.GetName());
		}
		TEST_METHOD(E_GetName_Test)
		{
			MusicObject E = MusicObject(Music::Pitch("E"));
			string expected = "E";
			Assert::AreEqual(expected, E.GetName());

		}
		TEST_METHOD(F_GetName_Test)
		{
			MusicObject F = MusicObject(Music::Pitch("F"));
			string expected = "F";
			Assert::AreEqual(expected, F.GetName());

		}
		TEST_METHOD(FsGf_GetName_Test)
		{
			MusicObject FsGf = MusicObject(Music::Pitch("FsGf"));
			string expectedsGf = "FsGf";
			Assert::AreEqual(expectedsGf, FsGf.GetName());
		}
		TEST_METHOD(G_GetName_Test)
		{
			MusicObject G = MusicObject(Music::Pitch("G"));
			string expected = "G";
			Assert::AreEqual(expected, G.GetName());

		}
		TEST_METHOD(GsAf_GetName_Test)
		{
			MusicObject GsAf = MusicObject(Music::Pitch("GsAf"));
			string expected = "GsAf";
			Assert::AreEqual(expected, GsAf.GetName());
		}
	};
	TEST_CLASS(accendHalfStep_Test)
	{
		TEST_METHOD(A_goHalfStep_Test)
		{
			MusicObject A = MusicObject(Music::Pitch("A"));
			Music::Pitch expected = Music::Pitch("AsBf");

			MusicObject halfStepUpFromA = A.accendHalfStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)halfStepUpFromA.GetPosition().GetPosition());

		}
		TEST_METHOD(AsBf_goHalfStep_Test)
		{
			MusicObject AsBf = MusicObject(Music::Pitch("AsBf"));
			Music::Pitch expected = Music::Pitch("B");

			MusicObject halfStepUpFromAsBf = AsBf.accendHalfStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)halfStepUpFromAsBf.GetPosition().GetPosition());

		}
		TEST_METHOD(B_goHalfStep_Test)
		{
			MusicObject B = MusicObject(Music::Pitch("B"));
			Music::Pitch expected = Music::Pitch("C");

			MusicObject halfStepUpFromB = B.accendHalfStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)halfStepUpFromB.GetPosition().GetPosition());
		}
		TEST_METHOD(C_goHalfStep_Test)
		{
			MusicObject C = MusicObject(Music::Pitch("C"));
			Music::Pitch expected = Music::Pitch("CsDf");

			MusicObject halfStepUpFromC = C.accendHalfStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)halfStepUpFromC.GetPosition().GetPosition());
		}
		TEST_METHOD(CsDf_goHalfStep_Test)
		{
			MusicObject CsDf = MusicObject(Music::Pitch("CsDf"));
			Music::Pitch expected = Music::Pitch("D");

			MusicObject halfStepUpFromCsDf = CsDf.accendHalfStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)halfStepUpFromCsDf.GetPosition().GetPosition());

		}
		TEST_METHOD(D_goHalfStep_Test)
		{
			MusicObject D = MusicObject(Music::Pitch("D"));
			Music::Pitch expected = Music::Pitch("DsEf");

			MusicObject halfStepUpFromD = D.accendHalfStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)halfStepUpFromD.GetPosition().GetPosition());

		}
		TEST_METHOD(DsEf_goHalfStep_Test)
		{
			MusicObject DsEf = MusicObject(Music::Pitch("DsEf"));
			Music::Pitch expected = Music::Pitch("E");

			MusicObject halfStepUpFromDsEf = DsEf.accendHalfStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)halfStepUpFromDsEf.GetPosition().GetPosition());
		}
		TEST_METHOD(E_goHalfStep_Test)
		{
			MusicObject E = MusicObject(Music::Pitch("E"));
			Music::Pitch expected = Music::Pitch("F");

			MusicObject halfStepUpFromE = E.accendHalfStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)halfStepUpFromE.GetPosition().GetPosition());

		}
		TEST_METHOD(F_goHalfStep_Test)
		{
			MusicObject F = MusicObject(Music::Pitch("F"));
			Music::Pitch expected = Music::Pitch("FsGf");

			MusicObject halfStepUpFromF = F.accendHalfStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)halfStepUpFromF.GetPosition().GetPosition());

		}
		TEST_METHOD(FsGf_ConstructorWithPosition_Test)
		{
			MusicObject FsGf = MusicObject(Music::Pitch("FsGf"));
			Music::Pitch expected = Music::Pitch("G");

			MusicObject halfStepUpFromFsGf = FsGf.accendHalfStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)halfStepUpFromFsGf.GetPosition().GetPosition());
		}
		TEST_METHOD(G_goHalfStep_Test)
		{
			MusicObject G = MusicObject(Music::Pitch("G"));
			Music::Pitch expected = Music::Pitch("GsAf");

			MusicObject halfStepUpFromG = G.accendHalfStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)halfStepUpFromG.GetPosition().GetPosition());

		}
		TEST_METHOD(GsAf_goHalfStep_Test)
		{
			MusicObject GsAf = MusicObject(Music::Pitch("GsAf"));
			Music::Pitch expected = Music::Pitch("A");

			MusicObject halfStepUpFromGsAf = GsAf.accendHalfStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)halfStepUpFromGsAf.GetPosition().GetPosition());
		}
	};
	TEST_CLASS(accendFullStep_Test)
	{
		TEST_METHOD(A_goFullStep_Test)
		{
			MusicObject A = MusicObject(Music::Pitch("A"));
			Music::Pitch expected = Music::Pitch("B");

			MusicObject fullStepUpFromA = A.accendFullStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)fullStepUpFromA.GetPosition().GetPosition());

		}
		TEST_METHOD(AsBf_goFullStep_Test)
		{
			MusicObject AsBf = MusicObject(Music::Pitch("AsBf"));
			Music::Pitch expected = Music::Pitch("C");

			MusicObject fullStepUpFromAsBf = AsBf.accendFullStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)fullStepUpFromAsBf.GetPosition().GetPosition());

		}
		TEST_METHOD(B_goFullStep_Test)
		{
			MusicObject B = MusicObject(Music::Pitch("B"));
			Music::Pitch expected = Music::Pitch("CsDf");

			MusicObject fullStepUpFromB = B.accendFullStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)fullStepUpFromB.GetPosition().GetPosition());
		}
		TEST_METHOD(C_goFullStep_Test)
		{
			MusicObject C = MusicObject(Music::Pitch("C"));
			Music::Pitch expected = Music::Pitch("D");

			MusicObject fullStepUpFromC = C.accendFullStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)fullStepUpFromC.GetPosition().GetPosition());
		}
		TEST_METHOD(CsDf_goFullStep_Test)
		{
			MusicObject CsDf = MusicObject(Music::Pitch("CsDf"));
			Music::Pitch expected = Music::Pitch("DsEf");

			MusicObject fullStepUpFromCsDf = CsDf.accendFullStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)fullStepUpFromCsDf.GetPosition().GetPosition());

		}
		TEST_METHOD(D_goFullStep_Test)
		{
			MusicObject D = MusicObject(Music::Pitch("D"));
			Music::Pitch expected = Music::Pitch("E");

			MusicObject fullStepUpFromD = D.accendFullStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)fullStepUpFromD.GetPosition().GetPosition());

		}
		TEST_METHOD(DsEf_goFullStep_Test)
		{
			MusicObject DsEf = MusicObject(Music::Pitch("DsEf"));
			Music::Pitch expected = Music::Pitch("F");

			MusicObject fullStepUpFromDsEf = DsEf.accendFullStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)fullStepUpFromDsEf.GetPosition().GetPosition());
		}
		TEST_METHOD(E_goFullStep_Test)
		{
			MusicObject E = MusicObject(Music::Pitch("E"));
			Music::Pitch expected = Music::Pitch("FsGf");

			MusicObject fullStepUpFromE = E.accendFullStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)fullStepUpFromE.GetPosition().GetPosition());

		}
		TEST_METHOD(F_goFullStep_Test)
		{
			MusicObject F = MusicObject(Music::Pitch("F"));
			Music::Pitch expected = Music::Pitch("G");

			MusicObject fullStepUpFromF = F.accendFullStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)fullStepUpFromF.GetPosition().GetPosition());

		}
		TEST_METHOD(FsGf_goFullStep_Test)
		{
			MusicObject FsGf = MusicObject(Music::Pitch("FsGf"));
			Music::Pitch expected = Music::Pitch("GsAf");

			MusicObject fullStepUpFromFsGf = FsGf.accendFullStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)fullStepUpFromFsGf.GetPosition().GetPosition());
		}
		TEST_METHOD(G_goFullStep_Test)
		{
			MusicObject G = MusicObject(Music::Pitch("G"));
			Music::Pitch expected = Music::Pitch("A");

			MusicObject fullStepUpFromG = G.accendFullStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)fullStepUpFromG.GetPosition().GetPosition());

		}
		TEST_METHOD(GsAf_goFullStep_Test)
		{
			MusicObject GsAf = MusicObject(Music::Pitch("GsAf"));
			Music::Pitch expected = Music::Pitch("AsBf");

			MusicObject fullStepUpFromGsAf = GsAf.accendFullStep();

			Assert::AreEqual((int)expected.GetPosition(), (int)fullStepUpFromGsAf.GetPosition().GetPosition());
		}
	};
	TEST_CLASS(accendStepAndAHalf_Test)
	{
		TEST_METHOD(A_goStepAndAHalf_Test)
		{
			MusicObject A = MusicObject(Music::Pitch("A"));
			Music::Pitch expected = Music::Pitch("C");

			MusicObject stepAndAHalfUpFromA = A.accendStepAndAHalf();

			Assert::AreEqual((int)expected.GetPosition(), (int)stepAndAHalfUpFromA.GetPosition().GetPosition());

		}
		TEST_METHOD(AsBf_goStepAndAHalf_Test)
		{
			MusicObject AsBf = MusicObject(Music::Pitch("AsBf"));
			Music::Pitch expected = Music::Pitch("CsDf");

			MusicObject stepAndAHalfUpFromAsBf = AsBf.accendStepAndAHalf();

			Assert::AreEqual((int)expected.GetPosition(), (int)stepAndAHalfUpFromAsBf.GetPosition().GetPosition());

		}
		TEST_METHOD(B_goStepAndAHalf_Test)
		{
			MusicObject B = MusicObject(Music::Pitch("B"));
			Music::Pitch expected = Music::Pitch("D");

			MusicObject stepAndAHalfUpFromB = B.accendStepAndAHalf();

			Assert::AreEqual((int)expected.GetPosition(), (int)stepAndAHalfUpFromB.GetPosition().GetPosition());
		}
		TEST_METHOD(C_goStepAndAHalf_Test)
		{
			MusicObject C = MusicObject(Music::Pitch("C"));
			Music::Pitch expected = Music::Pitch("DsEf");

			MusicObject stepAndAHalfUpFromC = C.accendStepAndAHalf();

			Assert::AreEqual((int)expected.GetPosition(), (int)stepAndAHalfUpFromC.GetPosition().GetPosition());
		}
		TEST_METHOD(CsDf_goStepAndAHalf_Test)
		{
			MusicObject CsDf = MusicObject(Music::Pitch("CsDf"));
			Music::Pitch expected = Music::Pitch("E");

			MusicObject stepAndAHalfUpFromCsDf = CsDf.accendStepAndAHalf();

			Assert::AreEqual((int)expected.GetPosition(), (int)stepAndAHalfUpFromCsDf.GetPosition().GetPosition());
		}
		TEST_METHOD(D_goStepAndAHalf_Test)
		{
			MusicObject D = MusicObject(Music::Pitch("D"));
			Music::Pitch expected = Music::Pitch("F");

			MusicObject stepAndAHalfUpFromD = D.accendStepAndAHalf();

			Assert::AreEqual((int)expected.GetPosition(), (int)stepAndAHalfUpFromD.GetPosition().GetPosition());
		}
		TEST_METHOD(DsEf_goStepAndAHalf_Test)
		{
			MusicObject DsEf = MusicObject(Music::Pitch("DsEf"));
			Music::Pitch expected = Music::Pitch("FsGf");

			MusicObject stepAndAHalfUpFromDsEf = DsEf.accendStepAndAHalf();

			Assert::AreEqual((int)expected.GetPosition(), (int)stepAndAHalfUpFromDsEf.GetPosition().GetPosition());
		}
		TEST_METHOD(E_goStepAndAHalf_Test)
		{
			MusicObject E = MusicObject(Music::Pitch("E"));
			Music::Pitch expected = Music::Pitch("G");

			MusicObject stepAndAHalfUpFromE = E.accendStepAndAHalf();

			Assert::AreEqual((int)expected.GetPosition(), (int)stepAndAHalfUpFromE.GetPosition().GetPosition());
		}
		TEST_METHOD(F_goStepAndAHalf_Test)
		{
			MusicObject F = MusicObject(Music::Pitch("F"));
			Music::Pitch expected = Music::Pitch("GsAf");

			MusicObject stepAndAHalfUpFromF = F.accendStepAndAHalf();

			Assert::AreEqual((int)expected.GetPosition(), (int)stepAndAHalfUpFromF.GetPosition().GetPosition());
		}
		TEST_METHOD(FsGf_goStepAndAHalf_Test)
		{
			MusicObject FsGf = MusicObject(Music::Pitch("FsGf"));
			Music::Pitch expected = Music::Pitch("A");

			MusicObject stepAndAHalfUpFromFsGf = FsGf.accendStepAndAHalf();

			Assert::AreEqual((int)expected.GetPosition(), (int)stepAndAHalfUpFromFsGf.GetPosition().GetPosition());
		}
		TEST_METHOD(G_goStepAndAHalf_Test)
		{
			MusicObject G = MusicObject(Music::Pitch("G"));
			Music::Pitch expected = Music::Pitch("AsBf");

			MusicObject stepAndAHalfUpFromG = G.accendStepAndAHalf();

			Assert::AreEqual((int)expected.GetPosition(), (int)stepAndAHalfUpFromG.GetPosition().GetPosition());
		}
		TEST_METHOD(GsAf_goStepAndAHalf_Test)
		{
			MusicObject GsAf = MusicObject(Music::Pitch("GsAf"));
			Music::Pitch expected = Music::Pitch("B");

			MusicObject stepAndAHalfUpFromGsAf = GsAf.accendStepAndAHalf();

			Assert::AreEqual((int)expected.GetPosition(), (int)stepAndAHalfUpFromGsAf.GetPosition().GetPosition());
		}
	};
	TEST_CLASS(getPositionAsString_Test)
	{
		TEST_METHOD(NONE_getPositionAsString_Test)
		{
			MusicObject NONE = MusicObject(Music::Pitch("NONE"));
			string expected = "NONE";
			Assert::AreEqual(expected, NONE.GetPosition().GetPositionAsString());
		}
		TEST_METHOD(A_getPositionAsString_Test)
		{
			MusicObject A = MusicObject(Music::Pitch("A"));
			string expected = "A";
			Assert::AreEqual(expected, A.GetPosition().GetPositionAsString());
		}
		TEST_METHOD(AsBf_getPositionAsString_Test)
		{
			MusicObject AsBf = MusicObject(Music::Pitch("AsBf"));
			string expected = "AsBf";
			Assert::AreEqual(expected, AsBf.GetPosition().GetPositionAsString());
		}
		TEST_METHOD(B_getPositionAsString_Test)
		{
			MusicObject B = MusicObject(Music::Pitch("B"));
			string expected = "B";
			Assert::AreEqual(expected, B.GetPosition().GetPositionAsString());
		}
		TEST_METHOD(C_getPositionAsString_Test)
		{
			MusicObject C = MusicObject(Music::Pitch("C"));
			string expected = "C";
			Assert::AreEqual(expected, C.GetPosition().GetPositionAsString());
		}
		TEST_METHOD(CsDf_getPositionAsString_Test)
		{
			MusicObject CsDf = MusicObject(Music::Pitch("CsDf"));
			string expected = "CsDf";
			Assert::AreEqual(expected, CsDf.GetPosition().GetPositionAsString());
		}
		TEST_METHOD(D_getPositionAsString_Test)
		{
			MusicObject D = MusicObject(Music::Pitch("D"));
			string expected = "D";
			Assert::AreEqual(expected, D.GetPosition().GetPositionAsString());
		}
		TEST_METHOD(DsEf_getPositionAsString_Test)
		{
			MusicObject DsEf = MusicObject(Music::Pitch("DsEf"));
			string expected = "DsEf";
			Assert::AreEqual(expected, DsEf.GetPosition().GetPositionAsString());
		}
		TEST_METHOD(E_getPositionAsString_Test)
		{
			MusicObject E = MusicObject(Music::Pitch("E"));
			string expected = "E";
			Assert::AreEqual(expected, E.GetPosition().GetPositionAsString());
		}
		TEST_METHOD(F_getPositionAsString_Test)
		{
			MusicObject F = MusicObject(Music::Pitch("F"));
			string expected = "F";
			Assert::AreEqual(expected, F.GetPosition().GetPositionAsString());
		}
		TEST_METHOD(FsGf_getPositionAsString_Test)
		{
			MusicObject FsGf = MusicObject(Music::Pitch("FsGf"));
			string expected = "FsGf";
			Assert::AreEqual(expected, FsGf.GetPosition().GetPositionAsString());
		}
		TEST_METHOD(G_getPositionAsString_Test)
		{
			MusicObject G = MusicObject(Music::Pitch("G"));
			string expected = "G";
			Assert::AreEqual(expected, G.GetPosition().GetPositionAsString());
		}
		TEST_METHOD(GsAf_getPositionAsString_Test)
		{
			MusicObject GsAf = MusicObject(Music::Pitch("GsAf"));
			string expected = "GsAf";
			Assert::AreEqual(expected, GsAf.GetPosition().GetPositionAsString());
		}
	};
	TEST_CLASS(Operator_Test)
	{
		TEST_METHOD(assignmentWithMusicObject_Test)
		{
			Music::Pitch expectedPositionNone = Music::Pitch(Music::Pitch("NONE"));
			Music::Pitch expectedPositionB = Music::Pitch(Music::Pitch("B"));
			Music::Pitch expectedPositionC = Music::Pitch(Music::Pitch("C"));

			Music::MusicObject testMusicObjectNONE = Music::MusicObject();
			Music::MusicObject testMusicObjectB = Music::MusicObject(Music::Pitch("B"));
			Music::MusicObject testMusicObjectC = Music::MusicObject(Music::Pitch("C"));

			Assert::AreEqual((int)testMusicObjectNONE.GetPosition().GetPosition(), (int)expectedPositionNone.GetPosition());
			Assert::AreEqual((int)testMusicObjectB.GetPosition().GetPosition(), (int)expectedPositionB.GetPosition());
			Assert::AreEqual((int)testMusicObjectC.GetPosition().GetPosition(), (int)expectedPositionC.GetPosition());
		}
		TEST_METHOD(assignemntWithPosition_test)
		{
			Music::Pitch expectedPositionNone = Music::Pitch(Music::Pitch("NONE"));
			Music::Pitch expectedPositionB = Music::Pitch(Music::Pitch("B"));
			Music::Pitch expectedPositionC = Music::Pitch(Music::Pitch("C"));

			Music::MusicObject testMusicObjectNONE = Music::MusicObject();
			Music::MusicObject testMusicObjectB = Music::MusicObject(Music::Pitch("B"));
			Music::MusicObject testMusicObjectC = Music::MusicObject(Music::Pitch("C"));

			Assert::AreEqual((int)testMusicObjectNONE.GetPosition().GetPosition(), (int)expectedPositionNone.GetPosition());
			Assert::AreEqual((int)testMusicObjectB.GetPosition().GetPosition(), (int)expectedPositionB.GetPosition());
			Assert::AreEqual((int)testMusicObjectC.GetPosition().GetPosition(), (int)expectedPositionC.GetPosition());
		}
		TEST_METHOD(assignemntWithInt_test)
		{
			Music::Pitch expectedPositionNone = Music::Pitch(Music::Pitch("NONE"));
			Music::Pitch expectedPositionB = Music::Pitch("B");
			Music::Pitch expectedPositionC = Music::Pitch("C");

			Music::MusicObject testMusicObjectNONE = 0;
			Music::MusicObject testMusicObjectB = 3;
			Music::MusicObject testMusicObjectC = 4;

			Assert::AreEqual((int)testMusicObjectNONE.GetPosition().GetPosition(), (int)expectedPositionNone.GetPosition());
			Assert::AreEqual((int)testMusicObjectB.GetPosition().GetPosition(), (int)expectedPositionB.GetPosition());
			Assert::AreEqual((int)testMusicObjectC.GetPosition().GetPosition(), (int)expectedPositionC.GetPosition());
		}
		TEST_METHOD(assignemntWithString_test)
		{
			Music::Pitch expectedNone = Music::Pitch(Music::Pitch("NONE"));
			Music::Pitch expectedB = Music::Pitch("B");
			Music::Pitch expectedC = Music::Pitch("C");

			Music::MusicObject testMusicObjectNONE = "NONE";
			Music::MusicObject testMusicObjectB = "B";
			Music::MusicObject testMusicObjectC = "C";

			Assert::AreEqual((int)testMusicObjectNONE.GetPosition().GetPosition(), (int)expectedNone.GetPosition());
			Assert::AreEqual((int)testMusicObjectB.GetPosition().GetPosition(), (int)expectedB.GetPosition());
			Assert::AreEqual((int)testMusicObjectC.GetPosition().GetPosition(), (int)expectedC.GetPosition());
		}
		TEST_METHOD(preIncrement_Test)
		{
			MusicObject B("B");
			MusicObject during;
			MusicObject expectedBefore = MusicObject("B");
			MusicObject expectedDuring = MusicObject("C");
			MusicObject expectedAfter = MusicObject("C");

			Assert::AreEqual((int)expectedBefore.GetPosition().GetPosition(), (int)B.GetPosition().GetPosition());
			during = ++B;
			Assert::AreEqual((int)expectedAfter.GetPosition().GetPosition(), (int)during.GetPosition().GetPosition());
			Assert::AreEqual((int)expectedAfter.GetPosition().GetPosition(), (int)B.GetPosition().GetPosition());
		}
		TEST_METHOD(postIncrement_Test)
		{
			MusicObject B("B");
			MusicObject during;
			MusicObject expectedBefore = MusicObject("B");
			MusicObject expectedDuring = MusicObject("B");
			MusicObject expectedAfter = MusicObject("C");

			Assert::AreEqual((int)expectedBefore.GetPosition().GetPosition(), (int)B.GetPosition().GetPosition());
			during = B++;
			Assert::AreEqual((int)expectedBefore.GetPosition().GetPosition(), (int)during.GetPosition().GetPosition());
			Assert::AreEqual((int)expectedAfter.GetPosition().GetPosition(), (int)B.GetPosition().GetPosition());
		}
		TEST_METHOD(preDeincrement_Test)
		{
			MusicObject C("C");
			MusicObject during;
			MusicObject expectedBefore = MusicObject("C");
			MusicObject expectedDuring = MusicObject("C");
			MusicObject expectedAfter = MusicObject("B");

			Assert::AreEqual((int)expectedBefore.GetPosition().GetPosition(), (int)C.GetPosition().GetPosition());
			during = --C;
			Assert::AreEqual((int)expectedAfter.GetPosition().GetPosition(), (int)during.GetPosition().GetPosition());
			Assert::AreEqual((int)expectedAfter.GetPosition().GetPosition(), (int)C.GetPosition().GetPosition());
		}
		TEST_METHOD(postDeIncrement_Test)
		{
			MusicObject C("C");
			MusicObject during;
			MusicObject expectedBefore = MusicObject("C");
			MusicObject expectedDuring = MusicObject("B");
			MusicObject expectedAfter = MusicObject("B");

			Assert::AreEqual((int)expectedBefore.GetPosition().GetPosition(), (int)C.GetPosition().GetPosition());
			during = C--;
			Assert::AreEqual((int)expectedBefore.GetPosition().GetPosition(), (int)during.GetPosition().GetPosition());
			Assert::AreEqual((int)expectedAfter.GetPosition().GetPosition(), (int)C.GetPosition().GetPosition());
		}
		TEST_METHOD(isEqualOperator_Test)
		{
			MusicObject A("A");
			MusicObject B1("B");
			MusicObject B2("B");
			MusicObject C("C");

			Assert::IsFalse(A == B1);
			Assert::IsTrue(B1 == B2);
			Assert::IsTrue(B2 == B1);
			Assert::IsTrue(A == A);
			Assert::IsTrue(B1 == B2);
			Assert::IsFalse(B2 == C);
		}
		TEST_METHOD(isNotEqualOperator_Test)
		{
			MusicObject A("A");
			MusicObject B1("B");
			MusicObject B2("B");
			MusicObject C("C");

			Assert::IsTrue(A != B1);
			Assert::IsFalse(B1 != B2);
			Assert::IsFalse(B2 != B1);
			Assert::IsFalse(A != A);
			Assert::IsFalse(B1 != B2);
			Assert::IsTrue(B2 != C);
		}
		TEST_METHOD(isGreaterThan_Test)
		{
			MusicObject A("A");
			MusicObject B("B");
			MusicObject C("C");

			Assert::IsTrue(C > B);
			Assert::IsTrue(B > A);
			Assert::IsFalse(B > C);
			Assert::IsFalse(A > B);
		}
		TEST_METHOD(isGreaterThanOrEqual_Test)
		{
			MusicObject A("A");
			MusicObject B1("B");
			MusicObject B2("B");
			MusicObject C("C");

			Assert::IsTrue(C >= B2);
			Assert::IsTrue(B2 >= B1);
			Assert::IsTrue(B1 >= A);
			Assert::IsFalse(B2 >= C);
			Assert::IsTrue(B1 >= B2);
			Assert::IsFalse(A >= B1);
		}
		TEST_METHOD(isLessThan_Test)
		{
			MusicObject A("A");
			MusicObject B("B");
			MusicObject C("C");

			Assert::IsTrue(A < B);
			Assert::IsFalse(C < B);
		}
		TEST_METHOD(isLessThanOrEqualTo_Test)
		{
			MusicObject A("A");
			MusicObject B1("B");
			MusicObject B2("B");
			MusicObject C("C");

			Assert::IsTrue(A <= B1);
			Assert::IsTrue(B1 <= B2);
			Assert::IsTrue(B2 <= C);
			Assert::IsFalse(C <= B2);
			Assert::IsTrue(B2 <= B1);
			Assert::IsFalse(B1 <= A);
		};
	};
};
