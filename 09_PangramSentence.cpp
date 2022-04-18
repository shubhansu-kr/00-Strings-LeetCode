// https://leetcode.com/problems/check-if-the-sentence-is-pangram/

// A pangram is a sentence where every letter of the English alphabet
// appears at least once.

// Given a string sentence containing only lowercase English letters,
// return true if sentence is a pangram, or false otherwise.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        if (sentence.length() < 26)
        {
            return false;
        }
        set<char> p;
        for (int i = 0; i < sentence.length(); i++)
        {
            p.insert(sentence[i]);
            if (p.size() == 26)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}