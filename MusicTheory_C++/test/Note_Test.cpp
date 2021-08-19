#pragma once
#include "CppUnitTest.h"
#include "../src/Note.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Note_Test
{
	TEST_CLASS(Constructor_String_Test)
	{
		TEST_METHOD(A_ConstructorFromString_Test)
		{
			Music::Pitch expected = Music::Pitch("A");
			Note A = Note("A");
			Assert::AreEqual((int)expected.GetPosition(), (int)A.GetPosition().GetPosition());
		}
		TEST_METHOD(AsBf_ConstructorFromString_Test)
		{
			Music::Pitch expected = Music::Pitch("AsBf");
			Note AsBf = Note("AsBf");
			Assert::AreEqual((int)expected.GetPosition(), (int)AsBf.GetPosition().GetPosition());
		}
		TEST_METHOD(B_ConstructorFromString_Test)
		{
			Music::Pitch expected = Music::Pitch("B");
			Note B = Note("B");
			Assert::AreEqual((int)expected.GetPosition(), (int)B.GetPosition().GetPosition());
		}
		TEST_METHOD(C_ConstructorFromString_Test)
		{
			Music::Pitch expected = Music::Pitch("C");
			Note C = Note("C");
			Assert::AreEqual((int)expected.GetPosition(), (int)C.GetPosition().GetPosition());
		}
		TEST_METHOD(CsDf_ConstructorFromString_Test)
		{
			Music::Pitch expected = Music::Pitch("CsDf");
			Note CsDf = Note("CsDf");
			Assert::AreEqual((int)expected.GetPosition(), (int)CsDf.GetPosition().GetPosition());
		}
		TEST_METHOD(D_ConstructorFromString_Test)
		{
			Music::Pitch expected = Music::Pitch("D");
			Note D = Note("D");
			Assert::AreEqual((int)expected.GetPosition(), (int)D.GetPosition().GetPosition());
		}
		TEST_METHOD(DsEf_ConstructorFromString_Test)
		{
			Music::Pitch expected = Music::Pitch("DsEf");
			Note DsEf = Note("DsEf");
			Assert::AreEqual((int)expected.GetPosition(), (int)DsEf.GetPosition().GetPosition());
		}
		TEST_METHOD(E_ConstructorFromString_Test)
		{
			Music::Pitch expected = Music::Pitch("E");
			Note E = Note("E");
			Assert::AreEqual((int)expected.GetPosition(), (int)E.GetPosition().GetPosition());
		}
		TEST_METHOD(F_ConstructorFromString_Test)
		{
			Music::Pitch expected = Music::Pitch("F");
			Note F = Note("F");
			Assert::AreEqual((int)expected.GetPosition(), (int)F.GetPosition().GetPosition());
		}
		TEST_METHOD(FsGf_ConstructorFromString_Test)
		{
			Music::Pitch expected = Music::Pitch("FsGf");
			Note FsGf = Note("FsGf");
			Assert::AreEqual((int)expected.GetPosition(), (int)FsGf.GetPosition().GetPosition());
		}
		TEST_METHOD(G_ConstructorFromString_Test)
		{
			Music::Pitch expected = Music::Pitch("G");
			Note G = Note("G");
			Assert::AreEqual((int)expected.GetPosition(), (int)G.GetPosition().GetPosition());
		}
		TEST_METHOD(GsAf_ConstructorFromString_Test)
		{
			Music::Pitch expected = Music::Pitch("GsAf");
			Note GsAf = Note("GsAf");
			Assert::AreEqual((int)expected.GetPosition(), (int)GsAf.GetPosition().GetPosition());
		}
	};
	TEST_CLASS(getWeight_Test)
	{
		TEST_METHOD(A_getWeight_Test)
		{
			int expected = 2;
			Note A = Note(Music::Pitch("A"));
			Assert::AreEqual((int)expected , (int)A.GetPosition().GetWeight());
		}
		TEST_METHOD(AsBf_getWeight_Test)
		{
			int expected = 1;
			Note AsBf = Note(Music::Pitch("AsBf"));
			Assert::AreEqual((int)expected, (int)AsBf.GetPosition().GetWeight());
		}
		TEST_METHOD(B_getWeight_Test)
		{
			int expected = 2;
			Note B = Note(Music::Pitch("B"));
			Assert::AreEqual((int)expected, (int)B.GetPosition().GetWeight());
		}
		TEST_METHOD(C_getWeight_Test)
		{
			int expected = 2;
			Note C = Note(Music::Pitch("C"));
			Assert::AreEqual((int)expected, (int)C.GetPosition().GetWeight());
		}
		TEST_METHOD(CsDf_getWeight_Test)
		{
			int expected = 1;
			Note CsDf = Note(Music::Pitch("CsDf"));
			Assert::AreEqual((int)expected, (int)CsDf.GetPosition().GetWeight());
		}
		TEST_METHOD(D_getWeight_Test)
		{
			int expected = 2;
			Note D = Note(Music::Pitch("D"));
			Assert::AreEqual((int)expected, (int)D.GetPosition().GetWeight());
		}
		TEST_METHOD(DsEf_getWeight_Test)
		{
			int expected = 1;
			Note DsEf = Note(Music::Pitch("DsEf"));
			Assert::AreEqual((int)expected, (int)DsEf.GetPosition().GetWeight());
		}
		TEST_METHOD(E_getWeight_Test)
		{
			int expected = 2;
			Note E = Note(Music::Pitch("E"));
			Assert::AreEqual((int)expected, (int)E.GetPosition().GetWeight());
		}
		TEST_METHOD(F_getWeight_Test)
		{
			int expected = 2;
			Note F = Note(Music::Pitch("F"));
			Assert::AreEqual((int)expected, (int)F.GetPosition().GetWeight());
		}
		TEST_METHOD(FsGf_getWeight_Test)
		{
			int expected = 1;
			Note FsGf = Note(Music::Pitch("FsGf"));
			Assert::AreEqual((int)expected, (int)FsGf.GetPosition().GetWeight());
		}
		TEST_METHOD(G_getWeight_Test)
		{
			int expected = 2;
			Note G = Note(Music::Pitch("G"));
			Assert::AreEqual((int)expected, (int)G.GetPosition().GetWeight());
		}
		TEST_METHOD(GsAf_getWeight_Test)
		{
			int expected = 1;
			Note GsAf = Note(Music::Pitch("GsAf"));
			Assert::AreEqual((int)expected, (int)GsAf.GetPosition().GetWeight());
		}
	};
	TEST_CLASS(getWeightAsString_Test)
	{
		TEST_METHOD(A_getWeightAsString_Test)
		{
			Note A = Note(Music::Pitch("A"));
			string expected = "Whole";
			Assert::AreEqual(expected, A.GetPosition().GetWeightAsString());
		}
		TEST_METHOD(AsBf_getWeightAsString_Test)
		{
			Note AsBf = Note(Music::Pitch("AsBf"));
			string expected = "Half";
			Assert::AreEqual(expected, AsBf.GetPosition().GetWeightAsString());
		}
		TEST_METHOD(B_getWeightAsString_Test)
		{
			Note B = Note(Music::Pitch("B"));
			string expected = "Whole";
			Assert::AreEqual(expected, B.GetPosition().GetWeightAsString());
		}
		TEST_METHOD(C_getWeightAsString_Test)
		{
			Note C = Note(Music::Pitch("C"));
			string expected = "Whole";
			Assert::AreEqual(expected, C.GetPosition().GetWeightAsString());
		}
		TEST_METHOD(CsDf_getWeightAsString_Test)
		{
			Note CsDf = Note(Music::Pitch("CsDf"));
			string expected = "Half";
			Assert::AreEqual(expected, CsDf.GetPosition().GetWeightAsString());
		}
		TEST_METHOD(D_getWeightAsString_Test)
		{
			Note D = Note(Music::Pitch("D"));
			string expected = "Whole";
			Assert::AreEqual(expected, D.GetPosition().GetWeightAsString());
		}
		TEST_METHOD(DsEf_getWeightAsString_Test)
		{
			Note DsEf = Note(Music::Pitch("DsEf"));
			string expected = "Half";
			Assert::AreEqual(expected, DsEf.GetPosition().GetWeightAsString());
		}
		TEST_METHOD(E_getWeightAsString_Test)
		{
			Note E = Note(Music::Pitch("E"));
			string expected = "Whole";
			Assert::AreEqual(expected, E.GetPosition().GetWeightAsString());
		}
		TEST_METHOD(F_getWeightAsString_Test)
		{
			Note F = Note(Music::Pitch("F"));
			string expected = "Whole";
			Assert::AreEqual(expected, F.GetPosition().GetWeightAsString());
		}
		TEST_METHOD(FsGf_getWeightAsString_Test)
		{
			Note FsGf = Note(Music::Pitch("FsGf"));
			string expected = "Half";
			Assert::AreEqual(expected, FsGf.GetPosition().GetWeightAsString());
		}
		TEST_METHOD(G_getWeightAsString_Test)
		{
			Note G = Note(Music::Pitch("G"));
			string expected = "Whole";
			Assert::AreEqual(expected, G.GetPosition().GetWeightAsString());
		}
		TEST_METHOD(GsAf_getWeightAsString_Test)
		{
			Note GsAf = Note(Music::Pitch("GsAf"));
			string expected = "Half";
			Assert::AreEqual(expected, GsAf.GetPosition().GetWeightAsString());
		}
	};
	TEST_CLASS(Operator_Test)
	{
		TEST_METHOD(assignmentWithMusicObject_Test)
		{
			Music::Pitch expectedNoteNone = Music::Pitch();
			Music::Pitch expectedBNone = Music::Pitch("B");
			Music::Pitch expectedCNone = Music::Pitch("C");

			Music::Note testNoteNONE = Music::Note();
			Music::Note testNoteB = Music::Note(Music::Pitch("B"));
			Music::Note testNoteC = Music::Note(Music::Pitch("C"));

			Assert::AreEqual((int)testNoteNONE.GetPosition().GetPosition(), (int)expectedNoteNone.GetPosition());
			Assert::AreEqual((int)testNoteB.GetPosition().GetPosition(), (int)expectedBNone.GetPosition());
			Assert::AreEqual((int)testNoteC.GetPosition().GetPosition(), (int)expectedCNone.GetPosition());
		}
		TEST_METHOD(assignemntWithPosition_test)
		{
			Music::Pitch expectedNoteNone = Music::Pitch("NONE");
			Music::Pitch expectedBNone = Music::Pitch("B");
			Music::Pitch expectedCNone = Music::Pitch("C");

			Music::Note testNoteNONE = Music::Note();
			Music::Note testNoteB = Music::Note(Music::Pitch("B"));
			Music::Note testNoteC = Music::Note(Music::Pitch("C"));

			Assert::AreEqual((int)testNoteNONE.GetPosition().GetPosition(), (int)expectedNoteNone.GetPosition());
			Assert::AreEqual((int)testNoteB.GetPosition().GetPosition(), (int)expectedBNone.GetPosition());
			Assert::AreEqual((int)testNoteC.GetPosition().GetPosition(), (int)expectedCNone.GetPosition());
		}
		TEST_METHOD(assignemntWithInt_test)
		{
			Music::Pitch expectedNoteNone = Music::Pitch();
			Music::Pitch expectedBNone = Music::Pitch("B");
			Music::Pitch expectedCNone = Music::Pitch("C");

			Music::Note testNoteNONE = 0;
			Music::Note testNoteB = 3;
			Music::Note testNoteC = 4;

			Assert::AreEqual((int)testNoteNONE.GetPosition().GetPosition(), (int)expectedNoteNone.GetPosition());
			Assert::AreEqual((int)testNoteB.GetPosition().GetPosition(), (int)expectedBNone.GetPosition());
			Assert::AreEqual((int)testNoteC.GetPosition().GetPosition(), (int)expectedCNone.GetPosition());
		}
		TEST_METHOD(assignemntWithString_test)
		{
			Music::Pitch expectedNoteNone = Music::Pitch();
			Music::Pitch expectedBNone = Music::Pitch("B");
			Music::Pitch expectedCNone = Music::Pitch("C");

			Music::Note testNoteNONE = "NONE";
			Music::Note testNoteB = "B";
			Music::Note testNoteC = "C";

			Assert::AreEqual((int)testNoteNONE.GetPosition().GetPosition(), (int)expectedNoteNone.GetPosition());
			Assert::AreEqual((int)testNoteB.GetPosition().GetPosition(), (int)expectedBNone.GetPosition());
			Assert::AreEqual((int)testNoteC.GetPosition().GetPosition(), (int)expectedCNone.GetPosition());
		}
		TEST_METHOD(preIncrement_Test)
		{
			Note B("B");
			Note during;
			Note expectedBNoneefore = Note("B");
			Note expectedDuring = Note("C");
			Note expectedAfter = Note("C");

			Assert::AreEqual((int)expectedBNoneefore.GetPosition().GetPosition(), (int)B.GetPosition().GetPosition());
			during = ++B;
			Assert::AreEqual((int)expectedAfter.GetPosition().GetPosition(), (int)during.GetPosition().GetPosition());
			Assert::AreEqual((int)expectedAfter.GetPosition().GetPosition(), (int)B.GetPosition().GetPosition());
		}
		TEST_METHOD(postIncrement_Test)
		{
			Note B("B");
			Note during;
			Note expectedBNoneefore = Note("B");
			Note expectedDuring = Note("B");
			Note expectedAfter = Note("C");

			Assert::AreEqual((int)expectedBNoneefore.GetPosition().GetPosition(), (int)B.GetPosition().GetPosition());
			during = B++;
			Assert::AreEqual((int)expectedBNoneefore.GetPosition().GetPosition(), (int)during.GetPosition().GetPosition());
			Assert::AreEqual((int)expectedAfter.GetPosition().GetPosition(), (int)B.GetPosition().GetPosition());
		}
		TEST_METHOD(preDeincrement_Test)
		{
			Note C("C");
			Note during;
			Note expectedBNoneefore = Note("C");
			Note expectedDuring = Note("C");
			Note expectedAfter = Note("B");

			Assert::AreEqual((int)expectedBNoneefore.GetPosition().GetPosition(), (int)C.GetPosition().GetPosition());
			during = --C;
			Assert::AreEqual((int)expectedAfter.GetPosition().GetPosition(), (int)during.GetPosition().GetPosition());
			Assert::AreEqual((int)expectedAfter.GetPosition().GetPosition(), (int)C.GetPosition().GetPosition());
		}
		TEST_METHOD(postDeIncrement_Test)
		{
			Note C("C");
			Note during;
			Note expectedBNoneefore = Note("C");
			Note expectedDuring = Note("B");
			Note expectedAfter = Note("B");

			Assert::AreEqual((int)expectedBNoneefore.GetPosition().GetPosition(), (int)C.GetPosition().GetPosition());
			during = C--;
			Assert::AreEqual((int)expectedBNoneefore.GetPosition().GetPosition(), (int)during.GetPosition().GetPosition());
			Assert::AreEqual((int)expectedAfter.GetPosition().GetPosition(), (int)C.GetPosition().GetPosition());
		}
		TEST_METHOD(isEqualOperator_Test)
		{
			Note A("A");
			Note B1("B");
			Note B2("B");
			Note C("C");

			Assert::IsFalse(A == B1);
			Assert::IsTrue(B1 == B2);
			Assert::IsTrue(B2 == B1);
			Assert::IsTrue(A == A);
			Assert::IsTrue(B1 == B2);
			Assert::IsFalse(B2 == C);
		}
		TEST_METHOD(isNotEqualOperator_Test)
		{
			Note A("A");
			Note B1("B");
			Note B2("B");
			Note C("C");

			Assert::IsTrue(A != B1);
			Assert::IsFalse(B1 != B2);
			Assert::IsFalse(B2 != B1);
			Assert::IsFalse(A != A);
			Assert::IsFalse(B1 != B2);
			Assert::IsTrue(B2 != C);
		}
		TEST_METHOD(isGreaterThan_Test)
		{
			Note A("A");
			Note B("B");
			Note C("C");

			Assert::IsTrue(C > B);
			Assert::IsTrue(B > A);
			Assert::IsFalse(B > C);
			Assert::IsFalse(A > B);
		}
		TEST_METHOD(isGreaterThanOrEqual_Test)
		{
			Note A("A");
			Note B1("B");
			Note B2("B");
			Note C("C");

			Assert::IsTrue(C >= B2);
			Assert::IsTrue(B2 >= B1);
			Assert::IsTrue(B1 >= A);
			Assert::IsFalse(B2 >= C);
			Assert::IsTrue(B1 >= B2);
			Assert::IsFalse(A >= B1);
		}
		TEST_METHOD(isLessThan_Test)
		{
			Note A("A");
			Note B("B");
			Note C("C");

			Assert::IsTrue(A < B);
			Assert::IsFalse(C < B);
		}
		TEST_METHOD(isLessThanOrEqualTo_Test)
		{
			Note A("A");
			Note B1("B");
			Note B2("B");
			Note C("C");

			Assert::IsTrue(A <= B1);
			Assert::IsTrue(B1 <= B2);
			Assert::IsTrue(B2 <= C);
			Assert::IsFalse(C <= B2);
			Assert::IsTrue(B2 <= B1);
			Assert::IsFalse(B1 <= A);
		};
	};
}
