#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindHeightShould, ReturnMaxDepth) {
  std::vector<int> vect = {1,5,3,8,6,7,10,2,4,9,11};
  BST mytree(vect);
  int actual = mytree.find_height();
  int expected = 5;
  EXPECT_EQ(expected, actual);
}
