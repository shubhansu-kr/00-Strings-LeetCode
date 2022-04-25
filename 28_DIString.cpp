// https://leetcode.com/problems/di-string-match/

// A permutation perm of n + 1 integers of all the integers
// in the range [0, n] can be represented as a string s of
// length n where:

// s[i] == 'I' if perm[i] < perm[i + 1], and
// s[i] == 'D' if perm[i] > perm[i + 1].

// Given a string s, reconstruct the permutation perm and
// return it. If there are multiple valid permutations perm,
// return any of them.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> diStringMatch(string s)
    {
        int d = s.length();
        int i = 0;
        vector<int> res;
        for (auto a : s)
        {
            if (a == 'I')
            {
                res.push_back(i);
                i++;
            }
            else
            {
                res.push_back(d);
                d--;
            }
        }
        res.push_back(d);
        return res;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}