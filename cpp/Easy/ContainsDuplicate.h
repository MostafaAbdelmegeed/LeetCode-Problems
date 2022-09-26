//
// Created by Sheta on 9/26/2022.
// SOLVED
//

/*
 * 217. Contains Duplicate
 *Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
 */

#ifndef LEETCODE_CONTAINSDUPLICATE_H
#define LEETCODE_CONTAINSDUPLICATE_H

bool containsDuplicate(vector<int>& nums) {
        // Create an unordered set (O(N) Time).
        unordered_set<int> hash_set;
        // Traverse all the elements through the loop.
        for(int i = 0; i < nums.size(); ++i) {
            // Searches set. if present, it contains duplicate.
            if(hash_set.count(nums[i]))
                return true;
            // insert nums[i] in set...
            hash_set.insert(nums[i]);
        }
        return false;
}


#endif LEETCODE_LEETCODE_CONTAINSDUPLICATE_H
