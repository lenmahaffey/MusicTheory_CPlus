#pragma once
#include "pch.h"
#include "CppUnitTest.h"
#include "../Music/src/Object.cpp"




using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Object_Test
{
	TEST_CLASS(Constructor_Enum_Test)
	{
	public:
		TEST_METHOD(A_ConstructorWithEnum_Test)
		{
			Object A = Object(ChromaticScalePosition::A);
			ChromaticScalePosition expected = ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.getChromaticScalePosition());

		}
		TEST_METHOD(AsBf_ConstructorWithEnum_Test)
		{
			Object AsBf = Object(ChromaticScalePosition::AsBf);
			ChromaticScalePosition expected = ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.getChromaticScalePosition());

		}
		TEST_METHOD(B_ConstructorWithEnum_Test)
		{
			Object B = Object(ChromaticScalePosition::B);
			ChromaticScalePosition expected = ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.getChromaticScalePosition());
		}
		TEST_METHOD(C_ConstructorWithEnum_Test)
		{
			Object C = Object(ChromaticScalePosition::C);
			ChromaticScalePosition expected = ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.getChromaticScalePosition());
		}
		TEST_METHOD(CsDf_ConstructorWithEnum_Test)
		{
			Object CsDf = Object(ChromaticScalePosition::CsDf);
			ChromaticScalePosition expected = ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.getChromaticScalePosition());

		}
		TEST_METHOD(D_ConstructorWithEnum_Test)
		{
			Object D = Object(ChromaticScalePosition::D);
			ChromaticScalePosition expected = ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.getChromaticScalePosition());

		}
		TEST_METHOD(DsEf_ConstructorWithEnum_Test)
		{
			Object DsEf = Object(ChromaticScalePosition::DsEf);
			ChromaticScalePosition expected = ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.getChromaticScalePosition());
		}
		TEST_METHOD(E_ConstructorWithEnum_Test)
		{
			Object E = Object(ChromaticScalePosition::E);
			ChromaticScalePosition expected = ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.getChromaticScalePosition());

		}
		TEST_METHOD(F_ConstructorWithEnum_Test)
		{
			Object F = Object(ChromaticScalePosition::F);
			ChromaticScalePosition expected = ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.getChromaticScalePosition());

		}
		TEST_METHOD(FsGf_ConstructorWithEnum_Test)
		{
			Object FsGf = Object(ChromaticScalePosition::FsGf);
			ChromaticScalePosition expected = ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.getChromaticScalePosition());
		}
		TEST_METHOD(G_ConstructorWithEnum_Test)
		{
			Object G = Object(ChromaticScalePosition::G);
			ChromaticScalePosition expected = ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.getChromaticScalePosition());

		}
		TEST_METHOD(GsAf_ConstructorWithEnum_Test)
		{
			Object GsAf = Object(ChromaticScalePosition::GsAf);
			ChromaticScalePosition expected = ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.getChromaticScalePosition());
		}
	};
	TEST_CLASS(Constructor_Int_Test)
	{
		TEST_METHOD(A_ConstructorWithInt_Test)
		{
			Object A = Object(0);
			ChromaticScalePosition expected = ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.getChromaticScalePosition());
		}
		TEST_METHOD(AsBf_ConstructorWithInt_Test)
		{
			Object AsBf = Object(1);
			ChromaticScalePosition expected = ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.getChromaticScalePosition());
		}
		TEST_METHOD(B_ConstructorWithInt_Test)
		{
			Object B = Object(2);
			ChromaticScalePosition expected = ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.getChromaticScalePosition());
		}
		TEST_METHOD(C_ConstructorWithInt_Test)
		{
			Object C = Object(3);
			ChromaticScalePosition expected = ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.getChromaticScalePosition());
		}
		TEST_METHOD(CsDf_ConstructorWithInt_Test)
		{
			Object CsDf = Object(4);
			ChromaticScalePosition expected = ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.getChromaticScalePosition());

		}
		TEST_METHOD(D_ConstructorWithInt_Test)
		{
			Object D = Object(5);
			ChromaticScalePosition expected = ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.getChromaticScalePosition());

		}
		TEST_METHOD(DsEf_ConstructorWithInt_Test)
		{
			Object DsEf = Object(6);
			ChromaticScalePosition expected = ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.getChromaticScalePosition());
		}
		TEST_METHOD(E_ConstructorWithInt_Test)
		{
			Object E = Object(7);
			ChromaticScalePosition expected = ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.getChromaticScalePosition());

		}
		TEST_METHOD(F_ConstructorWithInt_Test)
		{
			Object F = Object(8);
			ChromaticScalePosition expected = ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.getChromaticScalePosition());

		}
		TEST_METHOD(FsGf_ConstructorWithInt_Test)
		{
			Object FsGf = Object(9);
			ChromaticScalePosition expected = ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.getChromaticScalePosition());
		}
		TEST_METHOD(G_ConstructorWithInt_Test)
		{
			Object G = Object(10);
			ChromaticScalePosition expected = ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.getChromaticScalePosition());

		}
		TEST_METHOD(GsAf_ConstructorWithInt_Test)
		{
			Object GsAf = Object(11);
			ChromaticScalePosition expected = ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.getChromaticScalePosition());
		}
	};
	TEST_CLASS(Constructor_String_Test)
	{
		TEST_METHOD(A_ConstructorWithInt_Test)
		{
			Object A = Object("A");
			ChromaticScalePosition expected = ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.getChromaticScalePosition());
		}
		TEST_METHOD(AsBf_ConstructorWithInt_Test)
		{
			Object AsBf = Object("AsBf");
			ChromaticScalePosition expected = ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.getChromaticScalePosition());
		}
		TEST_METHOD(B_ConstructorWithInt_Test)
		{
			Object B = Object("B");
			ChromaticScalePosition expected = ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.getChromaticScalePosition());
		}
		TEST_METHOD(C_ConstructorWithInt_Test)
		{
			Object C = Object("C");
			ChromaticScalePosition expected = ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.getChromaticScalePosition());
		}
		TEST_METHOD(CsDf_ConstructorWithInt_Test)
		{
			Object CsDf = Object("CsDf");
			ChromaticScalePosition expected = ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.getChromaticScalePosition());
		}
		TEST_METHOD(D_ConstructorWithInt_Test)
		{
			Object D = Object("D");
			ChromaticScalePosition expected = ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.getChromaticScalePosition());
		}
		TEST_METHOD(DsEf_ConstructorWithInt_Test)
		{
			Object DsEf = Object("DsEf");
			ChromaticScalePosition expected = ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.getChromaticScalePosition());
		}
		TEST_METHOD(E_ConstructorWithInt_Test)
		{
			Object E = Object("E");
			ChromaticScalePosition expected = ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.getChromaticScalePosition());
		}
		TEST_METHOD(F_ConstructorWithInt_Test)
		{
			Object F = Object("F");
			ChromaticScalePosition expected = ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.getChromaticScalePosition());
		}
		TEST_METHOD(FsGs_ConstructorWithInt_Test)
		{
			Object FsGf = Object("FsGf");
			ChromaticScalePosition expected = ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.getChromaticScalePosition());
		}
		TEST_METHOD(G_ConstructorWithInt_Test)
		{
			Object G = Object("G");
			ChromaticScalePosition expected = ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.getChromaticScalePosition());
		}
		TEST_METHOD(GsAf_ConstructorWithInt_Test)
		{
			Object GsAf("GsAf");
			ChromaticScalePosition expected = ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.getChromaticScalePosition());
		}
	};
	TEST_CLASS(getNameAsString_Test)
	{
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
	TEST_CLASS(goHalfStep_Test)
	{
		TEST_METHOD(A_goHalfStep_Test)
		{
			//Arrange
			Object A = Object(ChromaticScalePosition::A);
			ChromaticScalePosition expected = ChromaticScalePosition::AsBf;

			//Act
			A = A.goHalfStep();

			Assert::AreEqual((int)expected, (int)A.getChromaticScalePosition());

		}
		TEST_METHOD(AsBf_goHalfStep_Test)
		{
			Object AsBf = Object(ChromaticScalePosition::AsBf);
			ChromaticScalePosition expected = ChromaticScalePosition::B;

			AsBf = AsBf.goHalfStep();

			Assert::AreEqual((int)expected, (int)AsBf.getChromaticScalePosition());

		}
		TEST_METHOD(B_goHalfStep_Test)
		{
			Object B = Object(ChromaticScalePosition::B);
			ChromaticScalePosition expected = ChromaticScalePosition::C;

			B = B.goHalfStep();

			Assert::AreEqual((int)expected, (int)B.getChromaticScalePosition());
		}
		TEST_METHOD(C_goHalfStep_Test)
		{
			Object C = Object(ChromaticScalePosition::C);
			ChromaticScalePosition expected = ChromaticScalePosition::CsDf;

			C = C.goHalfStep();

			Assert::AreEqual((int)expected, (int)C.getChromaticScalePosition());
		}
		TEST_METHOD(CsDf_goHalfStep_Test)
		{
			Object CsDf = Object(ChromaticScalePosition::CsDf);
			ChromaticScalePosition expected = ChromaticScalePosition::D;

			CsDf = CsDf.goHalfStep();

			Assert::AreEqual((int)expected, (int)CsDf.getChromaticScalePosition());

		}
		TEST_METHOD(D_goHalfStep_Test)
		{
			Object D = Object(ChromaticScalePosition::D);
			ChromaticScalePosition expected = ChromaticScalePosition::DsEf;

			D = D.goHalfStep();

			Assert::AreEqual((int)expected, (int)D.getChromaticScalePosition());

		}
		TEST_METHOD(DsEf_goHalfStep_Test)
		{
			Object DsEf = Object(ChromaticScalePosition::DsEf);
			ChromaticScalePosition expected = ChromaticScalePosition::E;

			DsEf = DsEf.goHalfStep();

			Assert::AreEqual((int)expected, (int)DsEf.getChromaticScalePosition());
		}
		TEST_METHOD(E_goHalfStep_Test)
		{
			Object E = Object(ChromaticScalePosition::E);
			ChromaticScalePosition expected = ChromaticScalePosition::F;

			E = E.goHalfStep();

			Assert::AreEqual((int)expected, (int)E.getChromaticScalePosition());

		}
		TEST_METHOD(F_goHalfStep_Test)
		{
			Object F = Object(ChromaticScalePosition::F);
			ChromaticScalePosition expected = ChromaticScalePosition::FsGf;

			F = F.goHalfStep();

			Assert::AreEqual((int)expected, (int)F.getChromaticScalePosition());

		}
		TEST_METHOD(FsGf_ConstructorWithEnum_Test)
		{
			Object FsGf = Object(ChromaticScalePosition::FsGf);
			ChromaticScalePosition expected = ChromaticScalePosition::G;

			FsGf = FsGf.goHalfStep();

			Assert::AreEqual((int)expected, (int)FsGf.getChromaticScalePosition());
		}
		TEST_METHOD(G_goHalfStep_Test)
		{
			Object G = Object(ChromaticScalePosition::G);
			ChromaticScalePosition expected = ChromaticScalePosition::GsAf;

			G = G.goHalfStep();

			Assert::AreEqual((int)expected, (int)G.getChromaticScalePosition());

		}
		TEST_METHOD(GsAf_goHalfStep_Test)
		{
			Object GsAf = Object(ChromaticScalePosition::GsAf);
			ChromaticScalePosition expected = ChromaticScalePosition::A;

			GsAf = GsAf.goHalfStep();

			Assert::AreEqual((int)expected, (int)GsAf.getChromaticScalePosition());
		}
	};
	TEST_CLASS(goFullStep_Test)
	{
		TEST_METHOD(A_goFullStep_Test)
		{
			//Arrange
			Object A = Object(ChromaticScalePosition::A);
			ChromaticScalePosition expected = ChromaticScalePosition::B;

			//Act
			A = A.goFullStep();

			Assert::AreEqual((int)expected, (int)A.getChromaticScalePosition());

		}
		TEST_METHOD(AsBf_goFullStep_Test)
		{
			Object AsBf = Object(ChromaticScalePosition::AsBf);
			ChromaticScalePosition expected = ChromaticScalePosition::C;

			AsBf = AsBf.goFullStep();

			Assert::AreEqual((int)expected, (int)AsBf.getChromaticScalePosition());

		}
		TEST_METHOD(B_goFullStep_Test)
		{
			Object B = Object(ChromaticScalePosition::B);
			ChromaticScalePosition expected = ChromaticScalePosition::CsDf;

			B = B.goFullStep();

			Assert::AreEqual((int)expected, (int)B.getChromaticScalePosition());
		}
		TEST_METHOD(C_goFullStep_Test)
		{
			Object C = Object(ChromaticScalePosition::C);
			ChromaticScalePosition expected = ChromaticScalePosition::D;

			C = C.goFullStep();

			Assert::AreEqual((int)expected, (int)C.getChromaticScalePosition());
		}
		TEST_METHOD(CsDf_goFullStep_Test)
		{
			Object CsDf = Object(ChromaticScalePosition::CsDf);
			ChromaticScalePosition expected = ChromaticScalePosition::DsEf;

			CsDf = CsDf.goFullStep();

			Assert::AreEqual((int)expected, (int)CsDf.getChromaticScalePosition());

		}
		TEST_METHOD(D_goFullStep_Test)
		{
			Object D = Object(ChromaticScalePosition::D);
			ChromaticScalePosition expected = ChromaticScalePosition::E;

			D = D.goFullStep();

			Assert::AreEqual((int)expected, (int)D.getChromaticScalePosition());

		}
		TEST_METHOD(DsEf_goFullStep_Test)
		{
			Object DsEf = Object(ChromaticScalePosition::DsEf);
			ChromaticScalePosition expected = ChromaticScalePosition::F;

			DsEf = DsEf.goFullStep();

			Assert::AreEqual((int)expected, (int)DsEf.getChromaticScalePosition());
		}
		TEST_METHOD(E_goFullStep_Test)
		{
			Object E = Object(ChromaticScalePosition::E);
			ChromaticScalePosition expected = ChromaticScalePosition::FsGf;

			E = E.goFullStep();

			Assert::AreEqual((int)expected, (int)E.getChromaticScalePosition());

		}
		TEST_METHOD(F_goFullStep_Test)
		{
			Object F = Object(ChromaticScalePosition::F);
			ChromaticScalePosition expected = ChromaticScalePosition::G;

			F = F.goFullStep();

			Assert::AreEqual((int)expected, (int)F.getChromaticScalePosition());

		}
		TEST_METHOD(FsGf_goFullStep_Test)
		{
			Object FsGf = Object(ChromaticScalePosition::FsGf);
			ChromaticScalePosition expected = ChromaticScalePosition::GsAf;

			FsGf = FsGf.goFullStep();

			Assert::AreEqual((int)expected, (int)FsGf.getChromaticScalePosition());
		}
		TEST_METHOD(G_goFullStep_Test)
		{
			Object G = Object(ChromaticScalePosition::G);
			ChromaticScalePosition expected = ChromaticScalePosition::A;

			G = G.goFullStep();

			Assert::AreEqual((int)expected, (int)G.getChromaticScalePosition());

		}
		TEST_METHOD(GsAf_goFullStep_Test)
		{
			Object GsAf = Object(ChromaticScalePosition::GsAf);
			ChromaticScalePosition expected = ChromaticScalePosition::AsBf;

			GsAf = GsAf.goFullStep();

			Assert::AreEqual((int)expected, (int)GsAf.getChromaticScalePosition());
		}
	};
	TEST_CLASS(goStepAndAHalf_Test)
	{
		TEST_METHOD(A_goStepAndAHalf_Test)
		{
			//Arrange
			Object A = Object(ChromaticScalePosition::A);
			ChromaticScalePosition expected = ChromaticScalePosition::C;

			//Act
			A = A.goStepAndAHalf();

			Assert::AreEqual((int)expected, (int)A.getChromaticScalePosition());

		}
		TEST_METHOD(AsBf_goStepAndAHalf_Test)
		{
			Object AsBf = Object(ChromaticScalePosition::AsBf);
			ChromaticScalePosition expected = ChromaticScalePosition::CsDf;

			AsBf = AsBf.goStepAndAHalf();

			Assert::AreEqual((int)expected, (int)AsBf.getChromaticScalePosition());

		}
		TEST_METHOD(B_goStepAndAHalf_Test)
		{
			Object B = Object(ChromaticScalePosition::B);
			ChromaticScalePosition expected = ChromaticScalePosition::D;

			B = B.goStepAndAHalf();

			Assert::AreEqual((int)expected, (int)B.getChromaticScalePosition());
		}
		TEST_METHOD(C_goStepAndAHalf_Test)
		{
			Object C = Object(ChromaticScalePosition::C);
			ChromaticScalePosition expected = ChromaticScalePosition::DsEf;

			C = C.goStepAndAHalf();

			Assert::AreEqual((int)expected, (int)C.getChromaticScalePosition());
		}
		TEST_METHOD(CsDf_goStepAndAHalf_Test)
		{
			Object CsDf = Object(ChromaticScalePosition::CsDf);
			ChromaticScalePosition expected = ChromaticScalePosition::E;

			CsDf = CsDf.goStepAndAHalf();

			Assert::AreEqual((int)expected, (int)CsDf.getChromaticScalePosition());

		}
		TEST_METHOD(D_goStepAndAHalf_Test)
		{
			Object D = Object(ChromaticScalePosition::D);
			ChromaticScalePosition expected = ChromaticScalePosition::F;

			D = D.goStepAndAHalf();

			Assert::AreEqual((int)expected, (int)D.getChromaticScalePosition());

		}
		TEST_METHOD(DsEf_goStepAndAHalf_Test)
		{
			Object DsEf = Object(ChromaticScalePosition::DsEf);
			ChromaticScalePosition expected = ChromaticScalePosition::FsGf;

			DsEf = DsEf.goStepAndAHalf();

			Assert::AreEqual((int)expected, (int)DsEf.getChromaticScalePosition());
		}
		TEST_METHOD(E_goStepAndAHalf_Test)
		{
			Object E = Object(ChromaticScalePosition::E);
			ChromaticScalePosition expected = ChromaticScalePosition::G;

			E = E.goStepAndAHalf();

			Assert::AreEqual((int)expected, (int)E.getChromaticScalePosition());

		}
		TEST_METHOD(F_goStepAndAHalf_Test)
		{
			Object F = Object(ChromaticScalePosition::F);
			ChromaticScalePosition expected = ChromaticScalePosition::GsAf;

			F = F.goStepAndAHalf();

			Assert::AreEqual((int)expected, (int)F.getChromaticScalePosition());

		}
		TEST_METHOD(FsGf_goStepAndAHalf_Test)
		{
			Object FsGf = Object(ChromaticScalePosition::FsGf);
			ChromaticScalePosition expected = ChromaticScalePosition::A;

			FsGf = FsGf.goStepAndAHalf();

			Assert::AreEqual((int)expected, (int)FsGf.getChromaticScalePosition());
		}
		TEST_METHOD(G_goStepAndAHalf_Test)
		{
			Object G = Object(ChromaticScalePosition::G);
			ChromaticScalePosition expected = ChromaticScalePosition::AsBf;

			G = G.goStepAndAHalf();

			Assert::AreEqual((int)expected, (int)G.getChromaticScalePosition());

		}
		TEST_METHOD(GsAf_goStepAndAHalf_Test)
		{
			Object GsAf = Object(ChromaticScalePosition::GsAf);
			ChromaticScalePosition expected = ChromaticScalePosition::B;

			GsAf = GsAf.goStepAndAHalf();

			Assert::AreEqual((int)expected, (int)GsAf.getChromaticScalePosition());
		}
	};
	TEST_CLASS(getPositionAsString_Test)
	{
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
