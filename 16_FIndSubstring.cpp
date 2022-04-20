// https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/

// Given an array of strings patterns and a string word,
// return the number of strings in patterns that exist as a
// substring in word.

// A substring is a contiguous sequence of characters within a string.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    // Discussion solution
public:
    int numOfStrings(vector<string> &patterns, string word)
    {
        return count_if(begin(patterns), end(patterns), [&](const auto &p)
                        { return word.find(p) != string::npos; });
    }
};

class Solution
{
public:
    int numOfStrings(vector<string> &patterns, string word)
    {
        int count = 0;
        for (int i = 0; i < patterns.size(); i++)
        {
            if (word.find(patterns[i]) != word.npos)
            {
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