#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.2/Lb_5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double eps = 1e-6;
			double s = 0;
			int n = 0;

			double result = S(-0.5, eps, n, s);
			double expected = asin(-0.5);

			Assert::AreEqual(result, expected, eps);
		}
	};
}
