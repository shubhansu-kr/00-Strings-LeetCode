// https://leetcode.com/problems/jewels-and-stones/

// You're given strings jewels representing the types of stones
// that are jewels, and stones representing the stones you have.
// Each character in stones is a type of stone you have. You want
// to know how many of the stones you have are also jewels.

// Letters are case sensitive, so "a" is considered a different
// type of stone from "A"

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        // So, basically return the number of char in stones which matches
        // jewels char

        // Use find to verify if char exist
        int count = 0;
        for (int i = 0; i < stones.length(); i++)
        {
            if (jewels.find(stones[i]) != jewels.npos)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}