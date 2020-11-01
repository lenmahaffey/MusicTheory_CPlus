#pragma once
#include "pch.h"
#include "CppUnitTest.h"
#include "../Music/src/Object.cpp"




using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Object_Test
{
	TEST_CLASS(Constructor_Position_Test)
	{
		TEST_METHOD(NONE_ConstructorWithPosition_Test)
		{
			Object NONE = Object(ChromaticScalePosition::NONE);
			ChromaticScalePosition expected = ChromaticScalePosition::NONE;
			Assert::AreEqual((int)expected, (int)NONE.getPosition());

		}
		TEST_METHOD(A_ConstructorWithPosition_Test)
		{
			Object A = Object(ChromaticScalePosition::A);
			ChromaticScalePosition expected = ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.getPosition());

		}
		TEST_METHOD(AsBf_ConstructorWithPosition_Test)
		{
			Object AsBf = Object(ChromaticScalePosition::AsBf);
			ChromaticScalePosition expected = ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.getPosition());

		}
		TEST_METHOD(B_ConstructorWithPosition_Test)
		{
			Object B = Object(ChromaticScalePosition::B);
			ChromaticScalePosition expected = ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.getPosition());
		}
		TEST_METHOD(C_ConstructorWithPosition_Test)
		{
			Object C = Object(ChromaticScalePosition::C);
			ChromaticScalePosition expected = ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.getPosition());
		}
		TEST_METHOD(CsDf_ConstructorWithPosition_Test)
		{
			Object CsDf = Object(ChromaticScalePosition::CsDf);
			ChromaticScalePosition expected = ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.getPosition());

		}
		TEST_METHOD(D_ConstructorWithPosition_Test)
		{
			Object D = Object(ChromaticScalePosition::D);
			ChromaticScalePosition expected = ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.getPosition());

		}
		TEST_METHOD(DsEf_ConstructorWithPosition_Test)
		{
			Object DsEf = Object(ChromaticScalePosition::DsEf);
			ChromaticScalePosition expected = ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.getPosition());
		}
		TEST_METHOD(E_ConstructorWithPosition_Test)
		{
			Object E = Object(ChromaticScalePosition::E);
			ChromaticScalePosition expected = ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.getPosition());

		}
		TEST_METHOD(F_ConstructorWithPosition_Test)
		{
			Object F = Object(ChromaticScalePosition::F);
			ChromaticScalePosition expected = ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.getPosition());

		}
		TEST_METHOD(FsGf_ConstructorWithPosition_Test)
		{
			Object FsGf = Object(ChromaticScalePosition::FsGf);
			ChromaticScalePosition expected = ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.getPosition());
		}
		TEST_METHOD(G_ConstructorWithPosition_Test)
		{
			Object G = Object(ChromaticScalePosition::G);
			ChromaticScalePosition expected = ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.getPosition());

		}
		TEST_METHOD(GsAf_ConstructorWithPosition_Test)
		{
			Object GsAf = Object(ChromaticScalePosition::GsAf);
			ChromaticScalePosition expected = ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.getPosition());
		}
	};
	TEST_CLASS(Constructor_Int_Test)
	{
		TEST_METHOD(NONE_ConstructorWithInt_Test)
		{
			Object A = Object(0);
			ChromaticScalePosition expected = ChromaticScalePosition::NONE;
			Assert::AreEqual((int)expected, (int)A.getPosition());
		}
		TEST_METHOD(A_ConstructorWithInt_Test)
		{
			Object A = Object(1);
			ChromaticScalePosition expected = ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.getPosition());
		}
		TEST_METHOD(AsBf_ConstructorWithInt_Test)
		{
			Object AsBf = Object(2);
			ChromaticScalePosition expected = ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.getPosition());
		}
		TEST_METHOD(B_ConstructorWithInt_Test)
		{
			Object B = Object(3);
			ChromaticScalePosition expected = ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.getPosition());
		}
		TEST_METHOD(C_ConstructorWithInt_Test)
		{
			Object C = Object(4);
			ChromaticScalePosition expected = ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.getPosition());
		}
		TEST_METHOD(CsDf_ConstructorWithInt_Test)
		{
			Object CsDf = Object(5);
			ChromaticScalePosition expected = ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.getPosition());

		}
		TEST_METHOD(D_ConstructorWithInt_Test)
		{
			Object D = Object(6);
			ChromaticScalePosition expected = ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.getPosition());

		}
		TEST_METHOD(DsEf_ConstructorWithInt_Test)
		{
			Object DsEf = Object(7);
			ChromaticScalePosition expected = ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.getPosition());
		}
		TEST_METHOD(E_ConstructorWithInt_Test)
		{
			Object E = Object(8);
			ChromaticScalePosition expected = ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.getPosition());

		}
		TEST_METHOD(F_ConstructorWithInt_Test)
		{
			Object F = Object(9);
			ChromaticScalePosition expected = ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.getPosition());

		}
		TEST_METHOD(FsGf_ConstructorWithInt_Test)
		{
			Object FsGf = Object(10);
			ChromaticScalePosition expected = ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.getPosition());
		}
		TEST_METHOD(G_ConstructorWithInt_Test)
		{
			Object G = Object(11);
			ChromaticScalePosition expected = ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.getPosition());

		}
		TEST_METHOD(GsAf_ConstructorWithInt_Test)
		{
			Object GsAf = Object(12);
			ChromaticScalePosition expected = ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.getPosition());
		}
	};
	TEST_CLASS(Constructor_String_Test)
	{
		TEST_METHOD(NONE_ConstructorWithInt_Test)
		{
			Object NONE = Object("NONE");
			ChromaticScalePosition expected = ChromaticScalePosition::NONE;
			Assert::AreEqual((int)expected, (int)NONE.getPosition());
		}
		TEST_METHOD(A_ConstructorWithInt_Test)
		{
			Object A = Object("A");
			ChromaticScalePosition expected = ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.getPosition());
		}
		TEST_METHOD(AsBf_ConstructorWithInt_Test)
		{
			Object AsBf = Object("AsBf");
			ChromaticScalePosition expected = ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.getPosition());
		}
		TEST_METHOD(B_ConstructorWithInt_Test)
		{
			Object B = Object("B");
			ChromaticScalePosition expected = ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.getPosition());
		}
		TEST_METHOD(C_ConstructorWithInt_Test)
		{
			Object C = Object("C");
			ChromaticScalePosition expected = ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.getPosition());
		}
		TEST_METHOD(CsDf_ConstructorWithInt_Test)
		{
			Object CsDf = Object("CsDf");
			ChromaticScalePosition expected = ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.getPosition());
		}
		TEST_METHOD(D_ConstructorWithInt_Test)
		{
			Object D = Object("D");
			ChromaticScalePosition expected = ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.getPosition());
		}
		TEST_METHOD(DsEf_ConstructorWithInt_Test)
		{
			Object DsEf = Object("DsEf");
			ChromaticScalePosition expected = ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.getPosition());
		}
		TEST_METHOD(E_ConstructorWithInt_Test)
		{
			Object E = Object("E");
			ChromaticScalePosition expected = ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.getPosition());
		}
		TEST_METHOD(F_ConstructorWithInt_Test)
		{
			Object F = Object("F");
			ChromaticScalePosition expected = ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.getPosition());
		}
		TEST_METHOD(FsGs_ConstructorWithInt_Test)
		{
			Object FsGf = Object("FsGf");
			ChromaticScalePosition expected = ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.getPosition());
		}
		TEST_METHOD(G_ConstructorWithInt_Test)
		{
			Object G = Object("G");
			ChromaticScalePosition expected = ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.getPosition());
		}
		TEST_METHOD(GsAf_ConstructorWithInt_Test)
		{
			Object GsAf("GsAf");
			ChromaticScalePosition expected = ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.getPosition());
		}
	};
	TEST_CLASS(getNameAsString_Test)
	{
		TEST_METHOD(NONE_getNameAsString_Test)
		{
			Object NONE = Object(ChromaticScalePosition::NONE);
			string expected = "NONE";
			Assert::AreEqual(expected, NONE.getNameAsString());

		}
		TEST_METHOD(A_getNameAsString_Test)
		{
			Object A = Object(ChromaticScalePosition::A);
			string expected = "A";
			Assert::AreEqual(expected, A.getNameAsString());

		}
		TEST_METHOD(AsBf_getNameAsString_Test)
		{
			Object AsBf = Object(ChromaticScalePosition::AsBf);
			string expected = "AsBf";
			Assert::AreEqual(expected, AsBf.getNameAsString());

		}
		TEST_METHOD(B_getNameAsString_Test)
		{
			Object B = Object(ChromaticScalePosition::B);
			string expected = "B";
			Assert::AreEqual(expected, B.getNameAsString());
		}
		TEST_METHOD(C_getNameAsString_Test)
		{
			Object C = Object(ChromaticScalePosition::C);
			string expected = "C";
			Assert::AreEqual(expected, C.getNameAsString());
		}
		TEST_METHOD(CsDf_getNameAsString_Test)
		{
			Object CsDf = Object(ChromaticScalePosition::CsDf);
			string expected = "CsDf";
			Assert::AreEqual(expected, CsDf.getNameAsString());

		}
		TEST_METHOD(D_getNameAsString_Test)
		{
			Object D = Object(ChromaticScalePosition::D);
			string expected = "D";
			Assert::AreEqual(expected, D.getNameAsString());

		}
		TEST_METHOD(DsEf_getNameAsString_Test)
		{
			Object DsEf = Object(ChromaticScalePosition::DsEf);
			string expected = "DsEf";
			Assert::AreEqual(expected, DsEf.getNameAsString());
		}
		TEST_METHOD(E_getNameAsString_Test)
		{
			Object E = Object(ChromaticScalePosition::E);
			string expected = "E";
			Assert::AreEqual(expected, E.getNameAsString());

		}
		TEST_METHOD(F_getNameAsString_Test)
		{
			Object F = Object(ChromaticScalePosition::F);
			string expected = "F";
			Assert::AreEqual(expected, F.getNameAsString());

		}
		TEST_METHOD(FsGf_getNameAsString_Test)
		{
			Object FsGf = Object(ChromaticScalePosition::FsGf);
			string expectedsGf = "FsGf";
			Assert::AreEqual(expectedsGf, FsGf.getNameAsString());
		}
		TEST_METHOD(G_getNameAsString_Test)
		{
			Object G = Object(ChromaticScalePosition::G);
			string expected = "G";
			Assert::AreEqual(expected, G.getNameAsString());

		}
		TEST_METHOD(GsAf_getNameAsString_Test)
		{
			Object GsAf = Object(ChromaticScalePosition::GsAf);
			string expected = "GsAf";
			Assert::AreEqual(expected, GsAf.getNameAsString());
		}
	};
	TEST_CLASS(accendHalfStep_Test)
	{
		TEST_METHOD(A_goHalfStep_Test)
		{
			Object A = Object(ChromaticScalePosition::A);
			ChromaticScalePosition expected = ChromaticScalePosition::AsBf;

			Object halfStepUpFromA = A.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromA.getPosition());

		}
		TEST_METHOD(AsBf_goHalfStep_Test)
		{
			Object AsBf = Object(ChromaticScalePosition::AsBf);
			ChromaticScalePosition expected = ChromaticScalePosition::B;

			Object halfStepUpFromAsBf = AsBf.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromAsBf.getPosition());

		}
		TEST_METHOD(B_goHalfStep_Test)
		{
			Object B = Object(ChromaticScalePosition::B);
			ChromaticScalePosition expected = ChromaticScalePosition::C;

			Object halfStepUpFromB = B.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromB.getPosition());
		}
		TEST_METHOD(C_goHalfStep_Test)
		{
			Object C = Object(ChromaticScalePosition::C);
			ChromaticScalePosition expected = ChromaticScalePosition::CsDf;

			Object halfStepUpFromC = C.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromC.getPosition());
		}
		TEST_METHOD(CsDf_goHalfStep_Test)
		{
			Object CsDf = Object(ChromaticScalePosition::CsDf);
			ChromaticScalePosition expected = ChromaticScalePosition::D;

			Object halfStepUpFromCsDf = CsDf.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromCsDf.getPosition());

		}
		TEST_METHOD(D_goHalfStep_Test)
		{
			Object D = Object(ChromaticScalePosition::D);
			ChromaticScalePosition expected = ChromaticScalePosition::DsEf;

			Object halfStepUpFromD = D.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromD.getPosition());

		}
		TEST_METHOD(DsEf_goHalfStep_Test)
		{
			Object DsEf = Object(ChromaticScalePosition::DsEf);
			ChromaticScalePosition expected = ChromaticScalePosition::E;

			Object halfStepUpFromDsEf = DsEf.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromDsEf.getPosition());
		}
		TEST_METHOD(E_goHalfStep_Test)
		{
			Object E = Object(ChromaticScalePosition::E);
			ChromaticScalePosition expected = ChromaticScalePosition::F;

			Object halfStepUpFromE = E.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromE.getPosition());

		}
		TEST_METHOD(F_goHalfStep_Test)
		{
			Object F = Object(ChromaticScalePosition::F);
			ChromaticScalePosition expected = ChromaticScalePosition::FsGf;

			Object halfStepUpFromF = F.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromF.getPosition());

		}
		TEST_METHOD(FsGf_ConstructorWithPosition_Test)
		{
			Object FsGf = Object(ChromaticScalePosition::FsGf);
			ChromaticScalePosition expected = ChromaticScalePosition::G;

			Object halfStepUpFromFsGf = FsGf.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromFsGf.getPosition());
		}
		TEST_METHOD(G_goHalfStep_Test)
		{
			Object G = Object(ChromaticScalePosition::G);
			ChromaticScalePosition expected = ChromaticScalePosition::GsAf;

			Object halfStepUpFromG = G.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromG.getPosition());

		}
		TEST_METHOD(GsAf_goHalfStep_Test)
		{
			Object GsAf = Object(ChromaticScalePosition::GsAf);
			ChromaticScalePosition expected = ChromaticScalePosition::A;

			Object halfStepUpFromGsAf = GsAf.accendHalfStep();

			Assert::AreEqual((int)expected, (int)halfStepUpFromGsAf.getPosition());
		}
	};
	TEST_CLASS(accendFullStep_Test)
	{
		TEST_METHOD(A_goFullStep_Test)
		{
			Object A = Object(ChromaticScalePosition::A);
			ChromaticScalePosition expected = ChromaticScalePosition::B;

			Object fullStepUpFromA = A.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromA.getPosition());

		}
		TEST_METHOD(AsBf_goFullStep_Test)
		{
			Object AsBf = Object(ChromaticScalePosition::AsBf);
			ChromaticScalePosition expected = ChromaticScalePosition::C;

			Object fullStepUpFromAsBf = AsBf.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromAsBf.getPosition());

		}
		TEST_METHOD(B_goFullStep_Test)
		{
			Object B = Object(ChromaticScalePosition::B);
			ChromaticScalePosition expected = ChromaticScalePosition::CsDf;

			Object fullStepUpFromB = B.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromB.getPosition());
		}
		TEST_METHOD(C_goFullStep_Test)
		{
			Object C = Object(ChromaticScalePosition::C);
			ChromaticScalePosition expected = ChromaticScalePosition::D;

			Object fullStepUpFromC = C.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromC.getPosition());
		}
		TEST_METHOD(CsDf_goFullStep_Test)
		{
			Object CsDf = Object(ChromaticScalePosition::CsDf);
			ChromaticScalePosition expected = ChromaticScalePosition::DsEf;

			Object fullStepUpFromCsDf = CsDf.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromCsDf.getPosition());

		}
		TEST_METHOD(D_goFullStep_Test)
		{
			Object D = Object(ChromaticScalePosition::D);
			ChromaticScalePosition expected = ChromaticScalePosition::E;

			Object fullStepUpFromD = D.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromD.getPosition());

		}
		TEST_METHOD(DsEf_goFullStep_Test)
		{
			Object DsEf = Object(ChromaticScalePosition::DsEf);
			ChromaticScalePosition expected = ChromaticScalePosition::F;

			Object fullStepUpFromDsEf = DsEf.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromDsEf.getPosition());
		}
		TEST_METHOD(E_goFullStep_Test)
		{
			Object E = Object(ChromaticScalePosition::E);
			ChromaticScalePosition expected = ChromaticScalePosition::FsGf;

			Object fullStepUpFromE = E.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromE.getPosition());

		}
		TEST_METHOD(F_goFullStep_Test)
		{
			Object F = Object(ChromaticScalePosition::F);
			ChromaticScalePosition expected = ChromaticScalePosition::G;

			Object fullStepUpFromF = F.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromF.getPosition());

		}
		TEST_METHOD(FsGf_goFullStep_Test)
		{
			Object FsGf = Object(ChromaticScalePosition::FsGf);
			ChromaticScalePosition expected = ChromaticScalePosition::GsAf;

			Object fullStepUpFromFsGf = FsGf.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromFsGf.getPosition());
		}
		TEST_METHOD(G_goFullStep_Test)
		{
			Object G = Object(ChromaticScalePosition::G);
			ChromaticScalePosition expected = ChromaticScalePosition::A;

			Object fullStepUpFromG = G.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromG.getPosition());

		}
		TEST_METHOD(GsAf_goFullStep_Test)
		{
			Object GsAf = Object(ChromaticScalePosition::GsAf);
			ChromaticScalePosition expected = ChromaticScalePosition::AsBf;

			Object fullStepUpFromGsAf = GsAf.accendFullStep();

			Assert::AreEqual((int)expected, (int)fullStepUpFromGsAf.getPosition());
		}
	};
	TEST_CLASS(accendStepAndAHalf_Test)
	{
		TEST_METHOD(A_goStepAndAHalf_Test)
		{
			Object A = Object(ChromaticScalePosition::A);
			ChromaticScalePosition expected = ChromaticScalePosition::C;

			Object stepAndAHalfUpFromA = A.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromA.getPosition());

		}
		TEST_METHOD(AsBf_goStepAndAHalf_Test)
		{
			Object AsBf = Object(ChromaticScalePosition::AsBf);
			ChromaticScalePosition expected = ChromaticScalePosition::CsDf;

			Object stepAndAHalfUpFromAsBf = AsBf.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromAsBf.getPosition());

		}
		TEST_METHOD(B_goStepAndAHalf_Test)
		{
			Object B = Object(ChromaticScalePosition::B);
			ChromaticScalePosition expected = ChromaticScalePosition::D;

			Object stepAndAHalfUpFromB = B.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromB.getPosition());
		}
		TEST_METHOD(C_goStepAndAHalf_Test)
		{
			Object C = Object(ChromaticScalePosition::C);
			ChromaticScalePosition expected = ChromaticScalePosition::DsEf;

			Object stepAndAHalfUpFromC = C.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromC.getPosition());
		}
		TEST_METHOD(CsDf_goStepAndAHalf_Test)
		{
			Object CsDf = Object(ChromaticScalePosition::CsDf);
			ChromaticScalePosition expected = ChromaticScalePosition::E;

			Object stepAndAHalfUpFromCsDf = CsDf.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromCsDf.getPosition());
		}
		TEST_METHOD(D_goStepAndAHalf_Test)
		{
			Object D = Object(ChromaticScalePosition::D);
			ChromaticScalePosition expected = ChromaticScalePosition::F;

			Object stepAndAHalfUpFromD = D.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromD.getPosition());
		}
		TEST_METHOD(DsEf_goStepAndAHalf_Test)
		{
			Object DsEf = Object(ChromaticScalePosition::DsEf);
			ChromaticScalePosition expected = ChromaticScalePosition::FsGf;

			Object stepAndAHalfUpFromDsEf = DsEf.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromDsEf.getPosition());
		}
		TEST_METHOD(E_goStepAndAHalf_Test)
		{
			Object E = Object(ChromaticScalePosition::E);
			ChromaticScalePosition expected = ChromaticScalePosition::G;

			Object stepAndAHalfUpFromE = E.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromE.getPosition());
		}
		TEST_METHOD(F_goStepAndAHalf_Test)
		{
			Object F = Object(ChromaticScalePosition::F);
			ChromaticScalePosition expected = ChromaticScalePosition::GsAf;

			Object stepAndAHalfUpFromF = F.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromF.getPosition());
		}
		TEST_METHOD(FsGf_goStepAndAHalf_Test)
		{
			Object FsGf = Object(ChromaticScalePosition::FsGf);
			ChromaticScalePosition expected = ChromaticScalePosition::A;

			Object stepAndAHalfUpFromFsGf = FsGf.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromFsGf.getPosition());
		}
		TEST_METHOD(G_goStepAndAHalf_Test)
		{
			Object G = Object(ChromaticScalePosition::G);
			ChromaticScalePosition expected = ChromaticScalePosition::AsBf;

			Object stepAndAHalfUpFromG = G.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromG.getPosition());
		}
		TEST_METHOD(GsAf_goStepAndAHalf_Test)
		{
			Object GsAf = Object(ChromaticScalePosition::GsAf);
			ChromaticScalePosition expected = ChromaticScalePosition::B;

			Object stepAndAHalfUpFromGsAf = GsAf.accendStepAndAHalf();

			Assert::AreEqual((int)expected, (int)stepAndAHalfUpFromGsAf.getPosition());
		}
	};
	TEST_CLASS(getPositionAsString_Test)
	{
		TEST_METHOD(NONE_getPositionAsString_Test)
		{
			Object NONE = Object(ChromaticScalePosition::NONE);
			string expected = "NONE";
			Assert::AreEqual(expected, NONE.getNameAsString());
		}
		TEST_METHOD(A_getPositionAsString_Test)
		{
			Object A = Object(ChromaticScalePosition::A);
			string expected = "A";
			Assert::AreEqual(expected, A.getNameAsString());
		}
		TEST_METHOD(AsBf_getPositionAsString_Test)
		{
			Object AsBf = Object(ChromaticScalePosition::AsBf);
			string expected = "AsBf";
			Assert::AreEqual(expected, AsBf.getNameAsString());
		}
		TEST_METHOD(B_getPositionAsString_Test)
		{
			Object B = Object(ChromaticScalePosition::B);
			string expected = "B";
			Assert::AreEqual(expected, B.getNameAsString());
		}
		TEST_METHOD(C_getPositionAsString_Test)
		{
			Object C = Object(ChromaticScalePosition::C);
			string expected = "C";
			Assert::AreEqual(expected, C.getNameAsString());
		}
		TEST_METHOD(CsDf_getPositionAsString_Test)
		{
			Object CsDf = Object(ChromaticScalePosition::CsDf);
			string expected = "CsDf";
			Assert::AreEqual(expected, CsDf.getNameAsString());
		}
		TEST_METHOD(D_getPositionAsString_Test)
		{
			Object D = Object(ChromaticScalePosition::D);
			string expected = "D";
			Assert::AreEqual(expected, D.getNameAsString());
		}
		TEST_METHOD(DsEf_getPositionAsString_Test)
		{
			Object DsEf = Object(ChromaticScalePosition::DsEf);
			string expected = "DsEf";
			Assert::AreEqual(expected, DsEf.getNameAsString());
		}
		TEST_METHOD(E_getPositionAsString_Test)
		{
			Object E = Object(ChromaticScalePosition::E);
			string expected = "E";
			Assert::AreEqual(expected, E.getNameAsString());
		}
		TEST_METHOD(F_getPositionAsString_Test)
		{
			Object F = Object(ChromaticScalePosition::F);
			string expected = "F";
			Assert::AreEqual(expected, F.getNameAsString());
		}
		TEST_METHOD(FsGf_getPositionAsString_Test)
		{
			Object FsGf = Object(ChromaticScalePosition::FsGf);
			string expected = "FsGf";
			Assert::AreEqual(expected, FsGf.getNameAsString());
		}
		TEST_METHOD(G_getPositionAsString_Test)
		{
			Object G = Object(ChromaticScalePosition::G);
			string expected = "G";
			Assert::AreEqual(expected, G.getNameAsString());
		}
		TEST_METHOD(GsAf_getPositionAsString_Test)
		{
			Object GsAf = Object(ChromaticScalePosition::GsAf);
			string expected = "GsAf";
			Assert::AreEqual(expected, GsAf.getNameAsString());
		}
	};
};
