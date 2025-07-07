#include <gtest/gtest.h>
#include <stdexcept>

// Adds two integers
int add(int a, int b) {
    return a + b;
}

double divide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return static_cast<double>(a) / b;
}

TEST(AddTest, PositiveNumbers) {
    ASSERT_EQ(add(2, 3), 5);
    ASSERT_EQ(add(10, 5), 15);
}

TEST(AddTest, NegativeNumbers) {
    ASSERT_EQ(add(-2, -3), -5);
    ASSERT_EQ(add(-10, -5), -15);
}

TEST(AddTest, MixedNumbers) {
    ASSERT_EQ(add(2, -3), -1);
    ASSERT_EQ(add(-2, 3), 1);
}

TEST(AddTest, Zero) {
    ASSERT_EQ(add(0, 5), 5);
    ASSERT_EQ(add(5, 0), 5);
    ASSERT_EQ(add(0, 0), 0);
}

TEST(DivideTest, PositiveNumbers) {
    ASSERT_NEAR(divide(10, 2), 5.0, 0.001);
    ASSERT_NEAR(divide(100, 10), 10.0, 0.001);
    ASSERT_NEAR(divide(1, 1), 1.0, 0.001);
}

TEST(DivideTest, NegativeNumbers) {
    ASSERT_NEAR(divide(-10, 2), -5.0, 0.001);
    ASSERT_NEAR(divide(-10, -2), 5.0, 0.001);
    ASSERT_NEAR(divide(-1, -1), 1.0, 0.001);
}

TEST(DivideTest, MixedNumbers) {
    ASSERT_NEAR(divide(10, -2), -5.0, 0.001);
    ASSERT_NEAR(divide(-10, 2), -5.0, 0.001);
    ASSERT_NEAR(divide(10, -1), -10.0, 0.001);
}

TEST(DivideTest, ZeroDivisorThrows) {
    ASSERT_THROW(divide(10, 0), std::invalid_argument);
    ASSERT_THROW(divide(0, 0), std::invalid_argument);
}

TEST(DivideTest, ZeroNumerator) {
    ASSERT_NEAR(divide(0, 1), 0.0, 0.001);
}


TEST(DivideTest, LargeNumbers) {
    ASSERT_NEAR(divide(1000000, 1000), 10.0, 0.001);
    ASSERT_NEAR(divide(1000000000, 1000), 1000000.0, 0.001);
}

TEST(DivideTest, EdgeCaseZeroDivisor) {
    ASSERT_THROW(divide(10, 0), std::invalid_argument);
}

