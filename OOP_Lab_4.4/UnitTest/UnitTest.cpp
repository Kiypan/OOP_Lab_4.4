#include "pch.h"
#include "CppUnitTest.h"

#include "../Program/CArray.h"
#include "../Program/CArray.cpp"
#include "../Program/CAndArray.h"
#include "../Program/CAndArray.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array *arr = new AndArray(3,	1, 2, 3);
			Assert::AreEqual(arr->GetSize(), (unsigned int)3);
			delete arr;
		}
	};
}
