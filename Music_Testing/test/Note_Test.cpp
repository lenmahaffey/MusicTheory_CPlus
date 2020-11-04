#pragma once
#include "../pch.h"
#include "CppUnitTest.h"
#include "../../Music/src/Note.cpp"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Note_Test
{
	TEST_CLASS(Constructor_Enum_Test)
	{
		TEST_METHOD(A_ConstructorFromEnum_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::A;
			Note A = Note(ChromaticScalePosition::A);
			Assert::AreEqual((int)expected, (int)A.getPosition());
		}
		TEST_METHOD(AsBf_ConstructorFromEnum_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::AsBf;
			Note AsBf = Note(ChromaticScalePosition::AsBf);
			Assert::AreEqual((int)expected, (int)AsBf.getPosition());
		}
		TEST_METHOD(B_ConstructorFromEnum_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::B;
			Note B = Note(ChromaticScalePosition::B);
			Assert::AreEqual((int)expected, (int)B.getPosition());
		}
		TEST_METHOD(C_ConstructorFromEnum_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::C;
			Note C = Note(ChromaticScalePosition::C);
			Assert::AreEqual((int)expected, (int)C.getPosition());
		}
		TEST_METHOD(CsDf_ConstructorFromEnum_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::CsDf;
			Note CsDf = Note(ChromaticScalePosition::CsDf);
			Assert::AreEqual((int)expected, (int)CsDf.getPosition());
		}
		TEST_METHOD(D_ConstructorFromEnum_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::D;
			Note D = Note(ChromaticScalePosition::D);
			Assert::AreEqual((int)expected, (int)D.getPosition());
		}
		TEST_METHOD(DsEf_ConstructorFromEnum_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::DsEf;
			Note DsEf = Note(ChromaticScalePosition::DsEf);
			Assert::AreEqual((int)expected, (int)DsEf.getPosition());
		}
		TEST_METHOD(E_ConstructorFromEnum_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::E;
			Note E = Note(ChromaticScalePosition::E);
			Assert::AreEqual((int)expected, (int)E.getPosition());
		}
		TEST_METHOD(F_ConstructorFromEnum_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::F;
			Note F = Note(ChromaticScalePosition::F);
			Assert::AreEqual((int)expected, (int)F.getPosition());
		}
		TEST_METHOD(FsGf_ConstructorFromEnum_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::FsGf;
			Note FsGf = Note(ChromaticScalePosition::FsGf);
			Assert::AreEqual((int)expected, (int)FsGf.getPosition());
		}
		TEST_METHOD(G_ConstructorFromEnum_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::G;
			Note G = Note(ChromaticScalePosition::G);
			Assert::AreEqual((int)expected, (int)G.getPosition());
		}
		TEST_METHOD(GsAf_ConstructorFromEnum_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::GsAf;
			Note GsAf = Note(ChromaticScalePosition::GsAf);
			Assert::AreEqual((int)expected, (int)GsAf.getPosition());
		}
	};
	TEST_CLASS(Constructor_String_Test)
	{
		TEST_METHOD(A_ConstructorFromString_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::A;
			Note A = Note("A");
			Assert::AreEqual((int)expected, (int)A.getPosition());
		}
		TEST_METHOD(AsBf_ConstructorFromString_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::AsBf;
			Note AsBf = Note("AsBf");
			Assert::AreEqual((int)expected, (int)AsBf.getPosition());
		}
		TEST_METHOD(B_ConstructorFromString_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::B;
			Note B = Note("B");
			Assert::AreEqual((int)expected, (int)B.getPosition());
		}
		TEST_METHOD(C_ConstructorFromString_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::C;
			Note C = Note("C");
			Assert::AreEqual((int)expected, (int)C.getPosition());
		}
		TEST_METHOD(CsDf_ConstructorFromString_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::CsDf;
			Note CsDf = Note("CsDf");
			Assert::AreEqual((int)expected, (int)CsDf.getPosition());
		}
		TEST_METHOD(D_ConstructorFromString_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::D;
			Note D = Note("D");
			Assert::AreEqual((int)expected, (int)D.getPosition());
		}
		TEST_METHOD(DsEf_ConstructorFromString_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::DsEf;
			Note DsEf = Note("DsEf");
			Assert::AreEqual((int)expected, (int)DsEf.getPosition());
		}
		TEST_METHOD(E_ConstructorFromString_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::E;
			Note E = Note("E");
			Assert::AreEqual((int)expected, (int)E.getPosition());
		}
		TEST_METHOD(F_ConstructorFromString_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::F;
			Note F = Note("F");
			Assert::AreEqual((int)expected, (int)F.getPosition());
		}
		TEST_METHOD(FsGf_ConstructorFromString_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::FsGf;
			Note FsGf = Note("FsGf");
			Assert::AreEqual((int)expected, (int)FsGf.getPosition());
		}
		TEST_METHOD(G_ConstructorFromString_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::G;
			Note G = Note("G");
			Assert::AreEqual((int)expected, (int)G.getPosition());
		}
		TEST_METHOD(GsAf_ConstructorFromString_Test)
		{
			ChromaticScalePosition expected = ChromaticScalePosition::GsAf;
			Note GsAf = Note("GsAf");
			Assert::AreEqual((int)expected, (int)GsAf.getPosition());
		}
	};
	TEST_CLASS(getWeight_Test)
	{
		TEST_METHOD(A_getWeight_Test)
		{
			Music::Weight expected = Music::Weight::Whole;
			Note A = Note(ChromaticScalePosition::A);
			Assert::AreEqual((int)expected, (int)A.getWeight());
		}
		TEST_METHOD(AsBf_getWeight_Test)
		{
			Music::Weight expected = Music::Weight::Half;
			Note AsBf = Note(ChromaticScalePosition::AsBf);
		}
		TEST_METHOD(B_getWeight_Test)
		{
			Music::Weight expected = Music::Weight::Whole;
			Note B = Note(ChromaticScalePosition::B);
		}
		TEST_METHOD(C_getWeight_Test)
		{
			Music::Weight expected = Music::Weight::Whole;
			Note C = Note(ChromaticScalePosition::C);
		}
		TEST_METHOD(CsDf_getWeight_Test)
		{
			Music::Weight expected = Music::Weight::Half;
			Note CsDf = Note(ChromaticScalePosition::CsDf);
		}
		TEST_METHOD(D_getWeight_Test)
		{
			Music::Weight expected = Music::Weight::Whole;
			Note D = Note(ChromaticScalePosition::D);
		}
		TEST_METHOD(DsEf_getWeight_Test)
		{
			Music::Weight expected = Music::Weight::Half;
			Note DsEf = Note(ChromaticScalePosition::DsEf);
		}
		TEST_METHOD(E_getWeight_Test)
		{
			Music::Weight expected = Music::Weight::Whole;
			Note E = Note(ChromaticScalePosition::E);
		}
		TEST_METHOD(F_getWeight_Test)
		{
			Music::Weight expected = Music::Weight::Whole;
			Note F = Note(ChromaticScalePosition::F);
		}
		TEST_METHOD(FsGf_getWeight_Test)
		{
			Music::Weight expected = Music::Weight::Half;
			Note FsGf = Note(ChromaticScalePosition::FsGf);
		}
		TEST_METHOD(G_getWeight_Test)
		{
			Music::Weight expected = Music::Weight::Whole;
			Note G = Note(ChromaticScalePosition::G);
		}
		TEST_METHOD(GsAf_getWeight_Test)
		{
			Music::Weight expected = Music::Weight::Half;
			Note GsAf = Note(ChromaticScalePosition::GsAf);
		}
	};
	TEST_CLASS(getWeightAsString_Test)
	{
		TEST_METHOD(A_getWeightAsString_Test)
		{
			Note A = Note(ChromaticScalePosition::A);
			string expected = "Whole";
			Assert::AreEqual(expected, A.getWeightAsString());
		}
		TEST_METHOD(AsBf_getWeightAsString_Test)
		{
			Note AsBf = Note(ChromaticScalePosition::AsBf);
			string expected = "Half";
			Assert::AreEqual(expected, AsBf.getWeightAsString());
		}
		TEST_METHOD(B_getWeightAsString_Test)
		{
			Note B = Note(ChromaticScalePosition::B);
			string expected = "Whole";
			Assert::AreEqual(expected, B.getWeightAsString());
		}
		TEST_METHOD(C_getWeightAsString_Test)
		{
			Note C = Note(ChromaticScalePosition::C);
			string expected = "Whole";
			Assert::AreEqual(expected, C.getWeightAsString());
		}
		TEST_METHOD(CsDf_getWeightAsString_Test)
		{
			Note CsDf = Note(ChromaticScalePosition::CsDf);
			string expected = "Half";
			Assert::AreEqual(expected, CsDf.getWeightAsString());
		}
		TEST_METHOD(D_getWeightAsString_Test)
		{
			Note D = Note(ChromaticScalePosition::D);
			string expected = "Whole";
			Assert::AreEqual(expected, D.getWeightAsString());
		}
		TEST_METHOD(DsEf_getWeightAsString_Test)
		{
			Note DsEf = Note(ChromaticScalePosition::DsEf);
			string expected = "Half";
			Assert::AreEqual(expected, DsEf.getWeightAsString());
		}
		TEST_METHOD(E_getWeightAsString_Test)
		{
			Note E = Note(ChromaticScalePosition::E);
			string expected = "Whole";
			Assert::AreEqual(expected, E.getWeightAsString());
		}
		TEST_METHOD(F_getWeightAsString_Test)
		{
			Note F = Note(ChromaticScalePosition::F);
			string expected = "Whole";
			Assert::AreEqual(expected, F.getWeightAsString());
		}
		TEST_METHOD(FsGf_getWeightAsString_Test)
		{
			Note FsGf = Note(ChromaticScalePosition::FsGf);
			string expected = "Half";
			Assert::AreEqual(expected, FsGf.getWeightAsString());
		}
		TEST_METHOD(G_getWeightAsString_Test)
		{
			Note G = Note(ChromaticScalePosition::G);
			string expected = "Whole";
			Assert::AreEqual(expected, G.getWeightAsString());
		}
		TEST_METHOD(GsAf_getWeightAsString_Test)
		{
			Note GsAf = Note(ChromaticScalePosition::GsAf);
			string expected = "Half";
			Assert::AreEqual(expected, GsAf.getWeightAsString());
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

			Assert::AreEqual((int)expectedBefore.getPosition(), (int)B.getPosition());
			during = ++B;
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)during.getPosition());
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)B.getPosition());
		}
		TEST_METHOD(postIncrement_Test)
		{
			Note B("B");
			Note during;
			Note expectedBefore = Note("B");
			Note expectedDuring = Note("B");
			Note expectedAfter = Note("C");

			Assert::AreEqual((int)expectedBefore.getPosition(), (int)B.getPosition());
			during = B++;
			Assert::AreEqual((int)expectedBefore.getPosition(), (int)during.getPosition());
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)B.getPosition());
		}
		TEST_METHOD(preDeincrement_Test)
		{
			Note C("C");
			Note during;
			Note expectedBefore = Note("C");
			Note expectedDuring = Note("C");
			Note expectedAfter = Note("B");

			Assert::AreEqual((int)expectedBefore.getPosition(), (int)C.getPosition());
			during = --C;
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)during.getPosition());
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)C.getPosition());
		}
		TEST_METHOD(postDeIncrement_Test)
		{
			Note C("C");
			Note during;
			Note expectedBefore = Note("C");
			Note expectedDuring = Note("B");
			Note expectedAfter = Note("B");

			Assert::AreEqual((int)expectedBefore.getPosition(), (int)C.getPosition());
			during = C--;
			Assert::AreEqual((int)expectedBefore.getPosition(), (int)during.getPosition());
			Assert::AreEqual((int)expectedAfter.getPosition(), (int)C.getPosition());
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
