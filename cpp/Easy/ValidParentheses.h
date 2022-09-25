//
// Created by Mostafa on 9/24/2022.
// SOLVED
//

/*
 * 20. Valid Parentheses
 * Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

    An input string is valid if:

    1. Open brackets must be closed by the same type of brackets.
    2. Open brackets must be closed in the correct order.
    3. Every close bracket has a corresponding open bracket of the same type.
 */

#ifndef VALID_PARENTHESES_HEADER
#define VALID_PARENTHESES_HEADER

#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s) {
    if (s.size() <= 1) return false;
    stack<char> stack;
    for (auto it = s.begin(); it != s.end(); ++it) {
        if (*it == '(' || *it == '{' || *it == '[') stack.push(*it);
        else if (*it == ')') if (!stack.empty() && stack.top() == '(') stack.pop(); else return false;
        else if (*it == '}') if (!stack.empty() && stack.top() == '{') stack.pop(); else return false;
        else if (*it == ']') if (!stack.empty() && stack.top() == '[') stack.pop(); else return false;
    }
    if (stack.empty()) return true;
    else return false;
}

#endif