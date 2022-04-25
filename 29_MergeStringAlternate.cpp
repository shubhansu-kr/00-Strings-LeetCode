// https://leetcode.com/problems/merge-strings-alternately/

// You are given two strings word1 and word2. Merge the strings
// by adding letters in alternating order, starting with word1.
// If a string is longer than the other, append the additional
// letters onto the end of the merged string.

// Return the merged string.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        // Create a new string

        string res;
        int i = 0, j = 0;
        int sw = 1;
        while (i != word1.size() || j != word2.size())
        {
            if (sw)
            {
                res.push_back(word1[i]);
                ++i;
                if (j != word2.size())
                {
                    sw = 0;
                }
            }
            else
            {
                res.push_back(word2[j]);
                ++j;
                if (i != word1.size())
                {
                    sw = 1;
                }
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