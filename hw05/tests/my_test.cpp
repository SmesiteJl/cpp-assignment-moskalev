#include <hw05.h>
#include <gtest/gtest.h>

TEST(Hw05Tests, Test1)
{
    VecOfStr input{"Sit on a potato pan, Otis", "rotor", "text"};
    auto expected = VecOfStr{"Sit on a potato pan, Otis", "rotor"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test2)
{
    VecOfStr input{"Gert, I saw Ron avoid a radio-van, or was it Reg?", "I made border bard’s drowsy swords; drab, red robed am I.", "forward and backward"};
    auto expected = VecOfStr{"Gert, I saw Ron avoid a radio-van, or was it Reg?", "I made border bard’s drowsy swords; drab, red robed am I."};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test3)
{
    VecOfStr input{"I'm a lasagna, hang a salami", "Palindrome Examples in English"};
    auto expected = VecOfStr{"I'm a lasagna, hang a salami"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

TEST(Hw05Tests, Test4)
{
    VecOfStr input{"Some men interpret nine memos", "civic"};
    auto expected = VecOfStr{"Some men interpret nine memos", "civic"};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}
TEST(Hw05Tests, Test5)
{
    VecOfStr input{"not a palindrome", "really not a palindrome", "i'm not a palindrome for sure"};
    auto expected = VecOfStr{};
    auto actual = hw05(input);
    EXPECT_EQ(actual, expected);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}