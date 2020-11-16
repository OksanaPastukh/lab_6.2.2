#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.2.2/project6.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest622
{
	TEST_CLASS(UnitTest622)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int n = 10;
			int i = 0;
			int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
			c = Sum(a, n,i);
			Assert::AreEqual(c, 30);
		}
	};
}
