//
// Created by Mostafa on 9/26/2022.
//

/**
 * Unit tests for the more advanced problems
 */

#include "gtest/gtest.h"
#include "RomanToInteger.h"
#include "LongestCommonPrefix.h"
#include "ValidParentheses.h"
#include "TwoSum.h"
#include "FirstLetterToAppearTwice.h"
#include "FirstUniqueCharacterInAString.h"
#include "RunningSumOf1dArray.h"
#include "FindPivotIndex.h"

TEST(Easy, FindPivotIndex) {
    vector<int> vec1 = {1, 7, 3, 6, 5, 6};
    vector<int> vec2 = {1, 2, 3};
    vector<int> vec3 = {2, 1, -1};
    EXPECT_EQ(pivotIndex(vec1), 3);
    EXPECT_EQ(pivotIndex(vec2), -1);
    EXPECT_EQ(pivotIndex(vec3), 0);
}

TEST(Easy, RunningSumOf1dArray) {
    vector<int> vec1 = {1, 2, 3, 4};
    vector<int> vec1_ans = {1, 3, 6, 10};
    vector<int> vec2 = {1, 1, 1, 1, 1};
    vector<int> vec2_ans = {1, 2, 3, 4, 5};
    vector<int> vec3 = {3, 1, 2, 10, 1};
    vector<int> vec3_ans = {3, 4, 6, 16, 17};
    EXPECT_EQ(runningSum(vec1), vec1_ans);
    EXPECT_EQ(runningSum(vec2), vec2_ans);
    EXPECT_EQ(runningSum(vec3), vec3_ans);
}

TEST(Easy, FirstUniqueCharacterInAString) {
    string s1 = "leetcode";
    string s2 = "loveleetcode";
    string s3 = "aabb";
    EXPECT_EQ(firstUniqChar(s1), 0);
    EXPECT_EQ(firstUniqChar(s2), 2);
    EXPECT_EQ(firstUniqChar(s3), -1);
}

TEST(Easy, FirstLetterToAppearTwice) {
    string s1 = "abccbaacz";
    string s2 = "abcdd";
    EXPECT_EQ(repeatedCharacter(s1), 'c');
    EXPECT_EQ(repeatedCharacter(s2), 'd');
}

TEST(Easy, TwoSum) {
    vector<int> vec1 = vector<int>({2, 7, 11, 15});
    vector<int> vec2 = vector<int>({3, 2, 4});
    vector<int> vec3 = vector<int>({3, 3});
    EXPECT_EQ(twoSum(vec1, 9)[0], 0);
    EXPECT_EQ(twoSum(vec1, 9)[1], 1);
    EXPECT_EQ(twoSum(vec2, 6)[0], 1);
    EXPECT_EQ(twoSum(vec2, 6)[1], 2);
    EXPECT_EQ(twoSum(vec3, 6)[0], 0);
    EXPECT_EQ(twoSum(vec3, 6)[1], 1);
}


TEST(Easy, RomanToInteger) {
    EXPECT_EQ(romanToInt("III"), 3);
    EXPECT_EQ(romanToInt("LVIII"), 58);
    EXPECT_EQ(romanToInt("MCMXCIV"), 1994);
}

TEST(Easy, LongestCommonPrefix) {
    vector<string> vec1 = vector<string>({"flower", "flow", "flight"});
    vector<string> vec2 = vector<string>({"dog", "racecar", "car"});
    EXPECT_EQ(longestCommonPrefix(vec1), "fl");
    EXPECT_EQ(longestCommonPrefix(vec2), "");
}

TEST(Easy, ValidParentheses) {
    EXPECT_TRUE(isValid("()"));
    EXPECT_TRUE(isValid("()[]{}"));
    EXPECT_FALSE(isValid("(]"));
}


