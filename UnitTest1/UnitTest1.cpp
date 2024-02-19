#include "pch.h"
#include "CppUnitTest.h"
#include "../АП_КН-2327Б_Видиш_ЛР-07.1/АП_КН-2327Б_Видиш_ЛР-07.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestCreate)
		{
			int rowCount = 7;
			int colCount = 6;
			int Low = 8;
			int High = 73;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];
			Create(a, rowCount, colCount, Low, High);
			for (int i = 0; i < rowCount; i++)
				for (int j = 0; j < colCount; j++)
					Assert::IsTrue(a[i][j] >= Low && a[i][j] <= High);
			for (int i = 0; i < rowCount; i++)
				delete[] a[i];
			delete[] a;
		}
	};
}
