#include "../main/feet.h"
#include <gtest/gtest.h>

TEST(feetTest, 0feet_and_0feet_should_return_equal) { 
    Feet feet1(0),feet2(0);
    ASSERT_EQ(feet1, feet2);
}

TEST(feetTest, given_null_value_should_return_false) { 
    Feet *feet1;
    ASSERT_NE(feet1, nullptr);
}

TEST(feetTest, given_same_reference_should_return_true) { 
    Feet *feet1 = new Feet(1);
    Feet *feet2 = feet1;
    ASSERT_EQ(feet1, feet2);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}