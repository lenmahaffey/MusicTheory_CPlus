#pragma once
#include "../../Music_Testing/pch.h"
#include "CppUnitTest.h"
#include "../../Music/src/ChromaticScale.cpp"
#include "../../Music/src/Step.cpp"
#include "../../Music/src/Weight.cpp"
#include "../../Music//src/Object.cpp"
#include "../../Music/src/Note.cpp"


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

			Assert::AreEqual((int)ChromaticScale::A, (int)A.getChromaticScalePosition());
			Assert::AreEqual((int)ChromaticScale::AsBf, (int)AsBf.getChromaticScalePosition());
			Assert::AreEqual((int)ChromaticScale::B, (int)B.getChromaticScalePosition());
			Assert::AreEqual((int)ChromaticScale::C, (int)C.getChromaticScalePosition());
			Assert::AreEqual((int)ChromaticScale::CsDf, (int)CsDf.getChromaticScalePosition());
			Assert::AreEqual((int)ChromaticScale::D, (int)D.getChromaticScalePosition());
			Assert::AreEqual((int)ChromaticScale::DsEf, (int)DsEf.getChromaticScalePosition());
			Assert::AreEqual((int)ChromaticScale::E, (int)E.getChromaticScalePosition());
			Assert::AreEqual((int)ChromaticScale::F, (int)F.getChromaticScalePosition());
			Assert::AreEqual((int)ChromaticScale::FsGf, (int)FsGf.getChromaticScalePosition());
			Assert::AreEqual((int)ChromaticScale::G, (int)G.getChromaticScalePosition());
			Assert::AreEqual((int)ChromaticScale::GsAf, (int)GsAf.getChromaticScalePosition());
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

			Assert::AreEqual(2, (int)Music::Object::GetWeight(A.getChromaticScalePosition()));
			Assert::AreEqual(1, (int)Music::Object::GetWeight(AsBf.getChromaticScalePosition()));
			Assert::AreEqual(2, (int)Music::Object::GetWeight(B.getChromaticScalePosition()));
			Assert::AreEqual(2, (int)Music::Object::GetWeight(C.getChromaticScalePosition()));
			Assert::AreEqual(1, (int)Music::Object::GetWeight(CsDf.getChromaticScalePosition()));
			Assert::AreEqual(2, (int)Music::Object::GetWeight(D.getChromaticScalePosition()));
			Assert::AreEqual(1, (int)Music::Object::GetWeight(DsEf.getChromaticScalePosition()));
			Assert::AreEqual(2, (int)Music::Object::GetWeight(E.getChromaticScalePosition()));
			Assert::AreEqual(2, (int)Music::Object::GetWeight(F.getChromaticScalePosition()));
			Assert::AreEqual(1, (int)Music::Object::GetWeight(FsGf.getChromaticScalePosition()));
			Assert::AreEqual(2, (int)Music::Object::GetWeight(G.getChromaticScalePosition()));
			Assert::AreEqual(1, (int)Music::Object::GetWeight(GsAf.getChromaticScalePosition()));
		}
	};
}
