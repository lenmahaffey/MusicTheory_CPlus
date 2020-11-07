#pragma once
#include "../pch.h"
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
			Object NONE = Object(Music::Position::ChromaticScalePosition::NONE);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::NONE;
			Assert::AreEqual((int)expected, (int)NONE.getPosition());

		}
		TEST_METHOD(A_ConstructorWithPosition_Test)
		{
			Object A = Object(Music::Position::ChromaticScalePosition::A);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.getPosition());

		}
		TEST_METHOD(AsBf_ConstructorWithPosition_Test)
		{
			Object AsBf = Object(Music::Position::ChromaticScalePosition::AsBf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.getPosition());

		}
		TEST_METHOD(B_ConstructorWithPosition_Test)
		{
			Object B = Object(Music::Position::ChromaticScalePosition::B);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.getPosition());
		}
		TEST_METHOD(C_ConstructorWithPosition_Test)
		{
			Object C = Object(Music::Position::ChromaticScalePosition::C);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.getPosition());
		}
		TEST_METHOD(CsDf_ConstructorWithPosition_Test)
		{
			Object CsDf = Object(Music::Position::ChromaticScalePosition::CsDf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.getPosition());

		}
		TEST_METHOD(D_ConstructorWithPosition_Test)
		{
			Object D = Object(Music::Position::ChromaticScalePosition::D);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.getPosition());

		}
		TEST_METHOD(DsEf_ConstructorWithPosition_Test)
		{
			Object DsEf = Object(Music::Position::ChromaticScalePosition::DsEf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.getPosition());
		}
		TEST_METHOD(E_ConstructorWithPosition_Test)
		{
			Object E = Object(Music::Position::ChromaticScalePosition::E);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.getPosition());

		}
		TEST_METHOD(F_ConstructorWithPosition_Test)
		{
			Object F = Object(Music::Position::ChromaticScalePosition::F);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.getPosition());

		}
		TEST_METHOD(FsGf_ConstructorWithPosition_Test)
		{
			Object FsGf = Object(Music::Position::ChromaticScalePosition::FsGf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.getPosition());
		}
		TEST_METHOD(G_ConstructorWithPosition_Test)
		{
			Object G = Object(Music::Position::ChromaticScalePosition::G);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.getPosition());

		}
		TEST_METHOD(GsAf_ConstructorWithPosition_Test)
		{
			Object GsAf = Object(Music::Position::ChromaticScalePosition::GsAf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.getPosition());
		}
	};
	TEST_CLASS(Constructor_Int_Test)
	{
		TEST_METHOD(NONE_ConstructorWithInt_Test)
		{
			Object A = Object(0);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::NONE;
			Assert::AreEqual((int)expected, (int)A.getPosition());
		}
		TEST_METHOD(A_ConstructorWithInt_Test)
		{
			Object A = Object(1);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.getPosition());
		}
		TEST_METHOD(AsBf_ConstructorWithInt_Test)
		{
			Object AsBf = Object(2);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.getPosition());
		}
		TEST_METHOD(B_ConstructorWithInt_Test)
		{
			Object B = Object(3);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.getPosition());
		}
		TEST_METHOD(C_ConstructorWithInt_Test)
		{
			Object C = Object(4);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.getPosition());
		}
		TEST_METHOD(CsDf_ConstructorWithInt_Test)
		{
			Object CsDf = Object(5);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.getPosition());

		}
		TEST_METHOD(D_ConstructorWithInt_Test)
		{
			Object D = Object(6);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.getPosition());

		}
		TEST_METHOD(DsEf_ConstructorWithInt_Test)
		{
			Object DsEf = Object(7);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.getPosition());
		}
		TEST_METHOD(E_ConstructorWithInt_Test)
		{
			Object E = Object(8);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.getPosition());

		}
		TEST_METHOD(F_ConstructorWithInt_Test)
		{
			Object F = Object(9);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.getPosition());

		}
		TEST_METHOD(FsGf_ConstructorWithInt_Test)
		{
			Object FsGf = Object(10);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.getPosition());
		}
		TEST_METHOD(G_ConstructorWithInt_Test)
		{
			Object G = Object(11);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.getPosition());

		}
		TEST_METHOD(GsAf_ConstructorWithInt_Test)
		{
			Object GsAf = Object(12);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.getPosition());
		}
	};
	TEST_CLASS(Constructor_String_Test)
	{
		TEST_METHOD(NONE_ConstructorWithInt_Test)
		{
			Object NONE = Object("NONE");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::NONE;
			Assert::AreEqual((int)expected, (int)NONE.getPosition());
		}
		TEST_METHOD(A_ConstructorWithInt_Test)
		{
			Object A = Object("A");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.getPosition());
		}
		TEST_METHOD(AsBf_ConstructorWithInt_Test)
		{
			Object AsBf = Object("AsBf");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.getPosition());
		}
		TEST_METHOD(B_ConstructorWithInt_Test)
		{
			Object B = Object("B");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.getPosition());
		}
		TEST_METHOD(C_ConstructorWithInt_Test)
		{
			Object C = Object("C");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.getPosition());
		}
		TEST_METHOD(CsDf_ConstructorWithInt_Test)
		{
			Object CsDf = Object("CsDf");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.getPosition());
		}
		TEST_METHOD(D_ConstructorWithInt_Test)
		{
			Object D = Object("D");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.getPosition());
		}
		TEST_METHOD(DsEf_ConstructorWithInt_Test)
		{
			Object DsEf = Object("DsEf");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.getPosition());
		}
		TEST_METHOD(E_ConstructorWithInt_Test)
		{
			Object E = Object("E");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.getPosition());
		}
		TEST_METHOD(F_ConstructorWithInt_Test)
		{
			Object F = Object("F");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.getPosition());
		}
		TEST_METHOD(FsGs_ConstructorWithInt_Test)
		{
			Object FsGf = Object("FsGf");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.getPosition());
		}
		TEST_METHOD(G_ConstructorWithInt_Test)
		{
			Object G = Object("G");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.getPosition());
		}
		TEST_METHOD(GsAf_ConstructorWithInt_Test)
		{
			Object GsAf("GsAf");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.getPosition());
		}
	};
	TEST_CLASS(getNameAsString_Test)
	{
		TEST_METHOD(NONE_getNameAsString_Test)
		{
			Object NONE = Object(Music::Position::ChromaticScalePosition::NONE);
			string expected = "NONE";
			Assert::AreEqual(expected, NONE.getNameAsString());

		}
		TEST_METHOD(A_getNameAsString_Test)
		{
			Object A = Object(Music::Position::ChromaticScalePosition::A);
			string expected = "A";
			Assert::AreEqual(expected, A.getNameAsString());

		}
		TEST_METHOD(AsBf_getNameAsString_Test)
		{
			Object AsBf = Object(Music::Position::ChromaticScalePosition::AsBf);
			string expected = "AsBf";
			Assert::AreEqual(expected, AsBf.getNameAsString());

		}
		TEST_METHOD(B_getNameAsString_Test)
		{
			Object B = Object(Music::Position::ChromaticScalePosition::B);
			string expected = "B";
			Assert::AreEqual(expected, B.getNameAsString());
		}
		TEST_METHOD(C_getNameAsString_Test)
		{
			Object C = Object(Music::Position::ChromaticScalePosition::C);
			string expected = "C";
			Assert::AreEqual(expected, C.getNameAsString());
		}
		TEST_METHOD(CsDf_getNameAsString_Test)
		{
			Object CsDf = Object(Music::Position::ChromaticScalePosition::CsDf);
			string expected = "CsDf";
			Assert::AreEqual(expected, CsDf.getNameAsString());

		}
		TEST_METHOD(D_getNameAsString_Test)
		{
			Object D = Object(Music::Position::ChromaticScalePosition::D);
			string expected = "D";
			Assert::AreEqual(expected, D.getNameAsString());

		}
		TEST_METHOD(DsEf_getNameAsString_Test)
		{
			Object DsEf = Object(Music::Position::ChromaticScalePosition::DsEf);
			string expected = "DsEf";
			Assert::AreEqual(expected, DsEf.getNameAsString());
		}
		TEST_METHOD(E_getNameAsString_Test)
		{
			Object E = Object(Music::Position::ChromaticScalePosition::E);
			string expected = "E";
			Assert::AreEqual(expected, E.getNameAsString());

		}
		TEST_METHOD(F_getNameAsString_Test)
		{
			Object F = Object(Music::Position::ChromaticScalePosition::F);
			string expected = "F";
			Assert::AreEqual(expected, F.getNameAsString());

		}
		TEST_METHOD(FsGf_getNameAsString_Test)
		{
			Object FsGf = Object(Music::Position::ChromaticScalePosition::FsGf);
			string expectedsGf = "FsGf";
			Assert::AreEqual(expectedsGf, FsGf.getNameAsString());
		}
		TEST_METHOD(G_getNameAsString_Test)
		{
			Object G = Object(Music::Position::ChromaticScalePosition::G);
			string expected = "G";
			Assert::AreEqual(expected, G.getNameAsString());

		}
		TEST_METHOD(GsAf_getNameAsString_Test)
		{
			Object GsAf = Object(Music::Position::ChromaticScalePosition::GsAf);
			string expected = "GsAf";
			Assert::AreEqual(expected, GsAf.getNameAsString());
		}
	};
	TEST_CLASS(accendHalfStep_Test)
	{
		TEST_METHOD(A_goHalfStep_Test)
		{
			Object A = Object(Music::Position::ChromaticScalePosition::A);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;

			Object halfStepUpFromA = A.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromA.getPosition());

		}
		TEST_METHOD(AsBf_goHalfStep_Test)
		{
			Object AsBf = Object(Music::Position::ChromaticScalePosition::AsBf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;

			Object halfStepUpFromAsBf = AsBf.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromAsBf.getPosition());

		}
		TEST_METHOD(B_goHalfStep_Test)
		{
			Object B = Object(Music::Position::ChromaticScalePosition::B);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;

			Object halfStepUpFromB = B.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromB.getPosition());
		}
		TEST_METHOD(C_goHalfStep_Test)
		{
			Object C = Object(Music::Position::ChromaticScalePosition::C);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;

			Object halfStepUpFromC = C.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromC.getPosition());
		}
		TEST_METHOD(CsDf_goHalfStep_Test)
		{
			Object CsDf = Object(Music::Position::ChromaticScalePosition::CsDf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;

			Object halfStepUpFromCsDf = CsDf.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromCsDf.getPosition());

		}
		TEST_METHOD(D_goHalfStep_Test)
		{
			Object D = Object(Music::Position::ChromaticScalePosition::D);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;

			Object halfStepUpFromD = D.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromD.getPosition());

		}
		TEST_METHOD(DsEf_goHalfStep_Test)
		{
			Object DsEf = Object(Music::Position::ChromaticScalePosition::DsEf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;

			Object halfStepUpFromDsEf = DsEf.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromDsEf.getPosition());
		}
		TEST_METHOD(E_goHalfStep_Test)
		{
			Object E = Object(Music::Position::ChromaticScalePosition::E);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;

			Object halfStepUpFromE = E.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromE.getPosition());

		}
		TEST_METHOD(F_goHalfStep_Test)
		{
			Object F = Object(Music::Position::ChromaticScalePosition::F);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;

			Object halfStepUpFromF = F.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromF.getPosition());

		}
		TEST_METHOD(FsGf_ConstructorWithPosition_Test)
		{
			Object FsGf = Object(Music::Position::ChromaticScalePosition::FsGf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;

			Object halfStepUpFromFsGf = FsGf.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromFsGf.getPosition());
		}
		TEST_METHOD(G_goHalfStep_Test)
		{
			Object G = Object(Music::Position::ChromaticScalePosition::G);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;

			Object halfStepUpFromG = G.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromG.getPosition());

		}
		TEST_METHOD(GsAf_goHalfStep_Test)
		{
			Object GsAf = Object(Music::Position::ChromaticScalePosition::GsAf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;

			Object halfStepUpFromGsAf = GsAf.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromGsAf.getPosition());
		}
	};
	TEST_CLASS(accendFullStep_Test)
	{
		TEST_METHOD(A_goFullStep_Test)
		{
			Object A = Object(Music::Position::ChromaticScalePosition::A);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;

			Object fullStepUpFromA = A.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromA.getPosition());

		}
		TEST_METHOD(AsBf_goFullStep_Test)
		{
			Object AsBf = Object(Music::Position::ChromaticScalePosition::AsBf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;

			Object fullStepUpFromAsBf = AsBf.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromAsBf.getPosition());

		}
		TEST_METHOD(B_goFullStep_Test)
		{
			Object B = Object(Music::Position::ChromaticScalePosition::B);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;

			Object fullStepUpFromB = B.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromB.getPosition());
		}
		TEST_METHOD(C_goFullStep_Test)
		{
			Object C = Object(Music::Position::ChromaticScalePosition::C);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;

			Object fullStepUpFromC = C.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromC.getPosition());
		}
		TEST_METHOD(CsDf_goFullStep_Test)
		{
			Object CsDf = Object(Music::Position::ChromaticScalePosition::CsDf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;

			Object fullStepUpFromCsDf = CsDf.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromCsDf.getPosition());

		}
		TEST_METHOD(D_goFullStep_Test)
		{
			Object D = Object(Music::Position::ChromaticScalePosition::D);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;

			Object fullStepUpFromD = D.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromD.getPosition());

		}
		TEST_METHOD(DsEf_goFullStep_Test)
		{
			Object DsEf = Object(Music::Position::ChromaticScalePosition::DsEf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;

			Object fullStepUpFromDsEf = DsEf.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromDsEf.getPosition());
		}
		TEST_METHOD(E_goFullStep_Test)
		{
			Object E = Object(Music::Position::ChromaticScalePosition::E);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;

			Object fullStepUpFromE = E.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromE.getPosition());

		}
		TEST_METHOD(F_goFullStep_Test)
		{
			Object F = Object(Music::Position::ChromaticScalePosition::F);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;

			Object fullStepUpFromF = F.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromF.getPosition());

		}
		TEST_METHOD(FsGf_goFullStep_Test)
		{
			Object FsGf = Object(Music::Position::ChromaticScalePosition::FsGf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;

			Object fullStepUpFromFsGf = FsGf.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromFsGf.getPosition());
		}
		TEST_METHOD(G_goFullStep_Test)
		{
			Object G = Object(Music::Position::ChromaticScalePosition::G);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;

			Object fullStepUpFromG = G.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromG.getPosition());

		}
		TEST_METHOD(GsAf_goFullStep_Test)
		{
			Object GsAf = Object(Music::Position::ChromaticScalePosition::GsAf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;

			Object fullStepUpFromGsAf = GsAf.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromGsAf.getPosition());
		}
	};
	TEST_CLASS(accendStepAndAHalf_Test)
	{
		TEST_METHOD(A_goStepAndAHalf_Test)
		{
			Object A = Object(Music::Position::ChromaticScalePosition::A);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;

			Object stepAndAHalfUpFromA = A.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromA.getPosition());

		}
		TEST_METHOD(AsBf_goStepAndAHalf_Test)
		{
			Object AsBf = Object(Music::Position::ChromaticScalePosition::AsBf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;

			Object stepAndAHalfUpFromAsBf = AsBf.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromAsBf.getPosition());

		}
		TEST_METHOD(B_goStepAndAHalf_Test)
		{
			Object B = Object(Music::Position::ChromaticScalePosition::B);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;

			Object stepAndAHalfUpFromB = B.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromB.getPosition());
		}
		TEST_METHOD(C_goStepAndAHalf_Test)
		{
			Object C = Object(Music::Position::ChromaticScalePosition::C);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;

			Object stepAndAHalfUpFromC = C.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromC.getPosition());
		}
		TEST_METHOD(CsDf_goStepAndAHalf_Test)
		{
			Object CsDf = Object(Music::Position::ChromaticScalePosition::CsDf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;

			Object stepAndAHalfUpFromCsDf = CsDf.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromCsDf.getPosition());
		}
		TEST_METHOD(D_goStepAndAHalf_Test)
		{
			Object D = Object(Music::Position::ChromaticScalePosition::D);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;

			Object stepAndAHalfUpFromD = D.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromD.getPosition());
		}
		TEST_METHOD(DsEf_goStepAndAHalf_Test)
		{
			Object DsEf = Object(Music::Position::ChromaticScalePosition::DsEf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;

			Object stepAndAHalfUpFromDsEf = DsEf.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromDsEf.getPosition());
		}
		TEST_METHOD(E_goStepAndAHalf_Test)
		{
			Object E = Object(Music::Position::ChromaticScalePosition::E);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;

			Object stepAndAHalfUpFromE = E.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromE.getPosition());
		}
		TEST_METHOD(F_goStepAndAHalf_Test)
		{
			Object F = Object(Music::Position::ChromaticScalePosition::F);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;

			Object stepAndAHalfUpFromF = F.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromF.getPosition());
		}
		TEST_METHOD(FsGf_goStepAndAHalf_Test)
		{
			Object FsGf = Object(Music::Position::ChromaticScalePosition::FsGf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;

			Object stepAndAHalfUpFromFsGf = FsGf.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromFsGf.getPosition());
		}
		TEST_METHOD(G_goStepAndAHalf_Test)
		{
			Object G = Object(Music::Position::ChromaticScalePosition::G);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;

			Object stepAndAHalfUpFromG = G.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromG.getPosition());
		}
		TEST_METHOD(GsAf_goStepAndAHalf_Test)
		{
			Object GsAf = Object(Music::Position::ChromaticScalePosition::GsAf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;

			Object stepAndAHalfUpFromGsAf = GsAf.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromGsAf.getPosition());
		}
	};
	TEST_CLASS(getPositionAsString_Test)
	{
		TEST_METHOD(NONE_getPositionAsString_Test)
		{
			Object NONE = Object(Music::Position::ChromaticScalePosition::NONE);
			string expected = "NONE";
			Assert::AreEqual(expected, NONE.getNameAsString());
		}
		TEST_METHOD(A_getPositionAsString_Test)
		{
			Object A = Object(Music::Position::ChromaticScalePosition::A);
			string expected = "A";
			Assert::AreEqual(expected, A.getNameAsString());
		}
		TEST_METHOD(AsBf_getPositionAsString_Test)
		{
			Object AsBf = Object(Music::Position::ChromaticScalePosition::AsBf);
			string expected = "AsBf";
			Assert::AreEqual(expected, AsBf.getNameAsString());
		}
		TEST_METHOD(B_getPositionAsString_Test)
		{
			Object B = Object(Music::Position::ChromaticScalePosition::B);
			string expected = "B";
			Assert::AreEqual(expected, B.getNameAsString());
		}
		TEST_METHOD(C_getPositionAsString_Test)
		{
			Object C = Object(Music::Position::ChromaticScalePosition::C);
			string expected = "C";
			Assert::AreEqual(expected, C.getNameAsString());
		}
		TEST_METHOD(CsDf_getPositionAsString_Test)
		{
			Object CsDf = Object(Music::Position::ChromaticScalePosition::CsDf);
			string expected = "CsDf";
			Assert::AreEqual(expected, CsDf.getNameAsString());
		}
		TEST_METHOD(D_getPositionAsString_Test)
		{
			Object D = Object(Music::Position::ChromaticScalePosition::D);
			string expected = "D";
			Assert::AreEqual(expected, D.getNameAsString());
		}
		TEST_METHOD(DsEf_getPositionAsString_Test)
		{
			Object DsEf = Object(Music::Position::ChromaticScalePosition::DsEf);
			string expected = "DsEf";
			Assert::AreEqual(expected, DsEf.getNameAsString());
		}
		TEST_METHOD(E_getPositionAsString_Test)
		{
			Object E = Object(Music::Position::ChromaticScalePosition::E);
			string expected = "E";
			Assert::AreEqual(expected, E.getNameAsString());
		}
		TEST_METHOD(F_getPositionAsString_Test)
		{
			Object F = Object(Music::Position::ChromaticScalePosition::F);
			string expected = "F";
			Assert::AreEqual(expected, F.getNameAsString());
		}
		TEST_METHOD(FsGf_getPositionAsString_Test)
		{
			Object FsGf = Object(Music::Position::ChromaticScalePosition::FsGf);
			string expected = "FsGf";
			Assert::AreEqual(expected, FsGf.getNameAsString());
		}
		TEST_METHOD(G_getPositionAsString_Test)
		{
			Object G = Object(Music::Position::ChromaticScalePosition::G);
			string expected = "G";
			Assert::AreEqual(expected, G.getNameAsString());
		}
		TEST_METHOD(GsAf_getPositionAsString_Test)
		{
			Object GsAf = Object(Music::Position::ChromaticScalePosition::GsAf);
			string expected = "GsAf";
			Assert::AreEqual(expected, GsAf.getNameAsString());
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

			Assert::AreEqual((int)expectedBefore.getPosition(), (int)B.getPosition());
			during = ++B;
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)during.getPosition());
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)B.getPosition());
		}
		TEST_METHOD(postIncrement_Test)
		{
			Object B("B");
			Object during;
			Object expectedBefore = Object("B");
			Object expectedDuring = Object("B");
			Object expectedAfter = Object("C");

			Assert::AreEqual((int)expectedBefore.getPosition(), (int)B.getPosition());
			during = B++;
			Assert::AreEqual((int)expectedBefore.getPosition(), (int)during.getPosition());
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)B.getPosition());
		}
		TEST_METHOD(preDeincrement_Test)
		{
			Object C("C");
			Object during;
			Object expectedBefore = Object("C");
			Object expectedDuring = Object("C");
			Object expectedAfter = Object("B");

			Assert::AreEqual((int)expectedBefore.getPosition(), (int)C.getPosition());
			during = --C;
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)during.getPosition());
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)C.getPosition());
		}
		TEST_METHOD(postDeIncrement_Test)
		{
			Object C("C");
			Object during;
			Object expectedBefore = Object("C");
			Object expectedDuring = Object("B");
			Object expectedAfter = Object("B");

			Assert::AreEqual((int)expectedBefore.getPosition(), (int)C.getPosition());
			during = C--;
			Assert::AreEqual((int)expectedBefore.getPosition(), (int)during.getPosition());
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)C.getPosition());
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
