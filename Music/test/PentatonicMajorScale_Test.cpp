#pragma once
#include "../../Music_Testing/pch.h"
#include "CppUnitTest.h"
#include "../src/scales/PentatonicMajorScale.h"

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

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::A);

			//Assert
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(BPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "B CsDf DsEf FsGf GsAf";

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::B);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "C D E G A";


			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::C);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "D E FsGf A B";

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::D);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(EPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "E FsGf GsAf B CsDf";

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::E);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "F G A C D";

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::F);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "G A B D E";


			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::G);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(AsBfPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "AsBf C D F G";

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::AsBf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CsDfPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "CsDf DsEf F GsAf AsBf";

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::CsDf);


			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DsEfPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "DsEf F G AsBf C";

			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::DsEf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FsGfPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "FsGf GsAf AsBf CsDf DsEf";


			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::FsGf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GsAfPentatonicMajor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "GsAf AsBf C DsEf F";


			//Act
			PentatonicMajorScale scaleToTest = PentatonicMajorScale(ChromaticScale::GsAf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
}