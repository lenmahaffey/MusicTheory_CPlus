#pragma once
#include "../../Music_Testing/pch.h"
#include "CppUnitTest.h"
#include "../../Music/src/Object.cpp"
#include "../../Music/src/Position.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;


namespace Object_Test
{
	TEST_CLASS(Constructor_Position_Test)
	{
		TEST_METHOD(NONE_ConstructorWithPosition_Test)
		{
			Object NONE = Object();
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::NONE;
			Assert::AreEqual((int)expected, (int)NONE.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(A_ConstructorWithPosition_Test)
		{
			Object A = Object(Music::Position::ChromaticScalePosition::A);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(AsBf_ConstructorWithPosition_Test)
		{
			Object AsBf = Object(Music::Position::ChromaticScalePosition::AsBf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(B_ConstructorWithPosition_Test)
		{
			Object B = Object(Music::Position::ChromaticScalePosition::B);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(C_ConstructorWithPosition_Test)
		{
			Object C = Object(Music::Position::ChromaticScalePosition::C);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(CsDf_ConstructorWithPosition_Test)
		{
			Object CsDf = Object(Music::Position::ChromaticScalePosition::CsDf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(D_ConstructorWithPosition_Test)
		{
			Object D = Object(Music::Position::ChromaticScalePosition::D);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(DsEf_ConstructorWithPosition_Test)
		{
			Object DsEf = Object(Music::Position::ChromaticScalePosition::DsEf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(E_ConstructorWithPosition_Test)
		{
			Object E = Object(Music::Position::ChromaticScalePosition::E);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(F_ConstructorWithPosition_Test)
		{
			Object F = Object(Music::Position::ChromaticScalePosition::F);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(FsGf_ConstructorWithPosition_Test)
		{
			Object FsGf = Object(Music::Position::ChromaticScalePosition::FsGf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(G_ConstructorWithPosition_Test)
		{
			Object G = Object(Music::Position::ChromaticScalePosition::G);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(GsAf_ConstructorWithPosition_Test)
		{
			Object GsAf = Object(Music::Position::ChromaticScalePosition::GsAf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.GetPosition().GetChromaticScalePosition());
		}
	};
	TEST_CLASS(Constructor_Int_Test)
	{
		TEST_METHOD(NONE_ConstructorWithInt_Test)
		{
			Object A = Object(0);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::NONE;
			Assert::AreEqual((int)expected, (int)A.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(A_ConstructorWithInt_Test)
		{
			Object A = Object(1);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(AsBf_ConstructorWithInt_Test)
		{
			Object AsBf = Object(2);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(B_ConstructorWithInt_Test)
		{
			Object B = Object(3);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(C_ConstructorWithInt_Test)
		{
			Object C = Object(4);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(CsDf_ConstructorWithInt_Test)
		{
			Object CsDf = Object(5);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(D_ConstructorWithInt_Test)
		{
			Object D = Object(6);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(DsEf_ConstructorWithInt_Test)
		{
			Object DsEf = Object(7);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(E_ConstructorWithInt_Test)
		{
			Object E = Object(8);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(F_ConstructorWithInt_Test)
		{
			Object F = Object(9);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(FsGf_ConstructorWithInt_Test)
		{
			Object FsGf = Object(10);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(G_ConstructorWithInt_Test)
		{
			Object G = Object(11);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(GsAf_ConstructorWithInt_Test)
		{
			Object GsAf = Object(12);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.GetPosition().GetChromaticScalePosition());
		}
	};
	TEST_CLASS(Constructor_String_Test)
	{
		TEST_METHOD(NONE_ConstructorWithString_Test)
		{
			Object NONE = Object("NONE");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::NONE;
			Assert::AreEqual((int)expected, (int)NONE.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(A_ConstructorWithString_Test)
		{
			Object A = Object("A");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(AsBf_ConstructorWithString_Test)
		{
			Object AsBf = Object("AsBf");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(B_ConstructorWithString_Test)
		{
			Object B = Object("B");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(C_ConstructorWithString_Test)
		{
			Object C = Object("C");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(CsDf_ConstructorWithString_Test)
		{
			Object CsDf = Object("CsDf");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(D_ConstructorWithString_Test)
		{
			Object D = Object("D");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(DsEf_ConstructorWithString_Test)
		{
			Object DsEf = Object("DsEf");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(E_ConstructorWithString_Test)
		{
			Object E = Object("E");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(F_ConstructorWithString_Test)
		{
			Object F = Object("F");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(FsGs_ConstructorWithString_Test)
		{
			Object FsGf = Object("FsGf");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(G_ConstructorWithString_Test)
		{
			Object G = Object("G");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(GsAf_ConstructorWithString_Test)
		{
			Object GsAf("GsAf");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.GetPosition().GetChromaticScalePosition());
		}
	};
	TEST_CLASS(getNameAsString_Test)
	{
		TEST_METHOD(NONE_getNameAsString_Test)
		{
			Object NONE = Object(Music::Position::ChromaticScalePosition::NONE);
			string expected = "NONE";
			Assert::AreEqual(expected, NONE.GetNameAsString());

		}
		TEST_METHOD(A_getNameAsString_Test)
		{
			Object A = Object(Music::Position::ChromaticScalePosition::A);
			string expected = "A";
			Assert::AreEqual(expected, A.GetNameAsString());

		}
		TEST_METHOD(AsBf_getNameAsString_Test)
		{
			Object AsBf = Object(Music::Position::ChromaticScalePosition::AsBf);
			string expected = "AsBf";
			Assert::AreEqual(expected, AsBf.GetNameAsString());

		}
		TEST_METHOD(B_getNameAsString_Test)
		{
			Object B = Object(Music::Position::ChromaticScalePosition::B);
			string expected = "B";
			Assert::AreEqual(expected, B.GetNameAsString());
		}
		TEST_METHOD(C_getNameAsString_Test)
		{
			Object C = Object(Music::Position::ChromaticScalePosition::C);
			string expected = "C";
			Assert::AreEqual(expected, C.GetNameAsString());
		}
		TEST_METHOD(CsDf_getNameAsString_Test)
		{
			Object CsDf = Object(Music::Position::ChromaticScalePosition::CsDf);
			string expected = "CsDf";
			Assert::AreEqual(expected, CsDf.GetNameAsString());

		}
		TEST_METHOD(D_getNameAsString_Test)
		{
			Object D = Object(Music::Position::ChromaticScalePosition::D);
			string expected = "D";
			Assert::AreEqual(expected, D.GetNameAsString());

		}
		TEST_METHOD(DsEf_getNameAsString_Test)
		{
			Object DsEf = Object(Music::Position::ChromaticScalePosition::DsEf);
			string expected = "DsEf";
			Assert::AreEqual(expected, DsEf.GetNameAsString());
		}
		TEST_METHOD(E_getNameAsString_Test)
		{
			Object E = Object(Music::Position::ChromaticScalePosition::E);
			string expected = "E";
			Assert::AreEqual(expected, E.GetNameAsString());

		}
		TEST_METHOD(F_getNameAsString_Test)
		{
			Object F = Object(Music::Position::ChromaticScalePosition::F);
			string expected = "F";
			Assert::AreEqual(expected, F.GetNameAsString());

		}
		TEST_METHOD(FsGf_getNameAsString_Test)
		{
			Object FsGf = Object(Music::Position::ChromaticScalePosition::FsGf);
			string expectedsGf = "FsGf";
			Assert::AreEqual(expectedsGf, FsGf.GetNameAsString());
		}
		TEST_METHOD(G_getNameAsString_Test)
		{
			Object G = Object(Music::Position::ChromaticScalePosition::G);
			string expected = "G";
			Assert::AreEqual(expected, G.GetNameAsString());

		}
		TEST_METHOD(GsAf_getNameAsString_Test)
		{
			Object GsAf = Object(Music::Position::ChromaticScalePosition::GsAf);
			string expected = "GsAf";
			Assert::AreEqual(expected, GsAf.GetNameAsString());
		}
	};
	TEST_CLASS(accendHalfStep_Test)
	{
		TEST_METHOD(A_goHalfStep_Test)
		{
			Object A = Object(Music::Position::ChromaticScalePosition::A);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;

			Object halfStepUpFromA = A.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromA.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(AsBf_goHalfStep_Test)
		{
			Object AsBf = Object(Music::Position::ChromaticScalePosition::AsBf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;

			Object halfStepUpFromAsBf = AsBf.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromAsBf.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(B_goHalfStep_Test)
		{
			Object B = Object(Music::Position::ChromaticScalePosition::B);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;

			Object halfStepUpFromB = B.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromB.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(C_goHalfStep_Test)
		{
			Object C = Object(Music::Position::ChromaticScalePosition::C);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;

			Object halfStepUpFromC = C.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromC.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(CsDf_goHalfStep_Test)
		{
			Object CsDf = Object(Music::Position::ChromaticScalePosition::CsDf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;

			Object halfStepUpFromCsDf = CsDf.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromCsDf.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(D_goHalfStep_Test)
		{
			Object D = Object(Music::Position::ChromaticScalePosition::D);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;

			Object halfStepUpFromD = D.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromD.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(DsEf_goHalfStep_Test)
		{
			Object DsEf = Object(Music::Position::ChromaticScalePosition::DsEf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;

			Object halfStepUpFromDsEf = DsEf.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromDsEf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(E_goHalfStep_Test)
		{
			Object E = Object(Music::Position::ChromaticScalePosition::E);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;

			Object halfStepUpFromE = E.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromE.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(F_goHalfStep_Test)
		{
			Object F = Object(Music::Position::ChromaticScalePosition::F);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;

			Object halfStepUpFromF = F.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromF.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(FsGf_ConstructorWithPosition_Test)
		{
			Object FsGf = Object(Music::Position::ChromaticScalePosition::FsGf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;

			Object halfStepUpFromFsGf = FsGf.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromFsGf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(G_goHalfStep_Test)
		{
			Object G = Object(Music::Position::ChromaticScalePosition::G);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;

			Object halfStepUpFromG = G.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromG.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(GsAf_goHalfStep_Test)
		{
			Object GsAf = Object(Music::Position::ChromaticScalePosition::GsAf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;

			Object halfStepUpFromGsAf = GsAf.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromGsAf.GetPosition().GetChromaticScalePosition());
		}
	};
	TEST_CLASS(accendFullStep_Test)
	{
		TEST_METHOD(A_goFullStep_Test)
		{
			Object A = Object(Music::Position::ChromaticScalePosition::A);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;

			Object fullStepUpFromA = A.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromA.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(AsBf_goFullStep_Test)
		{
			Object AsBf = Object(Music::Position::ChromaticScalePosition::AsBf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;

			Object fullStepUpFromAsBf = AsBf.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromAsBf.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(B_goFullStep_Test)
		{
			Object B = Object(Music::Position::ChromaticScalePosition::B);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;

			Object fullStepUpFromB = B.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromB.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(C_goFullStep_Test)
		{
			Object C = Object(Music::Position::ChromaticScalePosition::C);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;

			Object fullStepUpFromC = C.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromC.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(CsDf_goFullStep_Test)
		{
			Object CsDf = Object(Music::Position::ChromaticScalePosition::CsDf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;

			Object fullStepUpFromCsDf = CsDf.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromCsDf.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(D_goFullStep_Test)
		{
			Object D = Object(Music::Position::ChromaticScalePosition::D);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;

			Object fullStepUpFromD = D.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromD.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(DsEf_goFullStep_Test)
		{
			Object DsEf = Object(Music::Position::ChromaticScalePosition::DsEf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;

			Object fullStepUpFromDsEf = DsEf.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromDsEf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(E_goFullStep_Test)
		{
			Object E = Object(Music::Position::ChromaticScalePosition::E);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;

			Object fullStepUpFromE = E.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromE.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(F_goFullStep_Test)
		{
			Object F = Object(Music::Position::ChromaticScalePosition::F);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;

			Object fullStepUpFromF = F.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromF.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(FsGf_goFullStep_Test)
		{
			Object FsGf = Object(Music::Position::ChromaticScalePosition::FsGf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;

			Object fullStepUpFromFsGf = FsGf.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromFsGf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(G_goFullStep_Test)
		{
			Object G = Object(Music::Position::ChromaticScalePosition::G);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;

			Object fullStepUpFromG = G.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromG.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(GsAf_goFullStep_Test)
		{
			Object GsAf = Object(Music::Position::ChromaticScalePosition::GsAf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;

			Object fullStepUpFromGsAf = GsAf.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromGsAf.GetPosition().GetChromaticScalePosition());
		}
	};
	TEST_CLASS(accendStepAndAHalf_Test)
	{
		TEST_METHOD(A_goStepAndAHalf_Test)
		{
			Object A = Object(Music::Position::ChromaticScalePosition::A);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;

			Object stepAndAHalfUpFromA = A.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromA.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(AsBf_goStepAndAHalf_Test)
		{
			Object AsBf = Object(Music::Position::ChromaticScalePosition::AsBf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;

			Object stepAndAHalfUpFromAsBf = AsBf.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromAsBf.GetPosition().GetChromaticScalePosition());

		}
		TEST_METHOD(B_goStepAndAHalf_Test)
		{
			Object B = Object(Music::Position::ChromaticScalePosition::B);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;

			Object stepAndAHalfUpFromB = B.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromB.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(C_goStepAndAHalf_Test)
		{
			Object C = Object(Music::Position::ChromaticScalePosition::C);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;

			Object stepAndAHalfUpFromC = C.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromC.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(CsDf_goStepAndAHalf_Test)
		{
			Object CsDf = Object(Music::Position::ChromaticScalePosition::CsDf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;

			Object stepAndAHalfUpFromCsDf = CsDf.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromCsDf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(D_goStepAndAHalf_Test)
		{
			Object D = Object(Music::Position::ChromaticScalePosition::D);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;

			Object stepAndAHalfUpFromD = D.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromD.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(DsEf_goStepAndAHalf_Test)
		{
			Object DsEf = Object(Music::Position::ChromaticScalePosition::DsEf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;

			Object stepAndAHalfUpFromDsEf = DsEf.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromDsEf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(E_goStepAndAHalf_Test)
		{
			Object E = Object(Music::Position::ChromaticScalePosition::E);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;

			Object stepAndAHalfUpFromE = E.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromE.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(F_goStepAndAHalf_Test)
		{
			Object F = Object(Music::Position::ChromaticScalePosition::F);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;

			Object stepAndAHalfUpFromF = F.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromF.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(FsGf_goStepAndAHalf_Test)
		{
			Object FsGf = Object(Music::Position::ChromaticScalePosition::FsGf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;

			Object stepAndAHalfUpFromFsGf = FsGf.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromFsGf.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(G_goStepAndAHalf_Test)
		{
			Object G = Object(Music::Position::ChromaticScalePosition::G);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;

			Object stepAndAHalfUpFromG = G.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromG.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(GsAf_goStepAndAHalf_Test)
		{
			Object GsAf = Object(Music::Position::ChromaticScalePosition::GsAf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;

			Object stepAndAHalfUpFromGsAf = GsAf.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromGsAf.GetPosition().GetChromaticScalePosition());
		}
	};
	TEST_CLASS(getPositionAsString_Test)
	{
		TEST_METHOD(NONE_getPositionAsString_Test)
		{
			Object NONE = Object(Music::Position::ChromaticScalePosition::NONE);
			string expected = "NONE";
			Assert::AreEqual(expected, NONE.GetNameAsString());
		}
		TEST_METHOD(A_getPositionAsString_Test)
		{
			Object A = Object(Music::Position::ChromaticScalePosition::A);
			string expected = "A";
			Assert::AreEqual(expected, A.GetNameAsString());
		}
		TEST_METHOD(AsBf_getPositionAsString_Test)
		{
			Object AsBf = Object(Music::Position::ChromaticScalePosition::AsBf);
			string expected = "AsBf";
			Assert::AreEqual(expected, AsBf.GetNameAsString());
		}
		TEST_METHOD(B_getPositionAsString_Test)
		{
			Object B = Object(Music::Position::ChromaticScalePosition::B);
			string expected = "B";
			Assert::AreEqual(expected, B.GetNameAsString());
		}
		TEST_METHOD(C_getPositionAsString_Test)
		{
			Object C = Object(Music::Position::ChromaticScalePosition::C);
			string expected = "C";
			Assert::AreEqual(expected, C.GetNameAsString());
		}
		TEST_METHOD(CsDf_getPositionAsString_Test)
		{
			Object CsDf = Object(Music::Position::ChromaticScalePosition::CsDf);
			string expected = "CsDf";
			Assert::AreEqual(expected, CsDf.GetNameAsString());
		}
		TEST_METHOD(D_getPositionAsString_Test)
		{
			Object D = Object(Music::Position::ChromaticScalePosition::D);
			string expected = "D";
			Assert::AreEqual(expected, D.GetNameAsString());
		}
		TEST_METHOD(DsEf_getPositionAsString_Test)
		{
			Object DsEf = Object(Music::Position::ChromaticScalePosition::DsEf);
			string expected = "DsEf";
			Assert::AreEqual(expected, DsEf.GetNameAsString());
		}
		TEST_METHOD(E_getPositionAsString_Test)
		{
			Object E = Object(Music::Position::ChromaticScalePosition::E);
			string expected = "E";
			Assert::AreEqual(expected, E.GetNameAsString());
		}
		TEST_METHOD(F_getPositionAsString_Test)
		{
			Object F = Object(Music::Position::ChromaticScalePosition::F);
			string expected = "F";
			Assert::AreEqual(expected, F.GetNameAsString());
		}
		TEST_METHOD(FsGf_getPositionAsString_Test)
		{
			Object FsGf = Object(Music::Position::ChromaticScalePosition::FsGf);
			string expected = "FsGf";
			Assert::AreEqual(expected, FsGf.GetNameAsString());
		}
		TEST_METHOD(G_getPositionAsString_Test)
		{
			Object G = Object(Music::Position::ChromaticScalePosition::G);
			string expected = "G";
			Assert::AreEqual(expected, G.GetNameAsString());
		}
		TEST_METHOD(GsAf_getPositionAsString_Test)
		{
			Object GsAf = Object(Music::Position::ChromaticScalePosition::GsAf);
			string expected = "GsAf";
			Assert::AreEqual(expected, GsAf.GetNameAsString());
		}
	};
	TEST_CLASS(Operator_Test)
	{
		TEST_METHOD(preIncrement_Test)
		{
			Object B("B");
			Object during;
			Object expectedBefore = Object("B");
			Object expectedDuring = Object("C");
			Object expectedAfter = Object("C");

			Assert::AreEqual((int)expectedBefore.GetPosition().GetChromaticScalePosition(), (int)B.GetPosition().GetChromaticScalePosition());
			during = ++B;
			Assert::AreEqual((int)expectedAfter.GetPosition().GetChromaticScalePosition(), (int)during.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual((int)expectedAfter.GetPosition().GetChromaticScalePosition(), (int)B.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(postIncrement_Test)
		{
			Object B("B");
			Object during;
			Object expectedBefore = Object("B");
			Object expectedDuring = Object("B");
			Object expectedAfter = Object("C");

			Assert::AreEqual((int)expectedBefore.GetPosition().GetChromaticScalePosition(), (int)B.GetPosition().GetChromaticScalePosition());
			during = B++;
			Assert::AreEqual((int)expectedBefore.GetPosition().GetChromaticScalePosition(), (int)during.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual((int)expectedAfter.GetPosition().GetChromaticScalePosition(), (int)B.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(preDeincrement_Test)
		{
			Object C("C");
			Object during;
			Object expectedBefore = Object("C");
			Object expectedDuring = Object("C");
			Object expectedAfter = Object("B");

			Assert::AreEqual((int)expectedBefore.GetPosition().GetChromaticScalePosition(), (int)C.GetPosition().GetChromaticScalePosition());
			during = --C;
			Assert::AreEqual((int)expectedAfter.GetPosition().GetChromaticScalePosition(), (int)during.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual((int)expectedAfter.GetPosition().GetChromaticScalePosition(), (int)C.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(postDeIncrement_Test)
		{
			Object C("C");
			Object during;
			Object expectedBefore = Object("C");
			Object expectedDuring = Object("B");
			Object expectedAfter = Object("B");

			Assert::AreEqual((int)expectedBefore.GetPosition().GetChromaticScalePosition(), (int)C.GetPosition().GetChromaticScalePosition());
			during = C--;
			Assert::AreEqual((int)expectedBefore.GetPosition().GetChromaticScalePosition(), (int)during.GetPosition().GetChromaticScalePosition());
			Assert::AreEqual((int)expectedAfter.GetPosition().GetChromaticScalePosition(), (int)C.GetPosition().GetChromaticScalePosition());
		}
		TEST_METHOD(isEqualOperator_Test)
		{
			Object A("A");
			Object B1("B");
			Object B2("B");
			Object C("C");

			Assert::IsFalse(A == B1);
			Assert::IsTrue(B1 == B2);
			Assert::IsTrue(B2 == B1);
			Assert::IsTrue(A == A);
			Assert::IsTrue(B1 == B2);
			Assert::IsFalse(B2 == C);
		}
		TEST_METHOD(isNotEqualOperator_Test)
		{
			Object A("A");
			Object B1("B");
			Object B2("B");
			Object C("C");

			Assert::IsTrue(A != B1);
			Assert::IsFalse(B1 != B2);
			Assert::IsFalse(B2 != B1);
			Assert::IsFalse(A != A);
			Assert::IsFalse(B1 != B2);
			Assert::IsTrue(B2 != C);
		}
		TEST_METHOD(isGreaterThan_Test)
		{
			Object A("A");
			Object B("B");
			Object C("C");

			Assert::IsTrue(C > B);
			Assert::IsTrue(B > A);
			Assert::IsFalse(B > C);
			Assert::IsFalse(A > B);
		}
		TEST_METHOD(isGreaterThanOrEqual_Test)
		{
			Object A("A");
			Object B1("B");
			Object B2("B");
			Object C("C");

			Assert::IsTrue(C >= B2);
			Assert::IsTrue(B2 >= B1);
			Assert::IsTrue(B1 >= A);
			Assert::IsFalse(B2 >= C);
			Assert::IsTrue(B1 >= B2);
			Assert::IsFalse(A >= B1);
		}
		TEST_METHOD(isLessThan_Test)
		{
			Object A("A");
			Object B("B");
			Object C("C");

			Assert::IsTrue(A < B);
			Assert::IsFalse(C < B);
		}
		TEST_METHOD(isLessThanOrEqualTo_Test)
		{
			Object A("A");
			Object B1("B");
			Object B2("B");
			Object C("C");

			Assert::IsTrue(A <= B1);
			Assert::IsTrue(B1 <= B2);
			Assert::IsTrue(B2 <= C);
			Assert::IsFalse(C <= B2);
			Assert::IsTrue(B2 <= B1);
			Assert::IsFalse(B1 <= A);
		};
	};
};
