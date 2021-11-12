#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1_rek/lab6.1_rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int b = 5;
			int a[b] = { -1,2,4,-23,13 };
			int c;
			c = Count(a, b, 0, 0);
			Assert::AreEqual(3, c);
		}
	};
}
