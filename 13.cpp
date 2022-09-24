//
// Created by Mostafa on 9/22/2022.
// SOLVED
//
#include <iostream>
#include <string>
#include <map>

using namespace std;

int romanToInt(string s) {
    cout << "Input: " << '\t' << s << endl;
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
        cout << "Current Literal: " << *it << '\t';
        tmp1.push_back(*it);
        if (it == s.end() - 1) {
            val += roman_numerals[tmp1];
            continue;
        }
        tmp2.push_back(*(it + 1));
        int left_val = roman_numerals[tmp1];
        int right_val = roman_numerals[tmp2];\
        cout << left_val << '\t' << right_val << '\t';
        if (left_val >= right_val) {
            cout << "val += " << left_val << '\t';
            val += left_val;
        } else {
            cout << "val += " << right_val - left_val << '\t';
            val += right_val - left_val;
            it++;
        }
        tmp1.clear();
        tmp2.clear();
        cout << tmp1 << '\t' << val << endl;
    }
    return val;
}

int main() {
    cout << romanToInt("MCMXCIV") << endl;
    return 0;
}
