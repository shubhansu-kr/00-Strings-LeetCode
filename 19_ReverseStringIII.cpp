// https://leetcode.com/problems/reverse-words-in-a-string-iii/

// Given a string s, reverse the order of characters in each word
// within a sentence while still preserving whitespace and initial
// word order.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        int i = 0, j = 0;
        while (i != s.length() && j != s.length())
        {
            if (s[j] == ' ')
            {
                reverse(s.begin() + i, s.begin() + j);
                i = ++j;
            }
            else
            {
                ++j;
            }
        }
        reverse(s.begin() + i, s.begin() + j);
        return s;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}