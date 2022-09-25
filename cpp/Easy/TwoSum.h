//
// Created by Mostafa on 9/25/2022.
//

/*
 * Two Sum
 * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * You can return the answer in any order.
 */

#ifndef TWO_SUM_HEADER
#define TWO_SUM_HEADER

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    for (auto it1 = nums.begin(); it1 != nums.end() - 1; ++it1) {
        for (auto it2 = it1 + 1; it2 != nums.end(); ++it2) {
            if (*it1 + *it2 == target) {
                auto vec = vector<int>({static_cast<int>(it1 - nums.begin()), static_cast<int>(it2 - nums.begin())});
                return vec;
            }
        }
    }
    return {};
}

#endif
