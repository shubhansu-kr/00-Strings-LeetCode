// https://leetcode.com/problems/reverse-words-in-a-string/

// Given an input string s, reverse the order of the words.

// A word is defined as a sequence of non-space characters.
// The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by
// a single space.

// Note that s may contain leading or trailing spaces or multiple
// spaces between two words. The returned string should only have
// a single space separating the words. Do not include any extra spaces.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        // Create a new string
        string ans;
        stack<string> p;
        int sw = 0;
        for (char a : s)
        {
            if (sw)
            {
                if (a != ' ')
                {
                    ans.push_back(a);
                }
                else
                {
                    p.push(ans);
                    ans.clear();
                    sw = 0;
                }
            }
            else
            {
                if (a != ' ')
                {
                    ans.push_back(a);
                    sw = 1;
                }
            }
        }
        if (ans.length())
        {
            ans.push_back(' ');
        }
        while (!p.empty())
        {
            ans.append(p.top());
            ans.push_back(' ');
            p.pop();
        }
        ans.pop_back();

        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}