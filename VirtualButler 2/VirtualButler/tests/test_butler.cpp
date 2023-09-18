
#include "gtest/gtest.h"
#include "../src/butler.cpp"

TEST(ButlerTest, TestButlerInitialization) {
    Butler butler;
    ASSERT_TRUE(butler.isInitialized());
}

TEST(ButlerTest, TestButlerMovement) {
    Butler butler;
    butler.move(10, 20, 30);
    ASSERT_EQ(butler.getPosition(), std::make_tuple(10, 20, 30));
}

TEST(ButlerTest, TestButlerSpeak) {
    Butler butler;
    ASSERT_EQ(butler.speak("Hello"), "Hello");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
