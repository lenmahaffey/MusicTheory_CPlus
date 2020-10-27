#pragma once
#include "pch.h"
#include "CppUnitTest.h"
#include "../MusicTheory/Music.h"
#include "../MusicTheory/MelodicMinorScale.cpp"

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
			int expectedArraySize = 7;

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::A);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(BMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "B CsDf D E FsGf GsAf AsBf";
			int expectedArraySize = 7;

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::B);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(CMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "C D DsEf F G A B";
			int expectedArraySize = 7;

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::C);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "D E F G A B CsDf";
			int expectedArraySize = 7;

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::D);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(EMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "E FsGf G A B CsDf DsEf";
			int expectedArraySize = 7;

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::E);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "F G GsAf AsBf C D E";
			int expectedArraySize = 7;

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::F);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "G A AsBf C D E FsGf";
			int expectedArraySize = 7;

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::G);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(AsBfMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "AsBf C CsDf DsEf F G A";
			int expectedArraySize = 7;

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::AsBf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CsDfMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "CsDf DsEf E FsGf GsAf AsBf C";
			int expectedArraySize = 7;

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::CsDf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DsEfMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "DsEf F FsGf GsAf AsBf C D";
			int expectedArraySize = 7;

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::DsEf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FsGfMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "FsGf GsAf A B CsDf DsEf F";
			int expectedArraySize = 7;

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::FsGf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GsAfMelodicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "GsAf AsBf B CsDf DsEf F G";
			int expectedArraySize = 7;

			//Act
			MelodicMinorScale scaleToTest = MelodicMinorScale(ChromaticScale::GsAf);
			int scaleArraySize = sizeof(scaleToTest.scale) / sizeof(scaleToTest.scale[0]);

			//Assert
			Assert::AreEqual(7, scaleArraySize);
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
}