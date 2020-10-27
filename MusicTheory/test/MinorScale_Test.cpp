#pragma once
#include "pch.h"
#include "CppUnitTest.h"
#include "../MusicTheory/Music.h"
#include "../MusicTheory/Scale.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Music_Testing
{
	TEST_CLASS(Scale_Test)
	{
	public:

		TEST_METHOD(Scale_Constructor_Test)
		{
			Music::NoteWeight pattern[7] =
			{
				Music::NoteWeight::Whole,
				Music::NoteWeight::Whole,
				Music::NoteWeight::Whole,
				Music::NoteWeight::Half,
				Music::NoteWeight::Whole,
				Music::NoteWeight::Whole,
				Music::NoteWeight::Whole
			};

			string expectedFromEnum = "A";
			string expectedFromInt = "C";
			string expectedFromChar = "F";

			string expectedFromEnumWithPattern = "A";
			string expectedFromIntWithPattern = "C";
			string expectedFromCharWithPattern = "F";


			Scale fromEnum = Scale(ChromaticScale::A, true);
			Scale fromInt = Scale(3, true);
			Scale fromChar = Scale('F', true);

			Scale fromEnumWithPattern = Scale(ChromaticScale::A, pattern, true);
			Scale fromIntWithPattern = Scale(3, pattern, true);
			Scale fromCharWithPattern = Scale('F', pattern, true);

			Assert::AreEqual(expectedFromEnum, fromEnum.getTextName());
			Assert::AreEqual(expectedFromInt, fromInt.getTextName());
			Assert::AreEqual(expectedFromChar, fromChar.getTextName());

			Assert::AreEqual(expectedFromEnumWithPattern, fromEnumWithPattern.getTextName());
			Assert::AreEqual(expectedFromIntWithPattern, fromIntWithPattern.getTextName());
			Assert::AreEqual(expectedFromCharWithPattern, fromCharWithPattern.getTextName());
		}

		TEST_METHOD(AMajor_getScaleAsString_Test)
		{
			//Arrange
			string expectedString = "A B CsDf D E FsGf GsAf";
			int expectedArraySize = 7;

			//Act
			Scale scaleToTest = Scale(ChromaticScale::A, true);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(BMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "B CsDf DsEf E FsGf GsAf AsBf";
			int expectedArraySize = 7;

			//Act
			Scale scaleToTest = Scale(ChromaticScale::B, true);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(CMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "C D E F G A B";
			int expectedArraySize = 7;

			//Act
			Scale scaleToTest = Scale(ChromaticScale::C, true);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "D E FsGf G A B CsDf";
			int expectedArraySize = 7;

			//Act
			Scale scaleToTest = Scale(ChromaticScale::D, true);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(EMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "E FsGf GsAf A B CsDf DsEf";
			int expectedArraySize = 7;

			//Act
			Scale scaleToTest = Scale(ChromaticScale::E, true);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "F G A AsBf C D E";
			int expectedArraySize = 7;

			//Act
			Scale scaleToTest = Scale(ChromaticScale::F, true);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "G A B C D E FsGf";
			int expectedArraySize = 7;

			//Act
			Scale scaleToTest = Scale(ChromaticScale::G, true);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(AsBfMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "AsBf C D DsEf F G A";
			int expectedArraySize = 7;

			//Act
			Scale scaleToTest = Scale(ChromaticScale::AsBf, true);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CsDfMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "CsDf DsEf F FsGf GsAf AsBf C";
			int expectedArraySize = 7;

			//Act
			Scale scaleToTest = Scale(ChromaticScale::CsDf, true);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DsEfMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "DsEf F G GsAf AsBf C D";
			int expectedArraySize = 7;

			//Act
			Scale scaleToTest = Scale(ChromaticScale::DsEf, true);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FsGfMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "FsGf GsAf AsBf B CsDf DsEf F";
			int expectedArraySize = 7;

			//Act
			Scale scaleToTest = Scale(ChromaticScale::FsGf, true);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GsAfMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "GsAf AsBf C CsDf DsEf F G";
			int expectedArraySize = 7;

			//Act
			Scale scaleToTest = Scale(ChromaticScale::GsAf, true);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
}
