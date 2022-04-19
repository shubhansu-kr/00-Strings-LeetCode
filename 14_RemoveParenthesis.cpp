// https://leetcode.com/problems/remove-outermost-parentheses/

// A valid parentheses string is either empty "", "(" + A + ")", or A + B,
// where A and B are valid parentheses strings, and + represents string
// concatenation.

// For example, "", "()", "(())()", and "(()(()))" are all valid parentheses
// strings.
// A valid parentheses string s is primitive if it is nonempty, and there
// does not exist a way to split it into s = A + B, with A and B nonempty
// valid parentheses strings.

// Given a valid parentheses string s, consider its primitive decomposition:
// s = P1 + P2 + ... + Pk, where Pi are primitive valid parentheses strings.

// Return s after removing the outermost parentheses of every primitive
// string in the primitive decomposition of s.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        // Let's use stack to keep track
        stack<char> p;
        string res;
        // "(()())(())(()(()()))"
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ')')
            {
                p.pop();
            }
            if (p.size())
            {
                res.push_back(s[i]);
            }
            if (s[i] == '(')
            {
                p.push(s[i]);
            }
        }
        return res;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}