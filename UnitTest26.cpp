#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2-6/Vector3d.h"
#include "C:\Users\Софія\source\repos\lab2-6\lab2-6\Vector3d.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest26
{
	TEST_CLASS(UnitTest26)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector3d::Triad a;
			Assert::AreEqual(a.Init(2, 6, 4), true);
		}
	};
}
