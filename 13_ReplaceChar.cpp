// https://leetcode.com/problems/replace-all-digits-with-characters/

// You are given a 0-indexed string s that has lowercase English
// letters in its even indices and digits in its odd indices.

// There is a function shift(c, x), where c is a character and x is a
// digit, that returns the xth character after c.

// For example, shift('a', 5) = 'f' and shift('x', 0) = 'x'.
// For every odd index i, you want to replace the digit s[i] with
// shift(s[i-1], s[i]).

// Return s after replacing all digits. It is guaranteed that
// shift(s[i-1], s[i]) will never exceed 'z'.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string replaceDigits(string s)
    {
        for (int i = 1; i < s.length(); i++)
        {
            s[i] = s[i - 1] + s[i] - 48;
            ++i;
        }
        return s;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}