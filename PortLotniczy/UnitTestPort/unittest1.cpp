#include "stdafx.h"

#include "../PortLotniczy/Informacje.h"
#include "CppUnitTest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestPort
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestZmienCene)
		{
			Informacje info;

            Assert::AreEqual(1, info.zmien_cene(1));
		}

	};
}