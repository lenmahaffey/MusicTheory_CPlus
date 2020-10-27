#pragma once
#include "../../Music_Testing/pch.h"
#include "CppUnitTest.h"
#include "../src/scales/MelodicMinorScale.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Music_Testing
{
	TEST_CLASS(MelodicMinorScale_Test)
	{
	public:

		TEST_METHOD(AMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expectedString = "A B C D E FsGf GsAf";

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::A);

			//Assert
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(BMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "B CsDf D E FsGf GsAf AsBf";

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::B);

			//Assert

			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "C D DsEf F G A B";

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::C);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());


		}

		TEST_METHOD(DMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "D E F G A B CsDf";

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::D);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(EMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "E FsGf G A B CsDf DsEf";

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::E);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "F G GsAf AsBf C D E";

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::F);

			//Assert

			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "G A AsBf C D E FsGf";

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::G);

			//Assert

			Assert::AreEqual(expected, scaleToTest.getScaleAsString());


		}

		TEST_METHOD(AsBfMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "AsBf C CsDf DsEf F G A";

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::AsBf);

			//Assert

			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CsDfMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "CsDf DsEf E FsGf GsAf AsBf C";

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::CsDf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DsEfMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "DsEf F FsGf GsAf AsBf C D";

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::DsEf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());


		}

		TEST_METHOD(FsGfMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "FsGf GsAf A B CsDf DsEf F";

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::FsGf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GsAfMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "GsAf AsBf B CsDf DsEf F G";

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::GsAf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
}