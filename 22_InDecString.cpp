// https://leetcode.com/problems/increasing-decreasing-string/

#include <bits/stdc++.h>
using namespace std;

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