#pragma once
#include "../../Music_Testing/pch.h"
#include "CppUnitTest.h"
#include "../src/scales/PentatonicMinorScale.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Music;

namespace Music_Testing
{
	TEST_CLASS(PentatonicMinorScale_Test)
	{
	public:

		TEST_METHOD(APentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expectedString = "A C D E G";

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::A);

			//Assert
			Assert::AreEqual(expectedString, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(BPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "B D E FsGf A";

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::B);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());

		}

		TEST_METHOD(CPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "C DsEf F G AsBf";

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::C);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "D F G A C";

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::D);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(EPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "E G A B D";

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::E);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "F GsAf AsBf C DsEf";

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::F);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "G AsBf C D F";

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::G);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(AsBfPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "AsBf CsDf DsEf F GsAf";

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::AsBf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(CsDfPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "CsDf E FsGf GsAf B";

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::CsDf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(DsEfPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "DsEf FsGf GsAf AsBf CsDf";

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::DsEf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(FsGfPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "FsGf A B CsDf E";

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::FsGf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}

		TEST_METHOD(GsAfPentatonicMinor_getScaleAsString_Test)
		{
			//Arrange
			string expected = "GsAf B CsDf DsEf FsGf";

			//Act
			PentatonicMinorScale scaleToTest = PentatonicMinorScale(ChromaticScale::GsAf);

			//Assert
			Assert::AreEqual(expected, scaleToTest.getScaleAsString());
		}
	};
}