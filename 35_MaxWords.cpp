// https://leetcode.com/problems/maximum-number-of-words-you-can-type/

// There is a malfunctioning keyboard where some letter keys
// do not work. All other keys on the keyboard work properly.

// Given a string text of words separated by a single space
// (no leading or trailing spaces) and a string brokenLetters of
// all distinct letter keys that are broken, return the number of
// words in text you can fully type using this keyboard.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int canBeTypedWords(string text, string brokenLetters)
    {
        int count = 0, flag = 1;
        set<char> p(brokenLetters.begin(), brokenLetters.end());
        for (auto x : text)
        {
            if (x == ' ')
            {
                if (flag)
                {
                    count++;
                }
                else
                {
                    flag = 1;
                }
            }
            if (!flag)
            {
                continue;
            }
            if (p.count(x))
            {
                flag = 0;
            }
        }
        if (flag)
        {
            count++;
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