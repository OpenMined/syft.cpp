#include "gtest/gtest.h"
#include "objectPointer.h"

TEST(objectPointerTest, testConstructor)
{
  ObjectPointer op(123, "me", "test purposes only");
  EXPECT_EQ(op.owner, "me");
  EXPECT_EQ(op.id, 123);
}

TEST(objectPointerTest, testDescription)
{
  ObjectPointer op(1, "test", "test purposes only");
  string description = op.describe();
  EXPECT_EQ(description, "test purposes only");
}