#pragma once
#include "pch.h"
#include "CppUnitTest.h"
#include "../MusicTheory/Music.h"
#include "../MusicTheory/HarmonicMinorScale.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Music_Testing
{
	TEST_CLASS(HarmonicMinorScale_Test)
	{
	public:

		TEST_METHOD(AHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expectedString = "A B C D E F GsAf";
			int expectedArraySize = 7;

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScale::A);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(BHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "B CsDf D E FsGf G AsBf";
			int expectedArraySize = 7;

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScale::B);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(CHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "C D DsEf F G GsAf B";
			int expectedArraySize = 7;

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScale::C);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "D E F G A AsBf CsDf";
			int expectedArraySize = 7;

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScale::D);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(EHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "E FsGf G A B C DsEf";
			int expectedArraySize = 7;

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScale::E);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "F G GsAf AsBf C CsDf E";
			int expectedArraySize = 7;

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScale::F);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "G A AsBf C D DsEf FsGf";
			int expectedArraySize = 7;

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScale::G);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(AsBfHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "AsBf C CsDf DsEf F FsGf A";
			int expectedArraySize = 7;

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScale::AsBf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CsDfHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "CsDf DsEf E FsGf GsAf A C";
			int expectedArraySize = 7;

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScale::CsDf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DsEfHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "DsEf F FsGf GsAf AsBf B D";
			int expectedArraySize = 7;

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScale::DsEf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FsGfHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "FsGf GsAf A B CsDf D F";
			int expectedArraySize = 7;

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScale::FsGf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GsAfHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "GsAf AsBf B CsDf DsEf E G";
			int expectedArraySize = 7;

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScale::GsAf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
}