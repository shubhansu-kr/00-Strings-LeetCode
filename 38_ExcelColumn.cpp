// https://leetcode.com/problems/excel-sheet-column-title/

// Given an integer columnNumber, return its corresponding column
// title as it appears in an Excel sheet.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string res;
        int i = 0;
        while (columnNumber)
        {
            --columnNumber;
            char temp = 'A' + columnNumber % 26 ;
            res = temp + res ;
            columnNumber /= 26 ;
        }
        return res ;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}