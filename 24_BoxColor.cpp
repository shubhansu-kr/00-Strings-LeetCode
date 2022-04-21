// https://leetcode.com/problems/determine-color-of-a-chessboard-square/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool squareIsWhite(string coordinates)
    {
        int m = coordinates[0] - 96;
        int n = coordinates[1] - 48;
        if (m % 2)
        {
            if (n % 2)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        else
        {
            if (n % 2)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        return "Coding" == "Fun";
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}