#include "../main/quantityMeasurement.h"
#include <gtest/gtest.h>

//1.1
TEST(feetTest, 0feet_and_0feet_should_return_equal) { 
   Quantity feet1(0, Unit::FEET ),feet2(0, Unit::FEET);
   ASSERT_EQ(feet1, feet2);
}

//1.2
TEST(feetTest, given_null_value_should_return_false) { 
   Quantity feet1(1, Unit::FEET);
   bool result = (&feet1 == nullptr);
   ASSERT_FALSE(result);
}

//1.3
TEST(feetTest, given_same_reference_should_return_true) { 
   Quantity *feet1 = new Quantity(1, Unit::FEET);
   Quantity *feet2 = feet1;
   ASSERT_EQ(feet1, feet2);
}

//1.4
TEST(feetTest, given_same_unit_type_should_return_true) { 
   Quantity feet1(1, Unit::FEET), feet2(1, Unit::FEET);
   ASSERT_EQ(feet1, feet2);
}

//1.5
TEST(feetTest, given_values_10feet_and_20feet_when_compared_should_return_false) { 
   Quantity feet1(10, Unit::FEET), feet2(20, Unit::FEET);
   bool result = (feet1 == feet2);
   ASSERT_FALSE(result);
}

//1.6
TEST(inchTest, 0inch_and_0inch_should_return_equal) { 
   Quantity inch1(0, Unit::INCH ), inch2(0, Unit::INCH);
   bool result = (inch1 == inch2);
   ASSERT_TRUE(result);
}

//1.7
TEST(inchTest, given_null_value_when_compared_should_return_false) { 
   Quantity inch1(1, Unit::INCH);
   bool result = (&inch1 == nullptr);
   ASSERT_FALSE(result);
}

//1.8
TEST(inchTest, given_inch_values_when_reference_is_same_should_return_true) { 
   Quantity *inch1 = new Quantity(1, Unit::INCH);
   Quantity *inch2 = inch1;
   bool result = (inch1 == inch2);
   ASSERT_TRUE(result);
}

//1.9
TEST(inchTest, given_same_unit_type_if_proper_should_return_true) { 
   Quantity inch1(1, Unit::INCH), inch2(1, Unit::INCH);
   bool result = (inch1 == inch2);
   ASSERT_TRUE(result);
}

//1.10
TEST(inchTest, given_icnh1_and_inch2_values_if_not_equal_should_return_false) { 
   Quantity inch1(10, Unit::INCH), inch2(20, Unit::INCH);
   bool result = (inch1 == inch2);
   ASSERT_FALSE(result);
}

TEST(inchTest, given_12inch_and_1feet_when_compared_should_return_true) { 
   Quantity inch(12, Unit::INCH), feet(1, Unit::FEET);
   bool result = (inch == feet);
   ASSERT_TRUE(result);
}

//            ****** Yard Comparision ******
//2.1 
TEST(yardTest, given_3feet_and_1yard_when_compared_should_return_true) { 
   Quantity feet(3, Unit::FEET), yard(1, Unit::YARD);
   bool result = (feet == yard);
   ASSERT_TRUE(result);
}

//2.2
TEST(yardTest, given_1feet_and_1yard_when_compared_should_return_false) { 
   Quantity feet(1, Unit::FEET), yard(1, Unit::YARD);
   bool result = (feet == yard);
   ASSERT_FALSE(result);
}

//2.3
TEST(yardTest, given_1inch_and_1yard_when_compared_should_return_false) { 
   Quantity inch(1, Unit::INCH), yard(1, Unit::YARD);
   bool result = (inch == yard);
   ASSERT_FALSE(result);
}

//2.4
TEST(yardTest, given_1yard_and_36inch_when_compared_should_return_true) { 
   Quantity yard(1, Unit::YARD), inch(36, Unit::INCH);
   bool result = (yard == inch);
      ASSERT_TRUE(result);
}

//2.5
TEST(yardTest, given_36yard_and_1yard_when_compared_should_return_true) { 
   Quantity inch(36, Unit::INCH), yard(1, Unit::YARD);
   bool result = (inch == yard);
   ASSERT_TRUE(result);
}

//2.6
TEST(yardTest, given_1yard_and_3feet_when_compared_should_return_true) { 
   Quantity yard(1, Unit::YARD), feet(3, Unit::FEET) ;
   bool result = (yard == feet);
   ASSERT_TRUE(result);
}

// ****** Centimeter Comparision *******
//3.1
TEST(centimeterTest, given_2inch_and5cm_when_compared_should_return_true) { 
   Quantity inch(2, Unit::INCH), cm(5, Unit::CENTIMETER);
   bool result = (inch == cm);
   ASSERT_TRUE(result);
}

//3.2
TEST(centimeterTest, given_30cm_1feet_when_compared_should_return_true) { 
   Quantity cm(30, Unit::CENTIMETER), feet(1, Unit::FEET);
   bool result = (cm == feet);
   ASSERT_TRUE(result);
}

//3.3
TEST(centimeterTest, given_90cm_1yard_when_compared_should_return_true) { 
   Quantity cm(90, Unit::CENTIMETER), yard(1, Unit::YARD);
   bool result = (cm == yard);
   ASSERT_TRUE(result);
}

//3.4
TEST(centimeterTest, given_1cm_1yard_when_compared_should_return_false) { 
   Quantity cm(1, Unit::CENTIMETER), yard(1, Unit::YARD);
   bool result = (cm == yard);
   ASSERT_FALSE(result);
}

//3.5
TEST(centimeterTest, given_1cm_1feet_when_compared_should_return_false) { 
   Quantity cm(1, Unit::CENTIMETER), feet(1, Unit::FEET);
   bool result = (cm == feet);
   ASSERT_FALSE(result);
}

//3.6
TEST(centimeterTest, given_1inch_and1cm_when_compared_should_return_false) { 
   Quantity inch(1, Unit::INCH), cm(1, Unit::CENTIMETER);
   bool result = (inch == cm);
   ASSERT_FALSE(result);
}

// *** Addition of lengths ***
//4.1
TEST(lengthAdditionTest, given_2inch_and_2inch_when_added_should_return_4inches){
    Quantity inch1(2, Unit::INCH), inch2(2, Unit::INCH);
    double result = inch1.addition(inch2);
    ASSERT_EQ(result, 4);
}

//4.2
TEST(lengthAdditionTest, given_values_1feet_and_2inch_when_added_should_return_14inches){
    Quantity feet(1, Unit::FEET), inch(2, Unit::INCH);
    double result = feet.addition(inch);
    ASSERT_EQ(result, 14);
}

//4.3
TEST(lengthAdditionTest, given_values_1feet_and_1feet_when_added_should_return_24inches){
    Quantity feet1(1, Unit::FEET), feet2(1, Unit::FEET);
    double result = feet1.addition(feet2);
    ASSERT_EQ(result, 24);
}

//4.4
TEST(lengthAdditionTest, given_values_of_inches_and_cm_when_added_should_return_result_in_inches){
    Quantity inch(2, Unit::INCH), cm(2.5, Unit::CENTIMETER);
    double result = inch.addition(cm);
    ASSERT_EQ(result, 3);
}

//***** volume comparision ****
//5.1
TEST(volumeComparisionTest, given_values_in_gallon_and_litres_when_compared_should_be_true ){
   Quantity gallon(1, Unit::GALLON), litre(3.78, Unit::LITRE);
   bool result = (gallon == litre);
   ASSERT_TRUE(result);
}

//5.2
TEST(volumeComparisionTest, given_values_in_litres_and_ml_when_compared_should_be_true ){
   Quantity litre(1, Unit::LITRE), ml(1000, Unit::ML);
   bool result = (litre == ml);
   ASSERT_TRUE(result);
}

// *** Addition of volumes ****
//6.1
TEST(volumeAdditionTest, given_values_in_litres_and_gallon_when_added_should_be_give_equivalent_result_in_litres){
   Quantity gallon(1, Unit::GALLON), litre(3.78, Unit::LITRE);
   double result =  gallon.addition(litre);
   ASSERT_EQ(result, 7.56);
}

//6.2
TEST(volumeAdditionTest, given_values_in_litres_and_ml_when_added_should_be_give_equivalent_result_in_litres){
   Quantity litre(1, Unit::LITRE), ml(1000, Unit::ML);
   double result =  litre.addition(ml);
   ASSERT_EQ(result, 2);
}

//*** weight comparision***
//7.1
TEST(weightTest, given_values_1kg_and_1000gram__should_return_true){
   Quantity kg(1, Unit::KG), gram(1000, Unit::GRAM);
   bool result =  (kg == gram);
   ASSERT_TRUE(result);
}

//7.2
TEST(weightTest, given_values_1tonne_and_1000kg__should_return_true){
   Quantity tonne(1, Unit::TONNE), kg(1000, Unit::KG);
   bool result =  (kg == tonne);
   ASSERT_TRUE(result);
}

//7.3
TEST(weightTest, given_values_1tonne_and_1000gram__should_be_equal_to_1001kg){
   Quantity tonne(1, Unit::TONNE), gram(1000, Unit::GRAM);
   double result =  tonne.addition(gram);
   ASSERT_EQ(result, 1001);
}

// *** Temperature Comparision ***
TEST(temperatureTest, given_values_212F_100C_when_compared_shpuld_be_equal){
   Quantity celsius(100, Unit::CELSIUS), fahrenheit(212, Unit::FAHRENHEIT);
   bool result = (celsius == fahrenheit);
   ASSERT_TRUE(result);
}

int main(int argc, char **argv) {
   testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}