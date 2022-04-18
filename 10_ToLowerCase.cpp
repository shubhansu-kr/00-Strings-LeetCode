// https://leetcode.com/problems/to-lower-case/

// Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string toLowerCase(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] += 32;
            }
        }
        return s ;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}