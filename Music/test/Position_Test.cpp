#pragma once
#include "CppUnitTest.h"
#include "../src/Pitch.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;


namespace Position_Test
{
	TEST_CLASS(ConstructorWithPosition_Test)
	{
		TEST_METHOD(NONE_ConstructorWithPosition_Test)
		{
			Music::Pitch expected = Music::Pitch("NONE");
			Pitch NONE = Pitch();
			Assert::AreEqual((int)expected.GetPosition(), (int)NONE.GetPosition());
		}
		TEST_METHOD(A_ConstructorWithPosition_Test)
		{
			Music::Pitch expected = Music::Pitch("A");
			Pitch A = Pitch(Music::Pitch("A"));
			Assert::AreEqual((int)expected.GetPosition(), (int)A.GetPosition());
		}
		TEST_METHOD(AsBf_ConstructorWithPosition_Test)
		{
			Pitch AsBf = Pitch(Music::Pitch("AsBf"));
			Music::Pitch expected = Music::Pitch("AsBf");
			Assert::AreEqual((int)expected.GetPosition(), (int)AsBf.GetPosition());
		}
		TEST_METHOD(B_ConstructorWithPosition_Test)
		{
			Pitch B = Pitch(Music::Pitch("B"));
			Music::Pitch expected = Music::Pitch("B");
			Assert::AreEqual((int)expected.GetPosition(), (int)B.GetPosition());
		}
		TEST_METHOD(C_ConstructorWithPosition_Test)
		{
			Pitch C = Pitch(Music::Pitch("C"));
			Music::Pitch expected = Music::Pitch("C");
			Assert::AreEqual((int)expected.GetPosition(), (int)C.GetPosition());
		}
		TEST_METHOD(CsDf_ConstructorWithPosition_Test)
		{
			Pitch CsDf = Pitch(Music::Pitch("CsDf"));
			Music::Pitch expected = Music::Pitch("CsDf");
			Assert::AreEqual((int)expected.GetPosition(), (int)CsDf.GetPosition());
		}
		TEST_METHOD(D_ConstructorWithPosition_Test)
		{
			Pitch D = Pitch(Music::Pitch("D"));
			Music::Pitch expected = Music::Pitch("D");
			Assert::AreEqual((int)expected.GetPosition(), (int)D.GetPosition());
		}
		TEST_METHOD(DsEf_ConstructorWithPosition_Test)
		{
			Pitch DsEf = Pitch(Music::Pitch("DsEf"));
			Music::Pitch expected = Music::Pitch("DsEf");
			Assert::AreEqual((int)expected.GetPosition(), (int)DsEf.GetPosition());
		}
		TEST_METHOD(E_ConstructorWithPosition_Test)
		{
			Pitch E = Pitch(Music::Pitch("E"));
			Music::Pitch expected = Music::Pitch("E");
			Assert::AreEqual((int)expected.GetPosition(), (int)E.GetPosition());
		}
		TEST_METHOD(F_ConstructorWithPosition_Test)
		{
			Pitch F = Pitch(Music::Pitch("F"));
			Music::Pitch expected = Music::Pitch("F");
			Assert::AreEqual((int)expected.GetPosition(), (int)F.GetPosition());
		}
		TEST_METHOD(FsGf_ConstructorWithPosition_Test)
		{
			Pitch FsGf = Pitch(Music::Pitch("FsGf"));
			Music::Pitch expected = Music::Pitch("FsGf");
			Assert::AreEqual((int)expected.GetPosition(), (int)FsGf.GetPosition());
		}
		TEST_METHOD(G_ConstructorWithPosition_Test)
		{
			Pitch G = Pitch(Music::Pitch("G"));
			Music::Pitch expected = Music::Pitch("G");
			Assert::AreEqual((int)expected.GetPosition(), (int)G.GetPosition());
		}
		TEST_METHOD(GsAf_ConstructorWithPosition_Test)
		{
			Pitch GsAf = Pitch(Music::Pitch("GsAf"));
			Music::Pitch expected = Music::Pitch("GsAf");
			Assert::AreEqual((int)expected.GetPosition(), (int)GsAf.GetPosition());
		}
	};
	TEST_CLASS(ConstructorWithInt_Test)
	{
		TEST_METHOD(NONE_ConstructorWithInt_Test)
		{
			Pitch A = Pitch(0);
			Music::Pitch expected = Music::Pitch("NONE");
			Assert::AreEqual((int)expected.GetPosition(), (int)A.GetPosition());
		}
		TEST_METHOD(A_ConstructorWithInt_Test)
		{
			Pitch A = Pitch(1);
			Music::Pitch expected = Music::Pitch("A");
			Assert::AreEqual((int)expected.GetPosition(), (int)A.GetPosition());
		}
		TEST_METHOD(AsBf_ConstructorWithInt_Test)
		{
			Pitch AsBf = Pitch(2);
			Music::Pitch expected = Music::Pitch("AsBf");
			Assert::AreEqual((int)expected.GetPosition(), (int)AsBf.GetPosition());
		}
		TEST_METHOD(B_ConstructorWithInt_Test)
		{
			Pitch B = Pitch(3);
			Music::Pitch expected = Music::Pitch("B");
			Assert::AreEqual((int)expected.GetPosition(), (int)B.GetPosition());
		}
		TEST_METHOD(C_ConstructorWithInt_Test)
		{
			Pitch C = Pitch(4);
			Music::Pitch expected = Music::Pitch("C");
			Assert::AreEqual((int)expected.GetPosition(), (int)C.GetPosition());
		}
		TEST_METHOD(CsDf_ConstructorWithInt_Test)
		{
			Pitch CsDf = Pitch(5);
			Music::Pitch expected = Music::Pitch("CsDf");
			Assert::AreEqual((int)expected.GetPosition(), (int)CsDf.GetPosition());

		}
		TEST_METHOD(D_ConstructorWithInt_Test)
		{
			Pitch D = Pitch(6);
			Music::Pitch expected = Music::Pitch("D");
			Assert::AreEqual((int)expected.GetPosition(), (int)D.GetPosition());

		}
		TEST_METHOD(DsEf_ConstructorWithInt_Test)
		{
			Pitch DsEf = Pitch(7);
			Music::Pitch expected = Music::Pitch("DsEf");
			Assert::AreEqual((int)expected.GetPosition(), (int)DsEf.GetPosition());
		}
		TEST_METHOD(E_ConstructorWithInt_Test)
		{
			Pitch E = Pitch(8);
			Music::Pitch expected = Music::Pitch("E");
			Assert::AreEqual((int)expected.GetPosition(), (int)E.GetPosition());

		}
		TEST_METHOD(F_ConstructorWithInt_Test)
		{
			Pitch F = Pitch(9);
			Music::Pitch expected = Music::Pitch("F");
			Assert::AreEqual((int)expected.GetPosition(), (int)F.GetPosition());

		}
		TEST_METHOD(FsGf_ConstructorWithInt_Test)
		{
			Pitch FsGf = Pitch(10);
			Music::Pitch expected = Music::Pitch("FsGf");
			Assert::AreEqual((int)expected.GetPosition(), (int)FsGf.GetPosition());
		}
		TEST_METHOD(G_ConstructorWithInt_Test)
		{
			Pitch G = Pitch(11);
			Music::Pitch expected = Music::Pitch("G");
			Assert::AreEqual((int)expected.GetPosition(), (int)G.GetPosition());

		}
		TEST_METHOD(GsAf_ConstructorWithInt_Test)
		{
			Pitch GsAf = Pitch(12);
			Music::Pitch expected = Music::Pitch("GsAf");
			Assert::AreEqual((int)expected.GetPosition(), (int)GsAf.GetPosition());
		}
	};
	TEST_CLASS(ConstructorWithString_Test)
	{
		TEST_METHOD(NONE_ConstructorWithString_Test)
		{
			Pitch NONE = Pitch("NONE");
			Music::Pitch expected = Music::Pitch("NONE");
			Assert::AreEqual((int)expected.GetPosition(), (int)NONE.GetPosition());
		}
		TEST_METHOD(A_ConstructorWithString_Test)
		{
			Pitch A = Pitch("A");
			Music::Pitch expected = Music::Pitch("A");
			Assert::AreEqual((int)expected.GetPosition(), (int)A.GetPosition());
		}
		TEST_METHOD(AsBf_ConstructorWithString_Test)
		{
			Pitch AsBf = Pitch("AsBf");
			Music::Pitch expected = Music::Pitch("AsBf");
			Assert::AreEqual((int)expected.GetPosition(), (int)AsBf.GetPosition());
		}
		TEST_METHOD(B_ConstructorWithString_Test)
		{
			Pitch B = Pitch("B");
			Music::Pitch expected = Music::Pitch("B");
			Assert::AreEqual((int)expected.GetPosition(), (int)B.GetPosition());
		}
		TEST_METHOD(C_ConstructorWithString_Test)
		{
			Pitch C = Pitch("C");
			Music::Pitch expected = Music::Pitch("C");
			Assert::AreEqual((int)expected.GetPosition(), (int)C.GetPosition());
		}
		TEST_METHOD(CsDf_ConstructorWithString_Test)
		{
			Pitch CsDf = Pitch("CsDf");
			Music::Pitch expected = Music::Pitch("CsDf");
			Assert::AreEqual((int)expected.GetPosition(), (int)CsDf.GetPosition());
		}
		TEST_METHOD(D_ConstructorWithString_Test)
		{
			Pitch D = Pitch("D");
			Music::Pitch expected = Music::Pitch("D");
			Assert::AreEqual((int)expected.GetPosition(), (int)D.GetPosition());
		}
		TEST_METHOD(DsEf_ConstructorWithString_Test)
		{
			Pitch DsEf = Pitch("DsEf");
			Music::Pitch expected = Music::Pitch("DsEf");
			Assert::AreEqual((int)expected.GetPosition(), (int)DsEf.GetPosition());
		}
		TEST_METHOD(E_ConstructorWithString_Test)
		{
			Pitch E = Pitch("E");
			Music::Pitch expected = Music::Pitch("E");
			Assert::AreEqual((int)expected.GetPosition(), (int)E.GetPosition());
		}
		TEST_METHOD(F_ConstructorWithString_Test)
		{
			Pitch F = Pitch("F");
			Music::Pitch expected = Music::Pitch("F");
			Assert::AreEqual((int)expected.GetPosition(), (int)F.GetPosition());
		}
		TEST_METHOD(FsGs_ConstructorWithString_Test)
		{
			Pitch FsGf = Pitch("FsGf");
			Music::Pitch expected = Music::Pitch("FsGf");
			Assert::AreEqual((int)expected.GetPosition(), (int)FsGf.GetPosition());
		}
		TEST_METHOD(G_ConstructorWithString_Test)
		{
			Pitch G = Pitch("G");
			Music::Pitch expected = Music::Pitch("G");
			Assert::AreEqual((int)expected.GetPosition(), (int)G.GetPosition());
		}
		TEST_METHOD(GsAf_ConstructorWithString_Test)
		{
			Pitch GsAf("GsAf");
			Music::Pitch expected = Music::Pitch("GsAf");
			Assert::AreEqual((int)expected.GetPosition(), (int)GsAf.GetPosition());
		}
	};
	TEST_CLASS(getPositionAsString_Test)
	{
		TEST_METHOD(NONE_getPositionAsString_Test)
		{
			Pitch NONE = Pitch(Music::Pitch("NONE"));
			string expected = "NONE";
			Assert::AreEqual(expected, NONE.GetPositionAsString());

		}
		TEST_METHOD(A_getPositionAsString_Test)
		{
			Pitch A = Pitch(Music::Pitch("A"));
			string expected = "A";
			Assert::AreEqual(expected, A.GetPositionAsString());

		}
		TEST_METHOD(AsBf_getPositionAsString_Test)
		{
			Pitch AsBf = Pitch(Music::Pitch("AsBf"));
			string expected = "AsBf";
			Assert::AreEqual(expected, AsBf.GetPositionAsString());

		}
		TEST_METHOD(B_getPositionAsString_Test)
		{
			Pitch B = Pitch(Music::Pitch("B"));
			string expected = "B";
			Assert::AreEqual(expected, B.GetPositionAsString());
		}
		TEST_METHOD(C_getPositionAsString_Test)
		{
			Pitch C = Pitch(Music::Pitch("C"));
			string expected = "C";
			Assert::AreEqual(expected, C.GetPositionAsString());
		}
		TEST_METHOD(CsDf_getPositionAsString_Test)
		{
			Pitch CsDf = Pitch(Music::Pitch("CsDf"));
			string expected = "CsDf";
			Assert::AreEqual(expected, CsDf.GetPositionAsString());

		}
		TEST_METHOD(D_getPositionAsString_Test)
		{
			Pitch D = Pitch(Music::Pitch("D"));
			string expected = "D";
			Assert::AreEqual(expected, D.GetPositionAsString());

		}
		TEST_METHOD(DsEf_getPositionAsString_Test)
		{
			Pitch DsEf = Pitch(Music::Pitch("DsEf"));
			string expected = "DsEf";
			Assert::AreEqual(expected, DsEf.GetPositionAsString());
		}
		TEST_METHOD(E_getPositionAsString_Test)
		{
			Pitch E = Pitch(Music::Pitch("E"));
			string expected = "E";
			Assert::AreEqual(expected, E.GetPositionAsString());

		}
		TEST_METHOD(F_getPositionAsString_Test)
		{
			Pitch F = Pitch(Music::Pitch("F"));
			string expected = "F";
			Assert::AreEqual(expected, F.GetPositionAsString());

		}
		TEST_METHOD(FsGf_getPositionAsString_Test)
		{
			Pitch FsGf = Pitch(Music::Pitch("FsGf"));
			string expectedsGf = "FsGf";
			Assert::AreEqual(expectedsGf, FsGf.GetPositionAsString());
		}
		TEST_METHOD(G_getPositionAsString_Test)
		{
			Pitch G = Pitch(Music::Pitch("G"));
			string expected = "G";
			Assert::AreEqual(expected, G.GetPositionAsString());

		}
		TEST_METHOD(GsAf_getPositionAsString_Test)
		{
			Pitch GsAf = Pitch(Music::Pitch("GsAf"));
			string expected = "GsAf";
			Assert::AreEqual(expected, GsAf.GetPositionAsString());
		}
	};
	TEST_CLASS(Operator_Test)
	{
		TEST_METHOD(assignemntWithPosition_test)
		{
			Music::Pitch expectedNone = Music::Pitch(Music::Pitch("NONE"));
			Music::Pitch expectedB = Music::Pitch(Music::Pitch("B"));
			Music::Pitch expectedC = Music::Pitch(Music::Pitch("C"));

			Music::Pitch testPositionNONE = Music::Pitch();
			Music::Pitch testPositionB = Music::Pitch(Music::Pitch("B"));
			Music::Pitch testPositionC = Music::Pitch(Music::Pitch("C"));

			Assert::AreEqual((int)testPositionNONE.GetPosition(), (int)expectedNone.GetPosition());
			Assert::AreEqual((int)testPositionB.GetPosition(), (int)expectedB.GetPosition());
			Assert::AreEqual((int)testPositionC.GetPosition(), (int)expectedC.GetPosition());
		}
		TEST_METHOD(assignemntWithInt_test)
		{
			Music::Pitch expectedNone = Music::Pitch(Music::Pitch("NONE"));
			Music::Pitch expectedB = Music::Pitch("B");
			Music::Pitch expectedC = Music::Pitch("C");

			Music::Pitch testPositionNONE = 0;
			Music::Pitch testPositionB = 3;
			Music::Pitch testPositionC = 4;

			Assert::AreEqual((int)testPositionNONE.GetPosition(), (int)expectedNone.GetPosition());
			Assert::AreEqual((int)testPositionB.GetPosition(), (int)expectedB.GetPosition());
			Assert::AreEqual((int)testPositionC.GetPosition(), (int)expectedC.GetPosition());
		}
		TEST_METHOD(assignemntWithString_test)
		{
			Music::Pitch expectedNone = Music::Pitch(Music::Pitch("NONE"));
			Music::Pitch expectedB = Music::Pitch("B");
			Music::Pitch expectedC = Music::Pitch("C");

			Music::Pitch testPositionNONE = "NONE";
			Music::Pitch testPositionB = "B";
			Music::Pitch testPositionC = "C";

			Assert::AreEqual((int)testPositionNONE.GetPosition(), (int)expectedNone.GetPosition());
			Assert::AreEqual((int)testPositionB.GetPosition(), (int)expectedB.GetPosition());
			Assert::AreEqual((int)testPositionC.GetPosition(), (int)expectedC.GetPosition());
		}
		TEST_METHOD(preIncrement_Test)
		{
			Pitch B("B");
			Pitch during;
			Pitch expectedBefore = Pitch("B");
			Pitch expectedDuring = Pitch("C");
			Pitch expectedAfter = Pitch("C");

			Assert::AreEqual((int)expectedBefore.GetPosition(), (int)B.GetPosition());
			during = ++B;
			Assert::AreEqual((int)expectedAfter.GetPosition(), (int)during.GetPosition());
			Assert::AreEqual((int)expectedAfter.GetPosition(), (int)B.GetPosition());
		}
		TEST_METHOD(postIncrement_Test)
		{
			Pitch B("B");
			Pitch during;
			Pitch expectedBefore = Pitch("B");
			Pitch expectedDuring = Pitch("B");
			Pitch expectedAfter = Pitch("C");

			Assert::AreEqual((int)expectedBefore.GetPosition(), (int)B.GetPosition());
			during = B++;
			Assert::AreEqual((int)expectedBefore.GetPosition(), (int)during.GetPosition());
			Assert::AreEqual((int)expectedAfter.GetPosition(), (int)B.GetPosition());
		}
		TEST_METHOD(preDeincrement_Test)
		{
			Pitch C("C");
			Pitch during;
			Pitch expectedBefore = Pitch("C");
			Pitch expectedDuring = Pitch("C");
			Pitch expectedAfter = Pitch("B");

			Assert::AreEqual((int)expectedBefore.GetPosition(), (int)C.GetPosition());
			during = --C;
			Assert::AreEqual((int)expectedAfter.GetPosition(), (int)during.GetPosition());
			Assert::AreEqual((int)expectedAfter.GetPosition(), (int)C.GetPosition());
		}
		TEST_METHOD(postDeIncrement_Test)
		{
			Pitch C("C");
			Pitch during;
			Pitch expectedBefore = Pitch("C");
			Pitch expectedDuring = Pitch("B");
			Pitch expectedAfter = Pitch("B");

			Assert::AreEqual((int)expectedBefore.GetPosition(), (int)C.GetPosition());
			during = C--;
			Assert::AreEqual((int)expectedBefore.GetPosition(), (int)during.GetPosition());
			Assert::AreEqual((int)expectedAfter.GetPosition(), (int)C.GetPosition());
		}
		TEST_METHOD(isEqualOperator_Test)
		{
			Pitch A("A");
			Pitch B1("B");
			Pitch B2("B");
			Pitch C("C");

			Assert::IsFalse(A == B1);
			Assert::IsTrue(B1 == B2);
			Assert::IsTrue(B2 == B1);
			Assert::IsTrue(A == A);
			Assert::IsTrue(B1 == B2);
			Assert::IsFalse(B2 == C);
		}
		TEST_METHOD(isNotEqualOperator_Test)
		{
			Pitch A("A");
			Pitch B1("B");
			Pitch B2("B");
			Pitch C("C");

			Assert::IsTrue(A != B1);
			Assert::IsFalse(B1 != B2);
			Assert::IsFalse(B2 != B1);
			Assert::IsFalse(A != A);
			Assert::IsFalse(B1 != B2);
			Assert::IsTrue(B2 != C);
		}
		TEST_METHOD(isGreaterThan_Test)
		{
			Pitch A("A");
			Pitch B("B");
			Pitch C("C");

			Assert::IsTrue(C > B);
			Assert::IsTrue(B > A);
			Assert::IsFalse(B > C);
			Assert::IsFalse(A > B);
		}
		TEST_METHOD(isGreaterThanOrEqual_Test)
		{
			Pitch A("A");
			Pitch B1("B");
			Pitch B2("B");
			Pitch C("C");

			Assert::IsTrue(C >= B2);
			Assert::IsTrue(B2 >= B1);
			Assert::IsTrue(B1 >= A);
			Assert::IsFalse(B2 >= C);
			Assert::IsTrue(B1 >= B2);
			Assert::IsFalse(A >= B1);
		}
		TEST_METHOD(isLessThan_Test)
		{
			Pitch A("A");
			Pitch B("B");
			Pitch C("C");

			Assert::IsTrue(A < B);
			Assert::IsFalse(C < B);
		}
		TEST_METHOD(isLessThanOrEqualTo_Test)
		{
			Pitch A("A");
			Pitch B1("B");
			Pitch B2("B");
			Pitch C("C");

			Assert::IsTrue(A <= B1);
			Assert::IsTrue(B1 <= B2);
			Assert::IsTrue(B2 <= C);
			Assert::IsFalse(C <= B2);
			Assert::IsTrue(B2 <= B1);
			Assert::IsFalse(B1 <= A);
		};
	};
};
