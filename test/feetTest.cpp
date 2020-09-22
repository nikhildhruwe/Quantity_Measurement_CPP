#include "../main/feet.h"
#include <gtest/gtest.h>

TEST(feetTest, 0Feet_And_0Feet_ShouldReturnEqual) { 
    Feet feet1(0),feet2(0);
    ASSERT_EQ(feet1, feet2);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}