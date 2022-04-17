// https://leetcode.com/problems/split-a-string-in-balanced-strings/

// Balanced strings are those that have an equal quantity of
// 'L' and 'R' characters.

// Given a balanced string s, split it in the maximum amount
// of balanced strings.

// Return the maximum amount of split balanced strings.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int balancedStringSplit(string s)
    {
        // No brainer - Wrong solution "RLRRRLLRLL"
        int count = 0;
        int cL = 0, cR = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'L')
            {
                cL++;
                if (cR == cL)
                {
                    count++;
                    cR = cL = 0;
                }
            }
            else
            {
                cR++;
                if (cR == cL)
                {
                    count++;
                    cR = cL = 0;
                }
            }
        }
        return count ;
    }
};

class Solution
{
public:
    int balancedStringSplit(string s)
    {
        // No brainer - Wrong solution "RLRRRLLRLL"
        int count = 0;
        int cL = 0, cR = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'L')
            {
                if (cR && cR == cL)
                {
                    count++;
                    cR = cL = 0;
                }
                else
                {
                    cL++;
                }
            }
            else
            {
                if (cL && cL == cR)
                {
                    count++;
                    cR = cL = 0;
                }
                else
                {
                    cR++;
                }
            }
        }
        return count + 1;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}