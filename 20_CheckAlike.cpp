// https://leetcode.com/problems/determine-if-string-halves-are-alike/

// You are given a string s of even length. Split this string
// into two halves of equal lengths, and let a be the first half
// and b be the second half.

// Two strings are alike if they have the same number of vowels
// ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice
// that s contains uppercase and lowercase letters.

// Return true if a and b are alike. Otherwise, return false.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isVovel(char c)
    {
        return (c == 'a' || c == 'u' || c == 'o' || c == 'i' ||
                c == 'e' || c == 'A' || c == 'O' || c == 'I' || c == 'E' ||
                c == 'U');
    }
    bool halvesAreAlike(string s)
    {
        int n = s.length() / 2;
        int counti = 0, countj = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (isVovel(s[i]))
            {
                if (i < n)
                {
                    counti++;
                }
                else
                {
                    countj++;
                }
            }
        }
        return counti == countj;
    }
};

class Solution
{
public:
    bool isVovel(char c)
    {
        return (c == 'a' || c == 'u' || c == 'o' || c == 'i' ||
                c == 'e' || c == 'A' || c == 'O' || c == 'I' || c == 'E' ||
                c == 'U');
    }
    bool halvesAreAlike(string s)
    {
        int n = s.length() / 2;
        return count_if(s.begin(), s.begin() + n, isVovel) == count_if(s.begin() + n, s.end(), isVovel);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}