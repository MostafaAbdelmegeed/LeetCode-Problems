//
// Created by Mostafa on 9/22/2022.
// SOLVED
//

/* 13. Roman to Integer
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.*/

#ifndef ROMAN_TO_INTEGER_HEADER
#define ROMAN_TO_INTEGER_HEADER


#include <iostream>
#include <string>
#include <map>

using namespace std;

int romanToInt(string s) {
    int val = 0;
    map<string, int> roman_numerals{{"I", 1},
                                    {"V", 5},
                                    {"X", 10},
                                    {"L", 50},
                                    {"C", 100},
                                    {"D", 500},
                                    {"M", 1000}};
    string tmp1, tmp2;
    for (auto it = s.begin(); it != s.end(); ++it) {
        tmp1.push_back(*it);
        if (it == s.end() - 1) {
            val += roman_numerals[tmp1];
            continue;
        }
        tmp2.push_back(*(it + 1));
        int left_val = roman_numerals[tmp1];
        int right_val = roman_numerals[tmp2];\
        if (left_val >= right_val) {
            val += left_val;
        } else {
            val += right_val - left_val;
            it++;
        }
        tmp1.clear();
        tmp2.clear();
    }
    return val;
}

#endif