//
// Created by Mostafa on 9/26/2022.
//

/*21. Merge Two Sorted Lists

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.



Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]


Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.*/

#ifndef LEETCODE_MERGETWOSORTEDLISTS_H
#define LEETCODE_MERGETWOSORTEDLISTS_H

#include <vector>
#include <algorithm>
#include "../Helper/common.h"

using namespace std;

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
    vector<int> vec;
    while (list1 != nullptr) {
        vec.push_back(list1->val);
        list1 = list1->next;
    }
    while (list2 != nullptr) {
        vec.push_back(list2->val);
        list2 = list2->next;
    }
    sort(vec.begin(), vec.end());
    ListNode *answer = nullptr;
    ListNode *answerHead = nullptr;
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        if (it == vec.begin()) {
            answer = new ListNode(*it, nullptr);
            answerHead = answer;
            continue;
        }
        answer->next = new ListNode(*it, nullptr);
        answer = answer->next;
    }
    return answerHead;
}

#endif //LEETCODE_MERGETWOSORTEDLISTS_H
