// https://leetcode.com/problems/find-first-palindromic-string-in-the-array/

#include <bits/stdc++.h>
using namespace std;

class Solution2
{
    // Discussion solution
public:
    string firstPalindrome(vector<string> &words)
    {
        // Equal function is used to compare any range from i to j with another range starting from k 
        // equal (i, j, k) ;
        for (auto &w : words)
            if (equal(begin(w), end(w), rbegin(w)))
                return w;
        return {};
    }
};

class Solution1
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