// https://leetcode.com/problems/counting-words-with-a-given-prefix/

// You are given an array of strings words and a string pref.

// Return the number of strings in words that contain pref as a prefix.

// A prefix of a string s is any leading contiguous substring of s.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int prefixCount(vector<string> &words, string pref)
    {
        int count = 0;
        for (int i = 0; i < words.size(); i++)
        {
            if (equal(pref.begin(), pref.end(), words[i].begin())) {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}