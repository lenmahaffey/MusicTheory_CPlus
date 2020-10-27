#pragma once
#include "pch.h"
#include "CppUnitTest.h"
#include "../MusicTheory/Music.h"
#include "../MusicTheory/Note.cpp"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Music_Testing
{
	TEST_CLASS(Note_Test)
	{
	public:
		TEST_METHOD(NoteConstructor_Test)
		{
			// Arrange
			string expectedFromEnum = "A";
			string expectedFromInt = "C";
			string expectedFromChar = "F";

			// Act
			Note fromEnum = Note(ChromaticScale::A);
			Note fromInt = Note(3);
			Note fromChar = Note('F');

			// Assert
			Assert::AreEqual(expectedFromEnum, fromEnum.getTextName());
			Assert::AreEqual(expectedFromInt, fromInt.getTextName());
			Assert::AreEqual(expectedFromChar, fromChar.getTextName());
		}
		TEST_METHOD(GetName_Test)
		{
			Note A = Note(ChromaticScale::A);
			Note AsBf = Note(ChromaticScale::AsBf);
			Note B = Note(ChromaticScale::B);
			Note C = Note(ChromaticScale::C);
			Note CsDf = Note(ChromaticScale::CsDf);
			Note D = Note(ChromaticScale::D);
			Note DsEf = Note(ChromaticScale::DsEf);
			Note E = Note(ChromaticScale::E);
			Note F = Note(ChromaticScale::F);
			Note FsGf = Note(ChromaticScale::FsGf);
			Note G = Note(ChromaticScale::G);
			Note GsAf = Note(ChromaticScale::GsAf);

			Assert::AreEqual((int)ChromaticScale::A, (int)A.getName());
			Assert::AreEqual((int)ChromaticScale::AsBf, (int)AsBf.getName());
			Assert::AreEqual((int)ChromaticScale::B, (int)B.getName());
			Assert::AreEqual((int)ChromaticScale::C, (int)C.getName());
			Assert::AreEqual((int)ChromaticScale::CsDf, (int)CsDf.getName());
			Assert::AreEqual((int)ChromaticScale::D, (int)D.getName());
			Assert::AreEqual((int)ChromaticScale::DsEf, (int)DsEf.getName());
			Assert::AreEqual((int)ChromaticScale::E, (int)E.getName());
			Assert::AreEqual((int)ChromaticScale::F, (int)F.getName());
			Assert::AreEqual((int)ChromaticScale::FsGf, (int)FsGf.getName());
			Assert::AreEqual((int)ChromaticScale::G, (int)G.getName());
			Assert::AreEqual((int)ChromaticScale::GsAf, (int)GsAf.getName());
		}
		TEST_METHOD(GetTextName_Test)
		{
			Note A = Note(ChromaticScale::A);
			Note AsBf = Note(ChromaticScale::AsBf);
			Note B = Note(ChromaticScale::B);
			Note C = Note(ChromaticScale::C);
			Note CsDf = Note(ChromaticScale::CsDf);
			Note D = Note(ChromaticScale::D);
			Note DsEf = Note(ChromaticScale::DsEf);
			Note E = Note(ChromaticScale::E);
			Note F = Note(ChromaticScale::F);
			Note FsGf = Note(ChromaticScale::FsGf);
			Note G = Note(ChromaticScale::G);
			Note GsAf = Note(ChromaticScale::GsAf);

			Assert::AreEqual((string)"A", A.getTextName());
			Assert::AreEqual((string)"AsBf", AsBf.getTextName());
			Assert::AreEqual((string)"B", B.getTextName());
			Assert::AreEqual((string)"C", C.getTextName());
			Assert::AreEqual((string)"CsDf", CsDf.getTextName());
			Assert::AreEqual((string)"D", D.getTextName());
			Assert::AreEqual((string)"DsEf", DsEf.getTextName());
			Assert::AreEqual((string)"E", E.getTextName());
			Assert::AreEqual((string)"F", F.getTextName());
			Assert::AreEqual((string)"FsGf", FsGf.getTextName());
			Assert::AreEqual((string)"G", G.getTextName());
			Assert::AreEqual((string)"GsAf", GsAf.getTextName());
		}
		TEST_METHOD(GetWeight_Test)
		{
			Note A = Note(ChromaticScale::A);
			Note AsBf = Note(ChromaticScale::AsBf);
			Note B = Note(ChromaticScale::B);
			Note C = Note(ChromaticScale::C);
			Note CsDf = Note(ChromaticScale::CsDf);
			Note D = Note(ChromaticScale::D);
			Note DsEf = Note(ChromaticScale::DsEf);
			Note E = Note(ChromaticScale::E);
			Note F = Note(ChromaticScale::F);
			Note FsGf = Note(ChromaticScale::FsGf);
			Note G = Note(ChromaticScale::G);
			Note GsAf = Note(ChromaticScale::GsAf);

			Assert::AreEqual(2, (int)A.getWeight());
			Assert::AreEqual(1, (int)AsBf.getWeight());
			Assert::AreEqual(2, (int)B.getWeight());
			Assert::AreEqual(2, (int)C.getWeight());
			Assert::AreEqual(1, (int)CsDf.getWeight());
			Assert::AreEqual(2, (int)D.getWeight());
			Assert::AreEqual(1, (int)DsEf.getWeight());
			Assert::AreEqual(2, (int)E.getWeight());
			Assert::AreEqual(2, (int)F.getWeight());
			Assert::AreEqual(1, (int)FsGf.getWeight());
			Assert::AreEqual(2, (int)G.getWeight());
			Assert::AreEqual(1, (int)GsAf.getWeight());
		}
		TEST_METHOD(GetValue_Test)
		{
			Note A = Note(ChromaticScale::A);
			Note AsBf = Note(ChromaticScale::AsBf);
			Note B = Note(ChromaticScale::B);
			Note C = Note(ChromaticScale::C);
			Note CsDf = Note(ChromaticScale::CsDf);
			Note D = Note(ChromaticScale::D);
			Note DsEf = Note(ChromaticScale::DsEf);
			Note E = Note(ChromaticScale::E);
			Note F = Note(ChromaticScale::F);
			Note FsGf = Note(ChromaticScale::FsGf);
			Note G = Note(ChromaticScale::G);
			Note GsAf = Note(ChromaticScale::GsAf);

			Assert::AreEqual((float).5, (float)A.getValue());
			Assert::AreEqual((float).5, (float)AsBf.getValue());
			Assert::AreEqual((float).5, (float)B.getValue());
			Assert::AreEqual((float).5, (float)C.getValue());
			Assert::AreEqual((float).5, (float)CsDf.getValue());
			Assert::AreEqual((float).5, (float)D.getValue());
			Assert::AreEqual((float).5, (float)DsEf.getValue());
			Assert::AreEqual((float).5, (float)E.getValue());
			Assert::AreEqual((float).5, (float)F.getValue());
			Assert::AreEqual((float).5, (float)FsGf.getValue());
			Assert::AreEqual((float).5, (float)G.getValue());
			Assert::AreEqual((float).5, (float)GsAf.getValue());
		}
	};
}
