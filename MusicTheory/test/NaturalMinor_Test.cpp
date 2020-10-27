#pragma once
#include "pch.h"
#include "CppUnitTest.h"
#include "../MusicTheory/Music.h"
#include "../MusicTheory/NaturalMinorScale.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Music_Testing
{
	TEST_CLASS(NaturalMinorScale_Test)
	{
	public:

		TEST_METHOD(ANaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expectedString = "A B C D E F G";
			int expectedArraySize = 7;

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScale::A);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(BNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "B CsDf D E FsGf G A";
			int expectedArraySize = 7;

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScale::B);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(CNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "C D DsEf F G GsAf AsBf";
			int expectedArraySize = 7;

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScale::C);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "D E F G A AsBf C";
			int expectedArraySize = 7;

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScale::D);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(ENaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "E FsGf G A B C D";
			int expectedArraySize = 7;

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScale::E);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "F G GsAf AsBf C CsDf DsEf";
			int expectedArraySize = 7;

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScale::F);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "G A AsBf C D DsEf F";
			int expectedArraySize = 7;

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScale::G);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(AsBfNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "AsBf C CsDf DsEf F FsGf GsAf";
			int expectedArraySize = 7;

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScale::AsBf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CsDfNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "CsDf DsEf E FsGf GsAf A B";
			int expectedArraySize = 7;

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScale::CsDf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DsEfNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "DsEf F FsGf GsAf AsBf B CsDf";
			int expectedArraySize = 7;

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScale::DsEf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FsGfNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "FsGf GsAf A B CsDf D E";
			int expectedArraySize = 7;

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScale::FsGf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GsAfNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "GsAf AsBf B CsDf DsEf E FsGf";
			int expectedArraySize = 7;

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScale::GsAf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
}