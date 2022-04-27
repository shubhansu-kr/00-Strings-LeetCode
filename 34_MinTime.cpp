// https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minTimeToType(string word)
    {
        int res = word.size(), point = 'a';
        for (auto ch : word)
        {
            res += min(abs(ch - point), 26 - abs(point - ch));
            point = ch;
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