#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8.1_iter/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[]{ ',', '-', ',','-', 'g' };
			int k = Count(str);
			Assert::AreEqual(k, 2);
		}

		TEST_METHOD(TestMethod2)
		{
			char str[]{ ',', '-', ',','-', 'g' };
			Change(str);
			Assert::AreEqual(str[0], '*');
		}
	};
}
