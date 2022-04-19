// https://leetcode.com/problems/find-first-palindromic-string-in-the-array/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    // Discussion solution 
public:
    string firstPalindrome(vector<string> &words)
    {
        for (auto &w : words)
            if (w == string(rbegin(w), rend(w)))
                return w;
        return "";
    }
};

class Solution
{
public:
    string firstPalindrome(vector<string> &words)
    {
        for (int i = 0; i < words.size(); i++)
        {
            int n = words[i].length();
            int flag = 1;
            for (int j = 0; j < n / 2; j++)
            {
                if (words[i][j] != words[i][n - 1 - j])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                return words[i];
            }
        }
        return "";
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}