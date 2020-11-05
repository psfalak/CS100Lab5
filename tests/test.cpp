#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(Constructor, constructorNoVals) {
   Rectangle* test = new Rectangle();
   
   EXPECT_EQ(test->perimeter(), 0);
}

TEST(Constructor, constructorRegVals) {
   Rectangle* test = new Rectangle(3,4);
   EXPECT_EQ(test->perimeter(), 14);
}

TEST(Constructor, constructorZeroVals) {
   Rectangle* test = new Rectangle(0,4);
    EXPECT_EQ(test->perimeter(), 8); 
}


TEST(Area, zeroVal) {
   Rectangle* test = new Rectangle(4,0);
   EXPECT_EQ(test->area(), 0);
}
TEST(Area, areaRegVal) {
   Rectangle* test = new Rectangle(4,4);
   EXPECT_EQ(test->area(), 16);
}
TEST(Area, areaZeroVal) {
   Rectangle* test = new Rectangle(4,0);
   EXPECT_EQ(test->area(), 0);
}


TEST(Perimeter, perimZeroVal) {
   Rectangle* test = new Rectangle(0,0);
   EXPECT_EQ(test->perimeter(), 0);
}

TEST(Perimeter, perimregularVals) {
   Rectangle* test = new Rectangle(4,4);
   EXPECT_EQ(test->perimeter(), 16);
}

TEST(Perimeter, perimOneZero) {
   Rectangle* test = new Rectangle(4,0);
   EXPECT_EQ(test->perimeter(), 8);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
