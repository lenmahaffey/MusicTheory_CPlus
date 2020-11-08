#pragma once
#include "../../Music_Testing/pch.h"
#include "CppUnitTest.h"
#include "../../Music/src/Note.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Note_Test
{
	TEST_CLASS(Constructor_Enum_Test)
	{
		TEST_METHOD(A_ConstructorFromEnum_Test)
		{
			Music::Position expected = Music::Position("A");
			Note A = Note(Music::Position::ChromaticScalePosition::A);
			Assert::AreEqual(expected, A.GetPosition());
		}
		TEST_METHOD(AsBf_ConstructorFromEnum_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;
			Note AsBf = Note(Music::Position::ChromaticScalePosition::AsBf);
			Assert::AreEqual((int)expected, (int)AsBf.GetPosition());
		}
		TEST_METHOD(B_ConstructorFromEnum_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;
			Note B = Note(Music::Position::ChromaticScalePosition::B);
			Assert::AreEqual((int)expected, (int)B.GetPosition());
		}
		TEST_METHOD(C_ConstructorFromEnum_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;
			Note C = Note(Music::Position::ChromaticScalePosition::C);
			Assert::AreEqual((int)expected, (int)C.GetPosition());
		}
		TEST_METHOD(CsDf_ConstructorFromEnum_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;
			Note CsDf = Note(Music::Position::ChromaticScalePosition::CsDf);
			Assert::AreEqual((int)expected, (int)CsDf.GetPosition());
		}
		TEST_METHOD(D_ConstructorFromEnum_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;
			Note D = Note(Music::Position::ChromaticScalePosition::D);
			Assert::AreEqual((int)expected, (int)D.GetPosition());
		}
		TEST_METHOD(DsEf_ConstructorFromEnum_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;
			Note DsEf = Note(Music::Position::ChromaticScalePosition::DsEf);
			Assert::AreEqual((int)expected, (int)DsEf.GetPosition());
		}
		TEST_METHOD(E_ConstructorFromEnum_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;
			Note E = Note(Music::Position::ChromaticScalePosition::E);
			Assert::AreEqual((int)expected, (int)E.GetPosition());
		}
		TEST_METHOD(F_ConstructorFromEnum_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;
			Note F = Note(Music::Position::ChromaticScalePosition::F);
			Assert::AreEqual((int)expected, (int)F.GetPosition());
		}
		TEST_METHOD(FsGf_ConstructorFromEnum_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;
			Note FsGf = Note(Music::Position::ChromaticScalePosition::FsGf);
			Assert::AreEqual((int)expected, (int)FsGf.GetPosition());
		}
		TEST_METHOD(G_ConstructorFromEnum_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;
			Note G = Note(Music::Position::ChromaticScalePosition::G);
			Assert::AreEqual((int)expected, (int)G.GetPosition());
		}
		TEST_METHOD(GsAf_ConstructorFromEnum_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;
			Note GsAf = Note(Music::Position::ChromaticScalePosition::GsAf);
			Assert::AreEqual((int)expected, (int)GsAf.GetPosition());
		}
	};
	TEST_CLASS(Constructor_String_Test)
	{
		TEST_METHOD(A_ConstructorFromString_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::A;
			Note A = Note("A");
			Assert::AreEqual((int)expected, (int)A.GetPosition());
		}
		TEST_METHOD(AsBf_ConstructorFromString_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::AsBf;
			Note AsBf = Note("AsBf");
			Assert::AreEqual((int)expected, (int)AsBf.GetPosition());
		}
		TEST_METHOD(B_ConstructorFromString_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::B;
			Note B = Note("B");
			Assert::AreEqual((int)expected, (int)B.GetPosition());
		}
		TEST_METHOD(C_ConstructorFromString_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::C;
			Note C = Note("C");
			Assert::AreEqual((int)expected, (int)C.GetPosition());
		}
		TEST_METHOD(CsDf_ConstructorFromString_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::CsDf;
			Note CsDf = Note("CsDf");
			Assert::AreEqual((int)expected, (int)CsDf.GetPosition());
		}
		TEST_METHOD(D_ConstructorFromString_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::D;
			Note D = Note("D");
			Assert::AreEqual((int)expected, (int)D.GetPosition());
		}
		TEST_METHOD(DsEf_ConstructorFromString_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::DsEf;
			Note DsEf = Note("DsEf");
			Assert::AreEqual((int)expected, (int)DsEf.GetPosition());
		}
		TEST_METHOD(E_ConstructorFromString_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::E;
			Note E = Note("E");
			Assert::AreEqual((int)expected, (int)E.GetPosition());
		}
		TEST_METHOD(F_ConstructorFromString_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::F;
			Note F = Note("F");
			Assert::AreEqual((int)expected, (int)F.GetPosition());
		}
		TEST_METHOD(FsGf_ConstructorFromString_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::FsGf;
			Note FsGf = Note("FsGf");
			Assert::AreEqual((int)expected, (int)FsGf.GetPosition());
		}
		TEST_METHOD(G_ConstructorFromString_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::G;
			Note G = Note("G");
			Assert::AreEqual((int)expected, (int)G.GetPosition());
		}
		TEST_METHOD(GsAf_ConstructorFromString_Test)
		{
			Music::Position::ChromaticScalePosition expected = Music::Position::ChromaticScalePosition::GsAf;
			Note GsAf = Note("GsAf");
			Assert::AreEqual((int)expected, (int)GsAf.GetPosition());
		}
	};
	TEST_CLASS(getWeight_Test)
	{
		TEST_METHOD(A_getWeight_Test)
		{
			Music::Position::Weight expected = Music::Position::Weight::Whole;
			Note A = Note(Music::Position::ChromaticScalePosition::A);
			Assert::AreEqual((int)expected, (int)A.GetWeight());
		}
		TEST_METHOD(AsBf_getWeight_Test)
		{
			Music::Position::Weight expected = Music::Position::Weight::Half;
			Note AsBf = Note(Music::Position::ChromaticScalePosition::AsBf);
		}
		TEST_METHOD(B_getWeight_Test)
		{
			Music::Position::Weight expected = Music::Position::Weight::Whole;
			Note B = Note(Music::Position::ChromaticScalePosition::B);
		}
		TEST_METHOD(C_getWeight_Test)
		{
			Music::Position::Weight expected = Music::Position::Weight::Whole;
			Note C = Note(Music::Position::ChromaticScalePosition::C);
		}
		TEST_METHOD(CsDf_getWeight_Test)
		{
			Music::Position::Weight expected = Music::Position::Weight::Half;
			Note CsDf = Note(Music::Position::ChromaticScalePosition::CsDf);
		}
		TEST_METHOD(D_getWeight_Test)
		{
			Music::Position::Weight expected = Music::Position::Weight::Whole;
			Note D = Note(Music::Position::ChromaticScalePosition::D);
		}
		TEST_METHOD(DsEf_getWeight_Test)
		{
			Music::Position::Weight expected = Music::Position::Weight::Half;
			Note DsEf = Note(Music::Position::ChromaticScalePosition::DsEf);
		}
		TEST_METHOD(E_getWeight_Test)
		{
			Music::Position::Weight expected = Music::Position::Weight::Whole;
			Note E = Note(Music::Position::ChromaticScalePosition::E);
		}
		TEST_METHOD(F_getWeight_Test)
		{
			Music::Position::Weight expected = Music::Position::Weight::Whole;
			Note F = Note(Music::Position::ChromaticScalePosition::F);
		}
		TEST_METHOD(FsGf_getWeight_Test)
		{
			Music::Position::Weight expected = Music::Position::Weight::Half;
			Note FsGf = Note(Music::Position::ChromaticScalePosition::FsGf);
		}
		TEST_METHOD(G_getWeight_Test)
		{
			Music::Position::Weight expected = Music::Position::Weight::Whole;
			Note G = Note(Music::Position::ChromaticScalePosition::G);
		}
		TEST_METHOD(GsAf_getWeight_Test)
		{
			Music::Position::Weight expected = Music::Position::Weight::Half;
			Note GsAf = Note(Music::Position::ChromaticScalePosition::GsAf);
		}
	};
	TEST_CLASS(getWeightAsString_Test)
	{
		TEST_METHOD(A_getWeightAsString_Test)
		{
			Note A = Note(Music::Position::ChromaticScalePosition::A);
			string expected = "Whole";
			Assert::AreEqual(expected, A.GetWeightAsString());
		}
		TEST_METHOD(AsBf_getWeightAsString_Test)
		{
			Note AsBf = Note(Music::Position::ChromaticScalePosition::AsBf);
			string expected = "Half";
			Assert::AreEqual(expected, AsBf.GetWeightAsString());
		}
		TEST_METHOD(B_getWeightAsString_Test)
		{
			Note B = Note(Music::Position::ChromaticScalePosition::B);
			string expected = "Whole";
			Assert::AreEqual(expected, B.GetWeightAsString());
		}
		TEST_METHOD(C_getWeightAsString_Test)
		{
			Note C = Note(Music::Position::ChromaticScalePosition::C);
			string expected = "Whole";
			Assert::AreEqual(expected, C.GetWeightAsString());
		}
		TEST_METHOD(CsDf_getWeightAsString_Test)
		{
			Note CsDf = Note(Music::Position::ChromaticScalePosition::CsDf);
			string expected = "Half";
			Assert::AreEqual(expected, CsDf.GetWeightAsString());
		}
		TEST_METHOD(D_getWeightAsString_Test)
		{
			Note D = Note(Music::Position::ChromaticScalePosition::D);
			string expected = "Whole";
			Assert::AreEqual(expected, D.GetWeightAsString());
		}
		TEST_METHOD(DsEf_getWeightAsString_Test)
		{
			Note DsEf = Note(Music::Position::ChromaticScalePosition::DsEf);
			string expected = "Half";
			Assert::AreEqual(expected, DsEf.GetWeightAsString());
		}
		TEST_METHOD(E_getWeightAsString_Test)
		{
			Note E = Note(Music::Position::ChromaticScalePosition::E);
			string expected = "Whole";
			Assert::AreEqual(expected, E.GetWeightAsString());
		}
		TEST_METHOD(F_getWeightAsString_Test)
		{
			Note F = Note(Music::Position::ChromaticScalePosition::F);
			string expected = "Whole";
			Assert::AreEqual(expected, F.GetWeightAsString());
		}
		TEST_METHOD(FsGf_getWeightAsString_Test)
		{
			Note FsGf = Note(Music::Position::ChromaticScalePosition::FsGf);
			string expected = "Half";
			Assert::AreEqual(expected, FsGf.GetWeightAsString());
		}
		TEST_METHOD(G_getWeightAsString_Test)
		{
			Note G = Note(Music::Position::ChromaticScalePosition::G);
			string expected = "Whole";
			Assert::AreEqual(expected, G.GetWeightAsString());
		}
		TEST_METHOD(GsAf_getWeightAsString_Test)
		{
			Note GsAf = Note(Music::Position::ChromaticScalePosition::GsAf);
			string expected = "Half";
			Assert::AreEqual(expected, GsAf.GetWeightAsString());
		}
	};
	TEST_CLASS(Operator_Test)
	{
		TEST_METHOD(preIncrement_Test)
		{
			Note B("B");
			Note during;
			Note expectedBefore = Note("B");
			Note expectedDuring = Note("C");
			Note expectedAfter = Note("C");

			Assert::AreEqual((int)expectedBefore.GetPosition(), (int)B.GetPosition());
			during = ++B;
			Assert::AreEqual((int)expectedAfter.GetPosition(), (int)during.GetPosition());
			Assert::AreEqual((int)expectedAfter.GetPosition(), (int)B.GetPosition());
		}
		TEST_METHOD(postIncrement_Test)
		{
			Note B("B");
			Note during;
			Note expectedBefore = Note("B");
			Note expectedDuring = Note("B");
			Note expectedAfter = Note("C");

			Assert::AreEqual((int)expectedBefore.GetPosition(), (int)B.GetPosition());
			during = B++;
			Assert::AreEqual((int)expectedBefore.GetPosition(), (int)during.GetPosition());
			Assert::AreEqual((int)expectedAfter.GetPosition(), (int)B.GetPosition());
		}
		TEST_METHOD(preDeincrement_Test)
		{
			Note C("C");
			Note during;
			Note expectedBefore = Note("C");
			Note expectedDuring = Note("C");
			Note expectedAfter = Note("B");

			Assert::AreEqual((int)expectedBefore.GetPosition(), (int)C.GetPosition());
			during = --C;
			Assert::AreEqual((int)expectedAfter.GetPosition(), (int)during.GetPosition());
			Assert::AreEqual((int)expectedAfter.GetPosition(), (int)C.GetPosition());
		}
		TEST_METHOD(postDeIncrement_Test)
		{
			Note C("C");
			Note during;
			Note expectedBefore = Note("C");
			Note expectedDuring = Note("B");
			Note expectedAfter = Note("B");

			Assert::AreEqual((int)expectedBefore.GetPosition(), (int)C.GetPosition());
			during = C--;
			Assert::AreEqual((int)expectedBefore.GetPosition(), (int)during.GetPosition());
			Assert::AreEqual((int)expectedAfter.GetPosition(), (int)C.GetPosition());
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
