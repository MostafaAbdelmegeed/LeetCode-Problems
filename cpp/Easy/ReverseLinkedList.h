//
// Created by Mostafa on 9/27/2022.
//

/*206. Reverse Linked List

        Given the head of a singly linked list, reverse the list, and return the reversed list.



Example 1:


Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
Example 2:


Input: head = [1,2]
Output: [2,1]
Example 3:

Input: head = []
Output: []


Constraints:

The number of nodes in the list is the range [0, 5000].
-5000 <= Node.val <= 5000


Follow up: A linked list can be reversed either iteratively or recursively. Could you implement both?*/

#ifndef LEETCODE_REVERSELINKEDLIST_H
#define LEETCODE_REVERSELINKEDLIST_H

#include <stack>
#include "../Helper/common.h"
#include "../Helper/helper.h"

using namespace std;


ListNode *reverseList(ListNode *head) {
    if (head == nullptr) return head;
    stack<ListNode *> stack;
    while (head != nullptr) {
        stack.push(head);
        head = head->next;
    }
    ListNode *answerHead = stack.top();
    ListNode *iterator = answerHead;
    stack.pop();
    while (!stack.empty()) {
        iterator->next = stack.top();
        iterator = iterator->next;
        stack.pop();
    }
    iterator->next = nullptr;
    return answerHead;
}

#endif //LEETCODE_REVERSELINKEDLIST_H
