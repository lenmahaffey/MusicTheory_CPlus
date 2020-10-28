#pragma once
#include "../../Music_Testing/pch.cpp"
#include "CppUnitTest.h"
#include "../../Music/src/scales/MajorScale.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Music_Testing
{
	TEST_CLASS(MajorScale_Test)
	{
	public:

		TEST_METHOD(Scale_Constructor_Test)
		{
			string expectedFromEnum = "A";
			string expectedFromInt = "C";
			string expectedFromChar = "F";

			MajorScale fromEnum = MajorScale(ChromaticScale::A);
			MajorScale fromInt = MajorScale(3);
			MajorScale fromChar = MajorScale('F');

			Assert::AreEqual(expectedFromEnum, fromEnum.getTextName());
			Assert::AreEqual(expectedFromInt, fromInt.getTextName());
			Assert::AreEqual(expectedFromChar, fromChar.getTextName());

		}

		TEST_METHOD(AMajor_getScaleAsString_Test)
		{
			//Arrange
			string expectedString = "A B CsDf D E FsGf GsAf";


			//Act
			MajorScale scaleToTest = MajorScale(ChromaticScale::A);


			//Assert

			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(BMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "B CsDf DsEf E FsGf GsAf AsBf";

			//Act
			MajorScale scaleToTest = MajorScale(ChromaticScale::B);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(CMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "C D E F G A B";

			//Act
			MajorScale scaleToTest = MajorScale(ChromaticScale::C);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "D E FsGf G A B CsDf";

			//Act
			MajorScale scaleToTest = MajorScale(ChromaticScale::D);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(EMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "E FsGf GsAf A B CsDf DsEf";

			//Act
			MajorScale scaleToTest = MajorScale(ChromaticScale::E);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "F G A AsBf C D E";

			//Act
			MajorScale scaleToTest = MajorScale(ChromaticScale::F);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "G A B C D E FsGf";

			//Act
			MajorScale scaleToTest = MajorScale(ChromaticScale::G);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(AsBfMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "AsBf C D DsEf F G A";

			//Act
			MajorScale scaleToTest = MajorScale(ChromaticScale::AsBf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CsDfMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "CsDf DsEf F FsGf GsAf AsBf C";

			//Act
			MajorScale scaleToTest = MajorScale(ChromaticScale::CsDf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DsEfMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "DsEf F G GsAf AsBf C D";

			//Act
			MajorScale scaleToTest = MajorScale(ChromaticScale::DsEf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FsGfMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "FsGf GsAf AsBf B CsDf DsEf F";

			//Act
			MajorScale scaleToTest = MajorScale(ChromaticScale::FsGf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GsAfMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "GsAf AsBf C CsDf DsEf F G";

			//Act
			MajorScale scaleToTest = MajorScale(ChromaticScale::GsAf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
}
