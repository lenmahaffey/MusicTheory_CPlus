#pragma once
#include "../../Music_Testing/pch.h"
#include "CppUnitTest.h"
#include "../../Music/src/Scale.cpp"

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
			Music::Step pattern[7] =
			{
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole
			};

			string expectedFromEnumWithPattern = "A";
			string expectedFromIntWithPattern = "C";
			string expectedFromCharWithPattern = "F";


			Scale fromEnumWithPattern = Scale(ChromaticScale::A, pattern, true);
			Scale fromIntWithPattern = Scale(3, pattern, true);
			Scale fromCharWithPattern = Scale('F', pattern, true);


			Assert::AreEqual(expectedFromEnumWithPattern, fromEnumWithPattern.getTextName());
			Assert::AreEqual(expectedFromIntWithPattern, fromIntWithPattern.getTextName());
			Assert::AreEqual(expectedFromCharWithPattern, fromCharWithPattern.getTextName());
		}

		TEST_METHOD(AMajor_getScaleAsString_Test)
		{
			//Arrange
			Music::Step pattern[7] =
			{
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole
			};
			string expectedString = "A B CsDf D E FsGf GsAf";


			//Act
			Scale scaleToTest = Scale(ChromaticScale::A, pattern, true);

			//Assert
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(BMajor_getScaleAsString_Test)
		{
			//Arrange
			Music::Step pattern[7] =
			{
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole
			};
			string expected = "B CsDf DsEf E FsGf GsAf AsBf";


			//Act
			Scale scaleToTest = Scale(ChromaticScale::B, pattern, true);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CMajor_getScaleAsString_Test)
		{
			//Arrange
			Music::Step pattern[7] =
			{
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole
			};
			string expected = "C D E F G A B";


			//Act
			Scale scaleToTest = Scale(ChromaticScale::C, pattern, true);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DMajor_getScaleAsString_Test)
		{
			//Arrange
			Music::Step pattern[7] =
			{
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole
			};
			string expected = "D E FsGf G A B CsDf";


			//Act
			Scale scaleToTest = Scale(ChromaticScale::D, pattern, true);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(EMajor_getScaleAsString_Test)
		{
			//Arrange
			Music::Step pattern[7] =
			{
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole
			};
			string expected = "E FsGf GsAf A B CsDf DsEf";


			//Act
			Scale scaleToTest = Scale(ChromaticScale::E, pattern, true);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FMajor_getScaleAsString_Test)
		{
			//Arrange
			Music::Step pattern[7] =
			{
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole
			};
			string expected = "F G A AsBf C D E";


			//Act
			Scale scaleToTest = Scale(ChromaticScale::F, pattern, true);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GMajor_getScaleAsString_Test)
		{
			//Arrange
			Music::Step pattern[7] =
			{
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole
			};
			string expected = "G A B C D E FsGf";


			//Act
			Scale scaleToTest = Scale(ChromaticScale::G, pattern, true);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(AsBfMajor_getScaleAsString_Test)
		{
			//Arrange
			Music::Step pattern[7] =
			{
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole
			};
			string expected = "AsBf C D DsEf F G A";


			//Act
			Scale scaleToTest = Scale(ChromaticScale::AsBf, pattern, true);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CsDfMajor_getScaleAsString_Test)
		{
			//Arrange
			Music::Step pattern[7] =
			{
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole
			};
			string expected = "CsDf DsEf F FsGf GsAf AsBf C";

			//Act
			Scale scaleToTest = Scale(ChromaticScale::CsDf, pattern, true);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DsEfMajor_getScaleAsString_Test)
		{
			//Arrange
			Music::Step pattern[7] =
			{
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole
			};
			string expected = "DsEf F G GsAf AsBf C D";


			//Act
			Scale scaleToTest = Scale(ChromaticScale::DsEf, pattern, true);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FsGfMajor_getScaleAsString_Test)
		{
			//Arrange
			Music::Step pattern[7] =
			{
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole
			};
			string expected = "FsGf GsAf AsBf B CsDf DsEf F";


			//Act
			Scale scaleToTest = Scale(ChromaticScale::FsGf, pattern, true);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GsAfMajor_getScaleAsString_Test)
		{
			//Arrange
			Music::Step pattern[7] =
			{
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Half,
				Music::Step::Whole,
				Music::Step::Whole,
				Music::Step::Whole
			};
			string expected = "GsAf AsBf C CsDf DsEf F G";


			//Act
			Scale scaleToTest = Scale(ChromaticScale::GsAf, pattern, true);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
}
