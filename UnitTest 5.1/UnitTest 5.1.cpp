#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double m = g(1., 0.);
			Assert::AreEqual(m, 0.);
		}
		TEST_METHOD(TestMethod2)
		{
			
		}
	};
}
