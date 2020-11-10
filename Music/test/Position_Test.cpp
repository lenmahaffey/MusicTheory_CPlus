#pragma once
#include "CppUnitTest.h"
#include "../src/Position.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;


namespace Position_Test
{
	TEST_CLASS(ConstructorWithPosition_Test)
	{
		TEST_METHOD(NONE_ConstructorWithPosition_Test)
		{
			Position NONE = Position();
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::NONE;
			Assert::AreEqual((int)expected, (int)NONE.GetChromaticScalePosition());
		}
		TEST_METHOD(A_ConstructorWithPosition_Test)
		{
			Position A = Position(Music::Position::ChromaticScalePosition::A);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.GetChromaticScalePosition());
		}
		TEST_METHOD(AsBf_ConstructorWithPosition_Test)
		{
			Position AsBf = Position(Music::Position::ChromaticScalePosition::AsBf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.GetChromaticScalePosition());
		}
		TEST_METHOD(B_ConstructorWithPosition_Test)
		{
			Position B = Position(Music::Position::ChromaticScalePosition::B);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.GetChromaticScalePosition());
		}
		TEST_METHOD(C_ConstructorWithPosition_Test)
		{
			Position C = Position(Music::Position::ChromaticScalePosition::C);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.GetChromaticScalePosition());
		}
		TEST_METHOD(CsDf_ConstructorWithPosition_Test)
		{
			Position CsDf = Position(Music::Position::ChromaticScalePosition::CsDf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.GetChromaticScalePosition());
		}
		TEST_METHOD(D_ConstructorWithPosition_Test)
		{
			Position D = Position(Music::Position::ChromaticScalePosition::D);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.GetChromaticScalePosition());
		}
		TEST_METHOD(DsEf_ConstructorWithPosition_Test)
		{
			Position DsEf = Position(Music::Position::ChromaticScalePosition::DsEf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.GetChromaticScalePosition());
		}
		TEST_METHOD(E_ConstructorWithPosition_Test)
		{
			Position E = Position(Music::Position::ChromaticScalePosition::E);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.GetChromaticScalePosition());
		}
		TEST_METHOD(F_ConstructorWithPosition_Test)
		{
			Position F = Position(Music::Position::ChromaticScalePosition::F);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.GetChromaticScalePosition());
		}
		TEST_METHOD(FsGf_ConstructorWithPosition_Test)
		{
			Position FsGf = Position(Music::Position::ChromaticScalePosition::FsGf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.GetChromaticScalePosition());
		}
		TEST_METHOD(G_ConstructorWithPosition_Test)
		{
			Position G = Position(Music::Position::ChromaticScalePosition::G);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.GetChromaticScalePosition());
		}
		TEST_METHOD(GsAf_ConstructorWithPosition_Test)
		{
			Position GsAf = Position(Music::Position::ChromaticScalePosition::GsAf);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.GetChromaticScalePosition());
		}
	};
	TEST_CLASS(ConstructorWithInt_Test)
	{
		TEST_METHOD(NONE_ConstructorWithInt_Test)
		{
			Position A = Position(0);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::NONE;
			Assert::AreEqual((int)expected, (int)A.GetChromaticScalePosition());
		}
		TEST_METHOD(A_ConstructorWithInt_Test)
		{
			Position A = Position(1);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.GetChromaticScalePosition());
		}
		TEST_METHOD(AsBf_ConstructorWithInt_Test)
		{
			Position AsBf = Position(2);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.GetChromaticScalePosition());
		}
		TEST_METHOD(B_ConstructorWithInt_Test)
		{
			Position B = Position(3);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.GetChromaticScalePosition());
		}
		TEST_METHOD(C_ConstructorWithInt_Test)
		{
			Position C = Position(4);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.GetChromaticScalePosition());
		}
		TEST_METHOD(CsDf_ConstructorWithInt_Test)
		{
			Position CsDf = Position(5);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.GetChromaticScalePosition());

		}
		TEST_METHOD(D_ConstructorWithInt_Test)
		{
			Position D = Position(6);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.GetChromaticScalePosition());

		}
		TEST_METHOD(DsEf_ConstructorWithInt_Test)
		{
			Position DsEf = Position(7);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.GetChromaticScalePosition());
		}
		TEST_METHOD(E_ConstructorWithInt_Test)
		{
			Position E = Position(8);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.GetChromaticScalePosition());

		}
		TEST_METHOD(F_ConstructorWithInt_Test)
		{
			Position F = Position(9);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.GetChromaticScalePosition());

		}
		TEST_METHOD(FsGf_ConstructorWithInt_Test)
		{
			Position FsGf = Position(10);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.GetChromaticScalePosition());
		}
		TEST_METHOD(G_ConstructorWithInt_Test)
		{
			Position G = Position(11);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.GetChromaticScalePosition());

		}
		TEST_METHOD(GsAf_ConstructorWithInt_Test)
		{
			Position GsAf = Position(12);
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.GetChromaticScalePosition());
		}
	};
	TEST_CLASS(ConstructorWithString_Test)
	{
		TEST_METHOD(NONE_ConstructorWithString_Test)
		{
			Position NONE = Position("NONE");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::NONE;
			Assert::AreEqual((int)expected, (int)NONE.GetChromaticScalePosition());
		}
		TEST_METHOD(A_ConstructorWithString_Test)
		{
			Position A = Position("A");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;
			Assert::AreEqual((int)expected, (int)A.GetChromaticScalePosition());
		}
		TEST_METHOD(AsBf_ConstructorWithString_Test)
		{
			Position AsBf = Position("AsBf");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;
			Assert::AreEqual((int)expected, (int)AsBf.GetChromaticScalePosition());
		}
		TEST_METHOD(B_ConstructorWithString_Test)
		{
			Position B = Position("B");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;
			Assert::AreEqual((int)expected, (int)B.GetChromaticScalePosition());
		}
		TEST_METHOD(C_ConstructorWithString_Test)
		{
			Position C = Position("C");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;
			Assert::AreEqual((int)expected, (int)C.GetChromaticScalePosition());
		}
		TEST_METHOD(CsDf_ConstructorWithString_Test)
		{
			Position CsDf = Position("CsDf");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;
			Assert::AreEqual((int)expected, (int)CsDf.GetChromaticScalePosition());
		}
		TEST_METHOD(D_ConstructorWithString_Test)
		{
			Position D = Position("D");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;
			Assert::AreEqual((int)expected, (int)D.GetChromaticScalePosition());
		}
		TEST_METHOD(DsEf_ConstructorWithString_Test)
		{
			Position DsEf = Position("DsEf");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;
			Assert::AreEqual((int)expected, (int)DsEf.GetChromaticScalePosition());
		}
		TEST_METHOD(E_ConstructorWithString_Test)
		{
			Position E = Position("E");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;
			Assert::AreEqual((int)expected, (int)E.GetChromaticScalePosition());
		}
		TEST_METHOD(F_ConstructorWithString_Test)
		{
			Position F = Position("F");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;
			Assert::AreEqual((int)expected, (int)F.GetChromaticScalePosition());
		}
		TEST_METHOD(FsGs_ConstructorWithString_Test)
		{
			Position FsGf = Position("FsGf");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;
			Assert::AreEqual((int)expected, (int)FsGf.GetChromaticScalePosition());
		}
		TEST_METHOD(G_ConstructorWithString_Test)
		{
			Position G = Position("G");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;
			Assert::AreEqual((int)expected, (int)G.GetChromaticScalePosition());
		}
		TEST_METHOD(GsAf_ConstructorWithString_Test)
		{
			Position GsAf("GsAf");
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;
			Assert::AreEqual((int)expected, (int)GsAf.GetChromaticScalePosition());
		}
	};
	TEST_CLASS(getPositionAsString_Test)
	{
		TEST_METHOD(NONE_getPositionAsString_Test)
		{
			Position NONE = Position(Music::Position::ChromaticScalePosition::NONE);
			string expected = "NONE";
			Assert::AreEqual(expected, NONE.GetPositionAsString());

		}
		TEST_METHOD(A_getPositionAsString_Test)
		{
			Position A = Position(Music::Position::ChromaticScalePosition::A);
			string expected = "A";
			Assert::AreEqual(expected, A.GetPositionAsString());

		}
		TEST_METHOD(AsBf_getPositionAsString_Test)
		{
			Position AsBf = Position(Music::Position::ChromaticScalePosition::AsBf);
			string expected = "AsBf";
			Assert::AreEqual(expected, AsBf.GetPositionAsString());

		}
		TEST_METHOD(B_getPositionAsString_Test)
		{
			Position B = Position(Music::Position::ChromaticScalePosition::B);
			string expected = "B";
			Assert::AreEqual(expected, B.GetPositionAsString());
		}
		TEST_METHOD(C_getPositionAsString_Test)
		{
			Position C = Position(Music::Position::ChromaticScalePosition::C);
			string expected = "C";
			Assert::AreEqual(expected, C.GetPositionAsString());
		}
		TEST_METHOD(CsDf_getPositionAsString_Test)
		{
			Position CsDf = Position(Music::Position::ChromaticScalePosition::CsDf);
			string expected = "CsDf";
			Assert::AreEqual(expected, CsDf.GetPositionAsString());

		}
		TEST_METHOD(D_getPositionAsString_Test)
		{
			Position D = Position(Music::Position::ChromaticScalePosition::D);
			string expected = "D";
			Assert::AreEqual(expected, D.GetPositionAsString());

		}
		TEST_METHOD(DsEf_getPositionAsString_Test)
		{
			Position DsEf = Position(Music::Position::ChromaticScalePosition::DsEf);
			string expected = "DsEf";
			Assert::AreEqual(expected, DsEf.GetPositionAsString());
		}
		TEST_METHOD(E_getPositionAsString_Test)
		{
			Position E = Position(Music::Position::ChromaticScalePosition::E);
			string expected = "E";
			Assert::AreEqual(expected, E.GetPositionAsString());

		}
		TEST_METHOD(F_getPositionAsString_Test)
		{
			Position F = Position(Music::Position::ChromaticScalePosition::F);
			string expected = "F";
			Assert::AreEqual(expected, F.GetPositionAsString());

		}
		TEST_METHOD(FsGf_getPositionAsString_Test)
		{
			Position FsGf = Position(Music::Position::ChromaticScalePosition::FsGf);
			string expectedsGf = "FsGf";
			Assert::AreEqual(expectedsGf, FsGf.GetPositionAsString());
		}
		TEST_METHOD(G_getPositionAsString_Test)
		{
			Position G = Position(Music::Position::ChromaticScalePosition::G);
			string expected = "G";
			Assert::AreEqual(expected, G.GetPositionAsString());

		}
		TEST_METHOD(GsAf_getPositionAsString_Test)
		{
			Position GsAf = Position(Music::Position::ChromaticScalePosition::GsAf);
			string expected = "GsAf";
			Assert::AreEqual(expected, GsAf.GetPositionAsString());
		}
	};
	TEST_CLASS(Operator_Test)
	{
		TEST_METHOD(assignemntWithPosition_test)
		{
			Music::Position expectedNone = Music::Position(Music::Position::ChromaticScalePosition::NONE);
			Music::Position expectedB = Music::Position(Music::Position::ChromaticScalePosition::B);
			Music::Position expectedC = Music::Position(Music::Position::ChromaticScalePosition::C);

			Music::Position testPositionNONE = Music::Position();
			Music::Position testPositionB = Music::Position(Music::Position::ChromaticScalePosition::B);
			Music::Position testPositionC = Music::Position(Music::Position::ChromaticScalePosition::C);

			Assert::AreEqual((int)testPositionNONE.GetChromaticScalePosition(), (int)expectedNone.GetChromaticScalePosition());
			Assert::AreEqual((int)testPositionB.GetChromaticScalePosition(), (int)expectedB.GetChromaticScalePosition());
			Assert::AreEqual((int)testPositionC.GetChromaticScalePosition(), (int)expectedC.GetChromaticScalePosition());
		}
		TEST_METHOD(assignemntWithInt_test)
		{
			Music::Position expectedNone = Music::Position(Music::Position::ChromaticScalePosition::NONE);
			Music::Position expectedB = Music::Position::ChromaticScalePosition::B;
			Music::Position expectedC = Music::Position::ChromaticScalePosition::C;

			Music::Position testPositionNONE = 0;
			Music::Position testPositionB = 3;
			Music::Position testPositionC = 4;

			Assert::AreEqual((int)testPositionNONE.GetChromaticScalePosition(), (int)expectedNone.GetChromaticScalePosition());
			Assert::AreEqual((int)testPositionB.GetChromaticScalePosition(), (int)expectedB.GetChromaticScalePosition());
			Assert::AreEqual((int)testPositionC.GetChromaticScalePosition(), (int)expectedC.GetChromaticScalePosition());
		}
		TEST_METHOD(assignemntWithString_test)
		{
			Music::Position expectedNone = Music::Position(Music::Position::ChromaticScalePosition::NONE);
			Music::Position expectedB = Music::Position::ChromaticScalePosition::B;
			Music::Position expectedC = Music::Position::ChromaticScalePosition::C;

			Music::Position testPositionNONE = "NONE";
			Music::Position testPositionB = "B";
			Music::Position testPositionC = "C";

			Assert::AreEqual((int)testPositionNONE.GetChromaticScalePosition(), (int)expectedNone.GetChromaticScalePosition());
			Assert::AreEqual((int)testPositionB.GetChromaticScalePosition(), (int)expectedB.GetChromaticScalePosition());
			Assert::AreEqual((int)testPositionC.GetChromaticScalePosition(), (int)expectedC.GetChromaticScalePosition());
		}
		TEST_METHOD(preIncrement_Test)
		{
			Position B("B");
			Position during;
			Position expectedBefore = Position("B");
			Position expectedDuring = Position("C");
			Position expectedAfter = Position("C");

			Assert::AreEqual((int)expectedBefore.GetChromaticScalePosition(), (int)B.GetChromaticScalePosition());
			during = ++B;
			Assert::AreEqual((int)expectedAfter.GetChromaticScalePosition(), (int)during.GetChromaticScalePosition());
			Assert::AreEqual((int)expectedAfter.GetChromaticScalePosition(), (int)B.GetChromaticScalePosition());
		}
		TEST_METHOD(postIncrement_Test)
		{
			Position B("B");
			Position during;
			Position expectedBefore = Position("B");
			Position expectedDuring = Position("B");
			Position expectedAfter = Position("C");

			Assert::AreEqual((int)expectedBefore.GetChromaticScalePosition(), (int)B.GetChromaticScalePosition());
			during = B++;
			Assert::AreEqual((int)expectedBefore.GetChromaticScalePosition(), (int)during.GetChromaticScalePosition());
			Assert::AreEqual((int)expectedAfter.GetChromaticScalePosition(), (int)B.GetChromaticScalePosition());
		}
		TEST_METHOD(preDeincrement_Test)
		{
			Position C("C");
			Position during;
			Position expectedBefore = Position("C");
			Position expectedDuring = Position("C");
			Position expectedAfter = Position("B");

			Assert::AreEqual((int)expectedBefore.GetChromaticScalePosition(), (int)C.GetChromaticScalePosition());
			during = --C;
			Assert::AreEqual((int)expectedAfter.GetChromaticScalePosition(), (int)during.GetChromaticScalePosition());
			Assert::AreEqual((int)expectedAfter.GetChromaticScalePosition(), (int)C.GetChromaticScalePosition());
		}
		TEST_METHOD(postDeIncrement_Test)
		{
			Position C("C");
			Position during;
			Position expectedBefore = Position("C");
			Position expectedDuring = Position("B");
			Position expectedAfter = Position("B");

			Assert::AreEqual((int)expectedBefore.GetChromaticScalePosition(), (int)C.GetChromaticScalePosition());
			during = C--;
			Assert::AreEqual((int)expectedBefore.GetChromaticScalePosition(), (int)during.GetChromaticScalePosition());
			Assert::AreEqual((int)expectedAfter.GetChromaticScalePosition(), (int)C.GetChromaticScalePosition());
		}
		TEST_METHOD(isEqualOperator_Test)
		{
			Position A("A");
			Position B1("B");
			Position B2("B");
			Position C("C");

			Assert::IsFalse(A == B1);
			Assert::IsTrue(B1 == B2);
			Assert::IsTrue(B2 == B1);
			Assert::IsTrue(A == A);
			Assert::IsTrue(B1 == B2);
			Assert::IsFalse(B2 == C);
		}
		TEST_METHOD(isNotEqualOperator_Test)
		{
			Position A("A");
			Position B1("B");
			Position B2("B");
			Position C("C");

			Assert::IsTrue(A != B1);
			Assert::IsFalse(B1 != B2);
			Assert::IsFalse(B2 != B1);
			Assert::IsFalse(A != A);
			Assert::IsFalse(B1 != B2);
			Assert::IsTrue(B2 != C);
		}
		TEST_METHOD(isGreaterThan_Test)
		{
			Position A("A");
			Position B("B");
			Position C("C");

			Assert::IsTrue(C > B);
			Assert::IsTrue(B > A);
			Assert::IsFalse(B > C);
			Assert::IsFalse(A > B);
		}
		TEST_METHOD(isGreaterThanOrEqual_Test)
		{
			Position A("A");
			Position B1("B");
			Position B2("B");
			Position C("C");

			Assert::IsTrue(C >= B2);
			Assert::IsTrue(B2 >= B1);
			Assert::IsTrue(B1 >= A);
			Assert::IsFalse(B2 >= C);
			Assert::IsTrue(B1 >= B2);
			Assert::IsFalse(A >= B1);
		}
		TEST_METHOD(isLessThan_Test)
		{
			Position A("A");
			Position B("B");
			Position C("C");

			Assert::IsTrue(A < B);
			Assert::IsFalse(C < B);
		}
		TEST_METHOD(isLessThanOrEqualTo_Test)
		{
			Position A("A");
			Position B1("B");
			Position B2("B");
			Position C("C");

			Assert::IsTrue(A <= B1);
			Assert::IsTrue(B1 <= B2);
			Assert::IsTrue(B2 <= C);
			Assert::IsFalse(C <= B2);
			Assert::IsTrue(B2 <= B1);
			Assert::IsFalse(B1 <= A);
		};
	};
};
