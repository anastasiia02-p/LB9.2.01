#include "pch.h"
#include "CppUnitTest.h"
#include "../LB9.2.01/main.cpp"
#include "../LB9.2.01/var.h"
#include "../LB9.2.01/var.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
int x, y, z, w;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 5, y = 8, z = 10;
			int expectedW = MAX(SQR(x), ABS(5 * y - z));
			int w;

			if (1 <= z && z < 10) {
				w = MIN(SQR(x + y), SQR(x + z));
			}
			else if (z < 1 || z >= 10) {
				w = MAX(SQR(x), ABS(5 * y - z));
			}

			Assert::AreEqual(expectedW, w, L"Error: W value did not match for Z out of range");
		}
	};
}
