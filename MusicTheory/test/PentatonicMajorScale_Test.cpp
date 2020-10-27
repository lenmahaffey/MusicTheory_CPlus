#pragma once
#include "pch.h"
#include "CppUnitTest.h"
#include "../MusicTheory/Music.h"
#include "../MusicTheory/PentatonicMajorScale.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Music_Testing
{
	TEST_CLASS(PentatonicMajorScale_Test)
	{
	public:

		TEST_METHOD(APentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expectedString = "A B CsDf E FsGf";
			int expectedArraySize = 5;

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::A);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(BPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "B CsDf DsEf FsGf GsAf";
			int expectedArraySize = 5;

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::B);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(CPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "C D E G A";
			int expectedArraySize = 5;

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::C);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "D E FsGf A B";
			int expectedArraySize = 5;

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::D);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(EPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "E FsGf GsAf B CsDf";
			int expectedArraySize = 5;

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::E);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "F G A C D";
			int expectedArraySize = 5;

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::F);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "G A B D E";
			int expectedArraySize = 5;

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::G);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(AsBfPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "AsBf C D F G";
			int expectedArraySize = 5;

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::AsBf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CsDfPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "CsDf DsEf F GsAf AsBf";
			int expectedArraySize = 5;

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::CsDf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DsEfPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "DsEf F G AsBf C";
			int expectedArraySize = 5;

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::DsEf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FsGfPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "FsGf GsAf AsBf CsDf DsEf";
			int expectedArraySize = 5;

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::FsGf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GsAfPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "GsAf AsBf C DsEf F";
			int expectedArraySize = 5;

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::GsAf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(expectedArraySize, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
}