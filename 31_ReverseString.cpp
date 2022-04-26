// https://leetcode.com/problems/reverse-string/

// Write a function that reverses a string. The input string
// is given as an array of characters s.

// You must do this by modifying the input array in-place with
// O(1) extra memory.

#include <bits/stdc++.h>
using namespace std;

class Solution2
{
    // Using Stack
public:
    void reverseString(vector<char> &s)
    {
        stack<char> p;
        for (auto a : s)
        {
            p.push(a);
        }
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = p.top();
            p.pop();
        }
    }
};

class Solution1
{
    // Using Recursion
public:
    void reverseString(vector<char> &s)
    {
        int i = 0, j = s.size() - 1;
        swaap(s, i, j);
    }
    void swaap(vector<char> &s, int i, int j)
    {
        if (i >= j)
        {
            return;
        }
        swap(s[i], s[j]);
        swaap(s, ++i, --j);
    }
};

class Solution
{
    // Two pointer approach
public:
    void reverseString(vector<char> &s)
    {
        int i = 0;
        int j = s.size() - 1;
        while (i < j)
        {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            // swap(s[i], s[j]);
            ++i;
            --j;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}