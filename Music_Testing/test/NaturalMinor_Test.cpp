#pragma once
#include "../../Music_Testing/pch.cpp"
#include "CppUnitTest.h"
#include "../../Music/src/scales/NaturalMinorScale.cpp"

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

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScalePosition::A);

			//Assert
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(BNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "B CsDf D E FsGf G A";

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScalePosition::B);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(CNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "C D DsEf F G GsAf AsBf";

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScalePosition::C);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "D E F G A AsBf C";


			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScalePosition::D);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(ENaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "E FsGf G A B C D";

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScalePosition::E);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "F G GsAf AsBf C CsDf DsEf";

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScalePosition::F);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "G A AsBf C D DsEf F";

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScalePosition::G);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(AsBfNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "AsBf C CsDf DsEf F FsGf GsAf";


			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScalePosition::AsBf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CsDfNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "CsDf DsEf E FsGf GsAf A B";

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScalePosition::CsDf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DsEfNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "DsEf F FsGf GsAf AsBf B CsDf";

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScalePosition::DsEf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FsGfNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "FsGf GsAf A B CsDf D E";

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScalePosition::FsGf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GsAfNaturalMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "GsAf AsBf B CsDf DsEf E FsGf";

			//Act
			NaturalMinorScale scaleToTest = NaturalMinorScale(ChromaticScalePosition::GsAf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
}