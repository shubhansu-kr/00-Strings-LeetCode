// https://leetcode.com/problems/shuffle-string/

// You are given a string s and an integer array indices of the same
// length. The string s will be shuffled such that the character at the
// ith position moves to indices[i] in the shuffled string.

// Return the shuffled string.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        // create string
        string res = s;
        for (int i = 0; i < s.length(); i++)
        {
            res[indices[i]] = s[i];
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