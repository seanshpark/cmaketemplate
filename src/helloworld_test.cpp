#include "gtest/gtest.h"
 
TEST(HelloWorldTest, PositiveNos) {
  double val = 10.0;
  EXPECT_EQ(val, 10.0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
