// https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/

// Given a string s consisting of only the characters 'a' and 'b',
// return true if every 'a' appears before every 'b' in the string.
// Otherwise, return false.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkString(string s)
    {
        int flag = 0;
        for (auto a : s)
        {
            if (a == 'b')
            {
                flag = 1;
            }
            if (flag)
            {
                if (a == 'a')
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}