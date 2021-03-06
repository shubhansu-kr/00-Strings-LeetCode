// https://leetcode.com/problems/destination-city/

// You are given the array paths, where paths[i] = [cityAi, cityBi]
// means there exists a direct path going from cityAi to cityBi.
// Return the destination city, that is, the city without any path
// outgoing to another city.

// It is guaranteed that the graph of paths forms a line without
// any loop, therefore, there will be exactly one destination city.

#include <bits/stdc++.h>
using namespace std;

class Solution2
{
public:
    string destCity(vector<vector<string>> &paths)
    {
        string des;
        for (int i = 0; i < paths.size(); i++)
        {
            int t = 0; // 0: w/o outlet; 1: w output
            string &tmp = paths[i][1];
            for (int j = 0; j < paths.size(); j++)
                if (paths[j][0] == tmp)
                {
                    t = 1;
                    break;
                }
            if (t == 0)
            {
                des = tmp;
                break;
            }
        }
        return des;
    }
};

class Solution1
{
public:
    string destCity(vector<vector<string>> &paths)
    {
        set<string> p;
        for (auto it : paths)
        {
            p.insert(it[0]);
        }
        for (auto it : paths)
        {
            if (!p.count(it[1]))
            {
                return it[1];
            }
        }
        return "Happy Coding";
    }
};

class Solution
{
public:
    string destCity(vector<vector<string>> &paths)
    {
        // Both Destionation and Start will have a frequency 1.
        map<string, int> p;
        for (auto it : paths)
        {
            ++p[it[0]];
            p[it[1]] += 2;
        }
        for (auto it : p)
        {
            if (it.second == 2)
            {
                return it.first;
            }
        }
        return "Happy Coding";
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}