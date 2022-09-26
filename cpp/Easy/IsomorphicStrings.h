//
// Created by Mostafa on 9/26/2022.
//

/*205. Isomorphic Strings

Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.



Example 1:

Input: s = "egg", t = "add"
Output: true
Example 2:

Input: s = "foo", t = "bar"
Output: false
Example 3:

Input: s = "paper", t = "title"
Output: true


Constraints:

1 <= s.length <= 5 * 104
t.length == s.length
        s and t consist of any valid ascii character.*/

#ifndef LEETCODE_ISOMORPHICSTRINGS_H
#define LEETCODE_ISOMORPHICSTRINGS_H

#include <string>
#include <map>
#include <vector>

using namespace std;

bool isIsomorphic(string s, string t) {
    map<char, int> m_s, m_t;
    vector<int> v_s, v_t;
    int counter = 0;
    char c;
    for (int i = 0; i < s.length(); i++) {
        if (m_s.find(s[i]) == m_s.end()) m_s.insert({s[i], counter++});
        v_s.push_back(m_s[s[i]]);
    }
    counter = 0;
    for (int i = 0; i < t.length(); i++) {
        if (m_t.find(t[i]) == m_t.end()) m_t.insert({t[i], counter++});
        v_t.push_back(m_t[t[i]]);
    }
    return v_s == v_t;
}

#endif //LEETCODE_ISOMORPHICSTRINGS_H
