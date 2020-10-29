#pragma once
#include "../../Music_Testing/pch.h"
#include "CppUnitTest.h"
#include "../../Music/src/Note.cpp"


#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Note_Testing
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
			Assert::AreEqual((int)expected, (int)A.GetWeight());
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
		}
		TEST_METHOD(AsBf_getWeightAsString_Test)
		{
			Note AsBf = Note(ChromaticScalePosition::AsBf);
		}
		TEST_METHOD(B_getWeightAsString_Test)
		{
			Note B = Note(ChromaticScalePosition::B);
		}
		TEST_METHOD(C_getWeightAsString_Test)
		{
			Note C = Note(ChromaticScalePosition::C);
		}
		TEST_METHOD(AsDf_getWeightAsString_Test)
		{
			Note CsDf = Note(ChromaticScalePosition::CsDf);
		}
		TEST_METHOD(D_getWeightAsString_Test)
		{
			Note D = Note(ChromaticScalePosition::D);
		}
		TEST_METHOD(DsEf_getWeightAsString_Test)
		{
			Note DsEf = Note(ChromaticScalePosition::DsEf);
		}
		TEST_METHOD(E_getWeightAsString_Test)
		{
			Note E = Note(ChromaticScalePosition::E);
		}
		TEST_METHOD(F_getWeightAsString_Test)
		{
			Note F = Note(ChromaticScalePosition::F);
		}
		TEST_METHOD(FsGf_getWeightAsString_Test)
		{
			Note FsGf = Note(ChromaticScalePosition::FsGf);
		}
		TEST_METHOD(G_getWeightAsString_Test)
		{
			Note G = Note(ChromaticScalePosition::G);
		}
		TEST_METHOD(GsAf_getWeightAsString_Test)
		{
			Note GsAf = Note(ChromaticScalePosition::GsAf);
		}
	};
}
