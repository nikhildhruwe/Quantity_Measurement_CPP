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
   Length feet1(10, Unit::FEET), feet2(20, Unit::FEET);
   bool result = (feet1 == feet2);
   ASSERT_FALSE(result);
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

//1.10
TEST(inchTest, given_icnh1_and_inch2_values__if_not_equal_should_return_false) { 
   Length inch1(10, Unit::INCH), inch2(20, Unit::INCH);
   bool result = (inch1 == inch2);
   ASSERT_FALSE(result);
}

TEST(inchTest, given_inch_and_feet_values_if_base_value_equal_should_return_true) { 
   Length inch(12, Unit::INCH), feet(1, Unit::FEET);
   bool result = (inch == feet);
   ASSERT_TRUE(result);
}

//            ****** Yard Comparision ******
//2.1 
TEST(yardTest, given_3feet_and_1yard_when_compared_should_return_true) { 
   Length feet(3, Unit::FEET), yard(1, Unit::YARD);
   bool result = (feet == yard);
   ASSERT_TRUE(result);
}

//2.2
TEST(yardTest, given_1feet_and_1yard_when_compared_should_return_false) { 
   Length feet(1, Unit::FEET), yard(1, Unit::YARD);
   bool result = (feet == yard);
   ASSERT_FALSE(result);
}

//2.3
TEST(yardTest, given_1inch_and_1yard_when_compared_should_return_false) { 
   Length inch(1, Unit::INCH), yard(1, Unit::YARD);
   bool result = (inch == yard);
   ASSERT_FALSE(result);
}

//2.4
TEST(yardTest, given_1yard_and_36inch_when_compared_should_return_true) { 
   Length yard(1, Unit::YARD), inch(36, Unit::INCH);
   bool result = (yard == inch);
      ASSERT_TRUE(result);
}

//2.5
TEST(yardTest, given_36yard_and_1yard_when_compared_should_return_true) { 
   Length inch(36, Unit::INCH), yard(1, Unit::YARD);
   bool result = (inch == yard);
   ASSERT_TRUE(result);
}

//2.6
TEST(yardTest, given_1yard_and_3feet_when_compared_should_return_true) { 
   Length yard(1, Unit::YARD), feet(3, Unit::FEET) ;
   bool result = (yard == feet);
   ASSERT_TRUE(result);
}

// ****** Centimeter Comparision *******
//3.1
TEST(centimeterTest, given_2inch_and5cm_when_compared_should_return_true) { 
   Length inch(2, Unit::INCH), cm(5, Unit::CENTIMETER);
   bool result = (inch == cm);
   ASSERT_TRUE(result);
}

//3.2
TEST(centimeterTest, given_30cm_1feet_when_compared_should_return_true) { 
   Length cm(30, Unit::CENTIMETER), feet(1, Unit::FEET);
   bool result = (cm == feet);
   ASSERT_TRUE(result);
}

//3.3
TEST(centimeterTest, given_90cm_1yard_when_compared_should_return_true) { 
   Length cm(30, Unit::CENTIMETER), yard(1, Unit::YARD);
   bool result = (cm == yard);
   ASSERT_TRUE(result);
}

//3.4
TEST(centimeterTest, given_1cm_1yard_when_compared_should_return_false) { 
   Length cm(1, Unit::CENTIMETER), yard(1, Unit::YARD);
   bool result = (cm == yard);
   ASSERT_FALSE(result);
}

int main(int argc, char **argv) {
   testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}