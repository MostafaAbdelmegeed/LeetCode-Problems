//
// Created by Mostafa on 9/26/2022.
//

/*1480. Running Sum of 1d Array

        Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.



Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]


Constraints:

1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6*/

#ifndef LEETCODE_RUNNINGSUMOF1DARRAY_H
#define LEETCODE_RUNNINGSUMOF1DARRAY_H

#include <vector>
#include <algorithm>

using namespace std;

vector<int> runningSum(vector<int> &nums) {
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        if (it == nums.begin()) continue;
        (*it) += *(it - 1);
    }
    return nums;
}

#endif //LEETCODE_RUNNINGSUMOF1DARRAY_H
