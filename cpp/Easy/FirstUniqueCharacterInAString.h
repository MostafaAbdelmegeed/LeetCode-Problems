//
// Created by Mostafa on 9/26/2022.
//

/*387. First Unique Character in a String

Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.



Example 1:

Input: s = "leetcode"
Output: 0
Example 2:

Input: s = "loveleetcode"
Output: 2
Example 3:

Input: s = "aabb"
Output: -1


Constraints:

1 <= s.length <= 105
s consists of only lowercase English letters.*/


#ifndef LEETCODE_FIRSTUNIQUECHARACTERINASTRING_H
#define LEETCODE_FIRSTUNIQUECHARACTERINASTRING_H

#include <string>
#include <map>
#include <algorithm>

using namespace std;

int firstUniqChar(string s) {
    map<char, pair<int, int>> ledger;
    for (auto it = s.begin(); it != s.end(); ++it) {
        if (ledger.find(*it) == ledger.end())
            ledger.insert({*it, pair<int, int>({static_cast<int>(it - s.begin())}, 1)});
        else ledger[*it].second++;
    }
    int min_index = s.length();
    for (auto it = ledger.begin(); it != ledger.end(); ++it)
        if (it->second.second == 1 && it->second.first < min_index) min_index = it->second.first;
    return min_index < s.length() ? min_index : -1;
}

#endif //LEETCODE_FIRSTUNIQUECHARACTERINASTRING_H
