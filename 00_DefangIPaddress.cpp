// https://leetcode.com/problems/defanging-an-ip-address/

// Given a valid (IPv4) IP address, return a defanged version
// of that IP address.

// A defanged IP address replaces every period "." with "[.]"

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    // Replace the dot with [.] 
public:
    string defangIPaddr(string address)
    {
        string defanged = "[.]";
        for (int i = 0; i < address.length(); i++)
        {
            if (address[i] == 46)
            {
                address.erase(i, 1);
                address.insert(i, defanged);
                i += 2;
            }
        }
        return address;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}