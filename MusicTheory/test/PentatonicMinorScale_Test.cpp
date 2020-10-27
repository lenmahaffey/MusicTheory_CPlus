#pragma once
#include "pch.h"
#include "CppUnitTest.h"
#include "../MusicTheory/Music.h"
#include "../MusicTheory/PentatonicMinorScale.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Music_Testing
{
	TEST_CLASS(PentatonicMinorScale_Test)
	{
	public:

		TEST_METHOD(APentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expectedString = "A C D E G";
			int expectedArraySize = 5;

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::A);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(BPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "B D E FsGf A";
			int expectedArraySize = 5;

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::B);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(CPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "C DsEf F G AsBf";
			int expectedArraySize = 5;

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::C);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "D F G A C";
			int expectedArraySize = 5;

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::D);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(EPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "E G A B D";
			int expectedArraySize = 5;

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::E);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "F GsAf AsBf C DsEf";
			int expectedArraySize = 5;

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::F);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "G AsBf C D F";
			int expectedArraySize = 5;

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::G);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(AsBfPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "AsBf CsDf DsEf F GsAf";
			int expectedArraySize = 5;

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::AsBf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CsDfPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "CsDf E FsGf GsAf B";
			int expectedArraySize = 5;

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::CsDf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DsEfPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "DsEf FsGf GsAf AsBf CsDf";
			int expectedArraySize = 5;

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::DsEf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FsGfPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "FsGf A B CsDf E";
			int expectedArraySize = 5;

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::FsGf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GsAfPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "GsAf B CsDf DsEf FsGf";
			int expectedArraySize = 5;

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::GsAf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
}