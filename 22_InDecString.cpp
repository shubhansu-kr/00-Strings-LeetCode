// https://leetcode.com/problems/increasing-decreasing-string/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    // Discussion solution 
public:
    string sortString(string s)
    {
        string res = "";
        int cnt[26] = {};
        for (auto ch : s)
            ++cnt[ch - 'a'];
        while (s.size() != res.size())
        {
            for (auto i = 0; i < 26; ++i)
                res += string(--cnt[i] >= 0 ? 1 : 0, 'a' + i);
            for (int i = 25; i >= 0; --i)
                res += string(--cnt[i] >= 0 ? 1 : 0, 'a' + i);
        }
        return res;
    }
};
class Solution
{
public:
    string sortString(string s)
    {
        sort(s.begin(), s.end());
        string ans;
        ans.push_back(s[0]);
        s[0] = 0;
        int sw = 1, i = 1;
        while (ans.length() != s.length())
        {
            // Unsolved
        }
    }
};

class Solution
{
public:
    string sortString(string s)
    {
        map<char, int> p;
        for (auto a : s)
        {
            p[a]++;
        }
        int i = 0;
        string res;
        while (i != s.length())
        {
            for (auto it : p)
            {
                if (it.second)
                {
                    res.push_back(it.first);
                    --it.second;
                    ++i;
                }
            }
            for (auto it = p.rbegin(); it != p.rend(); it++)
            {
                if (it->second)
                {
                    --(it->second);
                    res.push_back(it->first);
                    ++i;
                }
            }
        }
        return res;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}