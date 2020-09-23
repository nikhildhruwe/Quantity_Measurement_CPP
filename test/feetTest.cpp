#include "../main/feet.h"
#include <gtest/gtest.h>

//1.1
TEST(feetTest, 0feet_and_0feet_should_return_equal) { 
    Feet feet1(0, LENGTH),feet2(0, LENGTH);
    ASSERT_EQ(feet1, feet2);
}

//1.2
TEST(feetTest, given_null_value_should_return_false) { 
    Feet feet1(1, LENGTH);
    ASSERT_NE(&feet1, nullptr);
}

//1.3
TEST(feetTest, given_same_reference_should_return_true) { 
    Feet *feet1 = new Feet(1, LENGTH);
    Feet *feet2 = feet1;
    ASSERT_EQ(feet1, feet2);
}

//1.4
TEST(feetTest, given_same_type_should_return_true) { 
    Feet feet1(1, LENGTH), feet2(1, LENGTH);
    ASSERT_EQ(feet1, feet2);
}

//1.5
TEST(feetTest, given_same_value_should_return_true) { 
    Feet feet1(10, LENGTH), feet2(10, LENGTH);
    ASSERT_EQ(feet1, feet2);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}