// https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/

// Given a string s, return true if s is a good string,
// or false otherwise.

// A string s is good if all the characters that appear in s
// have the same number of occurrences (i.e., the same frequency).

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool areOccurrencesEqual(string s)
    {
        // We need to compare the frequency of characters - seems like a job for maps
        // but maps will increase the storage.

        map<char, int> p;
        for (auto a : s)
            p[a]++;
        auto ref = p.begin();
        for (auto it : p)
            if (it.second != ref->second)
                return false;
        return true;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}