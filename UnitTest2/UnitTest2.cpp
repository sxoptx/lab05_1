#include "pch.h"
#include "CppUnitTest.h"
#include "../lab05_1/lab05_1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(0.2360245, f(1, 1, 1), 0.000001);
		}
	};
}
