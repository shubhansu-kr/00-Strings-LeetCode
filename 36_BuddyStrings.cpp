// https://leetcode.com/problems/buddy-strings/

// Given two strings s and goal, return true if you can swap two
// letters in s so the result is equal to goal, otherwise, return false.

// Swapping letters is defined as taking two indices i and j (0-indexed)
// such that i != j and swapping the characters at s[i] and s[j].

// For example, swapping at indices 0 and 2 in "abcd" results in "cbad".

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool buddyStrings(string s, string goal)
    {
        if (s.length() != goal.length())
        {
            return false;
        }
        // Equal length string
        // Check for inequality
        vector<int> p;
        set<char> q;
        int flag = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (!flag)
            {
                if (!q.count(s[i]))
                {
                    q.insert(s[i]);
                }
                else
                {
                    flag = 1;
                }
            }
            if (s[i] != goal[i])
            {
                p.push_back(i);
            }
        }
        if (p.size() == 2)
        {
            swap(s[p[0]], s[p[1]]);
        }
        if (p.size() == 0 )
        {
            // Check if any letter is repeating in s
            if (flag) {
                return true ;
            }
            return false ;
        }
        return s == goal;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}