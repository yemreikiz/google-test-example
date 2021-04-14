#include "myfunctions.h"
#include <gtest/gtest.h>

TEST(AddTest, add)
{
    GTEST_ASSERT_EQ(add(10, 22), 32);
    EXPECT_EQ(10, add(7, 4));
}

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}