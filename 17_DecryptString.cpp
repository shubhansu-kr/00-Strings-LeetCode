// https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/

// You are given a string s formed by digits and '#'.
// We want to map s to English lowercase characters as follows:

// Characters ('a' to 'i') are represented by ('1' to '9') respectively.
// Characters ('j' to 'z') are represented by ('10#' to '26#') respectively.
// Return the string formed after mapping.

// The test cases are generated so that a unique mapping will always exist.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string freqAlphabets(string s)
    {

        string ans;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '#')
            {
                ans.pop_back();
                ans.pop_back();
                ans.push_back(48 + (s[i - 2] - 48) * 10 + s[i - 1]);
            }
            else
            {
                ans.push_back(s[i] + 48);
            }
        }
        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}