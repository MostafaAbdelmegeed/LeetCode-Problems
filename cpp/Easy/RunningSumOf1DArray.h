
//
// Created by Sheta on 9/26/2022.
// SOLVED
//

/*
 * 1480. Running Sum of 1d Array
 *Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
  Return the running sum of nums.
 */

#ifndef LEETCODE_FIRSTLETTERTOAPPEARTWICE_H
#define LEETCODE_FIRSTLETTERTOAPPEARTWICE_H

vector<int> runningSum(vector<int>& nums) {
        //Initializing a vector array.
        std::vector<int> v{};
        //Initializing an incrementor.
        int n = 0;
        // Looping through the vector ref. array.
        for(int i = 0; i<nums.size();++i){
            // Getting the index and pushing into our new vector
            n = n + nums[i];
            v.push_back(n);
        }
        // Returning the final result
        return v;
}

#endif //LEETCODE_FIRSTLETTERTOAPPEARTWICE_H
