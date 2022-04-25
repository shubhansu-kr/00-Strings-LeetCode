// https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/

// Given an integer n, return a string with n characters such that
// each character in such string occurs an odd number of times.

// The returned string must contain only lowercase English letters.
// If there are multiples valid strings, return any of them.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string generateTheString(int n)
    {
        string res;
        if (n % 2)
        {
            for (int i = 0; i < n; i++)
            {
                res.push_back('a');
            }
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                res.push_back('a');
            }
            res.push_back('b');
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