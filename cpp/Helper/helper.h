//
// Created by Mostafa on 9/26/2022.
//

#ifndef LEETCODE_HELPER_H
#define LEETCODE_HELPER_H

#include <vector>
#include <string>
#include <iostream>
#include "common.h"

using namespace std;

void printList(const ListNode *ln) {
    cout << "[ ";
    while (ln != nullptr) {
        cout << ln->val << ", ";
        ln = ln->next;
    }
    cout << "]" << endl;
}

template<typename T>
void printVector(vector<T> vec) {
    cout << "[ ";
    for (auto it = vec.begin(); it != vec.end(); ++it) cout << *it << ", ";
    cout << "]" << endl;
}

template<typename T>
string vector2string(vector<T> vec) {
    string s;
    for (auto it = vec.begin(); it != vec.end(); ++it) s.push_back(to_string(*it));
    return s;
}


#endif //LEETCODE_HELPER_H
