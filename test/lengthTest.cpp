#include "../main/length.h"
#include <gtest/gtest.h>

//1.1
TEST(feetTest, 0feet_and_0feet_should_return_equal) { 
   Length feet1(0, Unit::FEET ),feet2(0, Unit::FEET);
   ASSERT_EQ(feet1, feet2);
}

//1.2
TEST(feetTest, given_null_value_should_return_false) { 
   Length feet1(1, Unit::FEET);
   ASSERT_NE(&feet1, nullptr);
}

//1.3
TEST(feetTest, given_same_reference_should_return_true) { 
   Length *feet1 = new Length(1, Unit::FEET);
   Length *feet2 = feet1;
   ASSERT_EQ(feet1, feet2);
}

//1.4
TEST(feetTest, given_same_unit_type_should_return_true) { 
   Length feet1(1, Unit::FEET), feet2(1, Unit::FEET);
   ASSERT_EQ(feet1, feet2);
}

//1.5
TEST(feetTest, given_same_value_when_proper_should_be_equal) { 
   Length feet1(10, Unit::FEET), feet2(10, Unit::FEET);
   ASSERT_EQ(feet1, feet2);
}

//1.6
TEST(inchTest, 0inch_and_0inch_should_return_equal) { 
   Length inch1(0, Unit::INCH ), inch2(0, Unit::INCH);
   bool result = (inch1 == inch2);
   ASSERT_TRUE(result);
}

//1.7
TEST(inchTest, given_null_value_when_compared_should_return_false) { 
   Length inch1(1, Unit::INCH);
   bool result = (&inch1 == nullptr);
   ASSERT_FALSE(result);
}

//1.8
TEST(inchTest, given_inch_values_when_reference_type_is_same_should_return_true) { 
   Length *inch1 = new Length(1, Unit::INCH);
   Length *inch2 = inch1;
   bool result = (inch1 == inch2);
   ASSERT_TRUE(result);
}

//1.9
TEST(inchTest, given_same_unit_type_if_proper_should_return_true) { 
   Length inch1(1, Unit::INCH), inch2(1, Unit::INCH);
   bool result = (inch1 == inch2);
   ASSERT_TRUE(result);
}

int main(int argc, char **argv) {
   testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}