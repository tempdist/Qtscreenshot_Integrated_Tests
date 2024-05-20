
// #include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

using namespace testing;

TEST(gTestSuite, firstTest)
{
    EXPECT_EQ(1, 1);

    EXPECT_THAT(0, Eq(0));
}
