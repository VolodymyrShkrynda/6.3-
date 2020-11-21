#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 4;
			int a[n] = { 1,2,3,4 };
			t = Sum(a, n);
		}
	};
}
