// https://leetcode.com/problems/number-of-different-integers-in-a-string/

// You are given a string word that consists of digits
// and lowercase English letters.

// You will replace every non-digit character with a space.
// For example, "a123bc34d8ef34" will become " 123  34 8  34".
// Notice that you are left with some integers that are separated
// by at least one space: "123", "34", "8", and "34".

// Return the number of different integers after performing the
// replacement operations on word.

// Two integers are considered different if their decimal representations
// without any leading zeros are different.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    // Wrong solution : out of range Run time error 
public:
    int numDifferentIntegers(string word)
    {
        set<int> nums;
        int sw = 1;
        int start = 0, len = 0;
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] >= '0' && word[i] <= '9')
            {
                if (sw)
                {
                    start = i;
                }
                ++len;
                sw = 0;
            }
            else
            {
                if (!sw)
                {
                    nums.insert(stoi(word.substr(start, len)));
                    len = 0;
                }
                sw = 1;
            }
        }
        if (len)
        {
            nums.insert(stoi(word.substr(start, len)));
        }
        return nums.size();
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}