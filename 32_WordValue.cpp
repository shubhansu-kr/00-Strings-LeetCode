// https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord)
    {
        int first = 0, second = 0, target = 0;
        for (int i = 0; i < firstWord.length(); i++)
        {
            first = first * 10 + (firstWord[i] - 97);
        }
        for (int i = 0; i < secondWord.length(); i++)
        {
            second = second * 10 + (secondWord[i] - 97);
        }
        for (int i = 0; i < targetWord.length(); i++)
        {
            target = target * 10 + (targetWord[i] - 97);
        }
        return (first + second == target);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}