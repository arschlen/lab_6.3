#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.3/6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int arr[5];
            int expectedArr[] = { 10, 20, 30, 40, 50 };

            std::stringstream input("10 20 30 40 50");
            streambuf* orig_cin = cin.rdbuf();
            cin.rdbuf(input.rdbuf());

            InputArray(arr, 5);

            for (int i = 0; i < 5; i++) {
                Assert::AreEqual(expectedArr[i], arr[i]);
            }

            cin.rdbuf(orig_cin);
		}
	};
}
