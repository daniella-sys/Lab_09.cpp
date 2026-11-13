#include "pch.h"
#include "CppUnitTest.h"
#include "../CollectionApplication.cpp"
#include "../var.cpp"
#include "../dod.cpp"
#include "../sum.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab91UnitTest
{
	TEST_CLASS(Lab91UnitTest)
	{
	public:

		TEST_METHOD(TestDod)
		{
			x = 1.5;
			n = 1;
			a = 0.5;                     // a0 = x - 1

			nsDod::dod();                // a1 = -(x-1)^2 / 2

			Assert::AreEqual(-0.125, a, 1e-12);
		}

		TEST_METHOD(TestSumLn)
		{
			x = 1.5;
			e = 0.000001;

			nsSum::sum();

			Assert::AreEqual(log(1.5), s, 0.00001);
		}

		TEST_METHOD(TestSumAtOne)
		{
			x = 1.0;
			e = 0.000001;

			nsSum::sum();

			Assert::AreEqual(0.0, s, 1e-12);   // ln(1) = 0
		}

		TEST_METHOD(TestSumAtBoundary)
		{
			x = 2.0;
			e = 0.001;

			nsSum::sum();

			Assert::AreEqual(log(2.0), s, 0.002);
		}
	};
}
