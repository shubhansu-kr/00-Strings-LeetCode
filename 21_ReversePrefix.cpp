// https://leetcode.com/problems/reverse-prefix-of-word/

// Given a 0-indexed string word and a character ch, reverse the
// segment of word that starts at index 0 and ends at the index
// of the first occurrence of ch (inclusive). If the character ch
// does not exist in word, do nothing.

// For example, if word = "abcdefd" and ch = "d", then you should
// reverse the segment that starts at 0 and ends at 3 (inclusive).
// The resulting string will be "dcbaefd".
// Return the resulting string.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        int range = 0;
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] == ch)
            {
                range = i+1;
                break;
            }
        }
        if (range)
        {
            reverse(word.begin(), word.begin() + range);
        }
        return word;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}