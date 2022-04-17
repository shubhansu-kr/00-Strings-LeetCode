// https://leetcode.com/problems/goal-parser-interpretation/

// You own a Goal Parser that can interpret a string command. The command
// consists of an alphabet of "G", "()" and/or "(al)" in some order. The
// Goal Parser will interpret "G" as the string "G", "()" as the string "o",
// and "(al)" as the string "al". The interpreted strings are then concatenated
// in the original order.

// Given the string command, return the Goal Parser's interpretation of command.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string interpret(string command)
    {
        string ans;
        for (int i = 0; i < command.length(); i++)
        {
            if (command[i] == 'G')
            {
                ans.append("G");
            }
            else
            {
                if (command[i + 1] == ')')
                {
                    ans.append("o");
                    i++;
                }
                else
                {
                    ans.append("al");
                    i += 3;
                }
            }
        }
        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}