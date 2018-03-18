#include <gtest/gtest.h>
#include "TestClass.h"

TestClass* pc = NULL;


TEST(unit_class, create) {
	pc = new TestClass();

	ASSERT_TRUE(NULL != pc);
}

TEST(unit_class, function) {
	EXPECT_TRUE(pc->Function(1, 3, 0));
	EXPECT_TRUE(pc->Function(1, 3, 3));

	EXPECT_FALSE(pc->Function(-1, 0, 4));
	EXPECT_FALSE(pc->Function(1, 0, 2));
}

TEST(unit_class, destroy) {
	delete pc;
	pc = NULL;
	ASSERT_TRUE(pc == NULL);
}


int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
