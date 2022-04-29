// https://leetcode.com/problems/long-pressed-name/

#include <bits/stdc++.h>
using namespace std;

bool isLongPressedName(string name, string typed)
{
    int i = 0, m = name.length(), n = typed.length();
    for (int j = 0; j < n; ++j)
        if (i < m && name[i] == typed[j])
            ++i;
        else if (!j || typed[j] != typed[j - 1])
            return false;
    return i == m;
}
class Solution
{
    // Wrong solution
public:
    bool isLongPressedName(string name, string typed)
    {
        if (name.length() > typed.length() || name[0] != typed[0])
        {
            return false;
        }

        int i = 0, j = 0;
        while (i < name.length())
        {
            if (name[i] == typed[j])
            {
                ++j;
                ++i;
                continue;
            }
            while (typed[j] == name[i - 1] && j < typed.length())
            {
                ++j;
            }
            if (typed[j] != name[i])
            {
                return false;
            }
        }
        if (j < typed.length())
        {
            while (j < typed.length())
            {
                if (typed[j] != typed[i - 1])
                    return false;
                ++j;
            }
        }
        return true;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}