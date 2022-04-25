// https://leetcode.com/problems/robot-return-to-origin/

// There is a robot starting at the position (0, 0), the origin, on a 2D
// plane. Given a sequence of its moves, judge if this robot ends up at (0, 0)
// after it completes its moves.

// You are given a string moves that represents the move sequence of the robot
// where moves[i] represents its ith move. Valid moves are 'R' (right), 'L' (left),
// 'U' (up), and 'D' (down).

// Return true if the robot returns to the origin after it finishes all of its moves,
// or false otherwise.

// Note: The way that the robot is "facing" is irrelevant. 'R' will always
// make the robot move to the right once, 'L' will always make it move left,
// etc. Also, assume that the magnitude of the robot's movement is the same
// for each move.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool judgeCircle(string moves)
    {
        // Using maps
        map<char, int> p;
        for (auto a : moves)
        {
            p[a]++;
        }
        return p['L'] == p['R'] && p['U'] == p['D'];
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}