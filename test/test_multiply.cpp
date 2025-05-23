#include <gtest/gtest.h>
#include "multiply.h"

TEST(SumTest, HandlesPositiveInput)
{
int suma = multiply(2, 2);

EXPECT_EQ(suma, 4);
}