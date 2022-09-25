//
// Created by Mostafa on 9/24/2022.
// SOLVED
//

/*
 * Longest Common Prefix
 * Write a function to find the longest common prefix string amongst an array of strings.
 * If there is no common prefix, return an empty string "".
 */

#ifndef LONGEST_COMMON_PREFIX_HEADER
#define LONGEST_COMMON_PREFIX_HEADER


#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string> &strs) {
    string lcp;
    int counter = 0;
    bool flag2 = true;
    int max_size = 0;
    char c = ' ';
    while (true) {
        if (!flag2 && counter >= max_size) break;
        for (auto it = strs.begin(); it != strs.end(); ++it) {
            if ((*it).empty()) return "";
            if (flag2 && (*it).size() > max_size) max_size = (*it).size();
            if ((*it).size() <= counter) return lcp;
            if (c == ' ') {
                c = (*it)[counter];
                continue;
            }
            if ((*it)[counter] == c) continue;
            else return lcp;
        }
        if (c != ' ') lcp.push_back(c);
        c = ' ';
        flag2 = false;
        counter++;
    }
    return lcp;
}

#endif
