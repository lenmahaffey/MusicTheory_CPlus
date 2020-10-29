#pragma once
#include "../pch.h"
#include "CppUnitTest.h"
#include "../../Music/src/scales/HarmonicMinorScale.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Scale_Test
{
	TEST_CLASS(HarmonicMinorScale_Test)
	{
		TEST_METHOD(AHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expectedString = "A B C D E F GsAf";

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScalePosition::A);

			//Assert
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(BHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "B CsDf D E FsGf G AsBf";

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScalePosition::B);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "C D DsEf F G GsAf B";

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScalePosition::C);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "D E F G A AsBf CsDf";

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScalePosition::D);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(EHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "E FsGf G A B C DsEf";

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScalePosition::E);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "F G GsAf AsBf C CsDf E";

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScalePosition::F);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "G A AsBf C D DsEf FsGf";

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScalePosition::G);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(AsBfHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "AsBf C CsDf DsEf F FsGf A";

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScalePosition::AsBf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CsDfHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "CsDf DsEf E FsGf GsAf A C";

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScalePosition::CsDf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DsEfHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "DsEf F FsGf GsAf AsBf B D";

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScalePosition::DsEf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FsGfHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "FsGf GsAf A B CsDf D F";

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScalePosition::FsGf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GsAfHarmonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "GsAf AsBf B CsDf DsEf E G";

			//Act
			HarmonicMinorScale scaleToTest = HarmonicMinorScale(ChromaticScalePosition::GsAf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
}