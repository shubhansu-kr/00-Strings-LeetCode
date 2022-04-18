// https://leetcode.com/problems/sorting-the-sentence/

// A sentence is a list of words that are separated by a single
// space with no leading or trailing spaces. Each word consists
// of lowercase and uppercase English letters.

// A sentence can be shuffled by appending the 1-indexed word
// position to each word then rearranging the words in the sentence.

// For example, the sentence "This is a sentence" can be shuffled
// as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
// Given a shuffled sentence s containing no more than 9 words,
// reconstruct and return the original sentence

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string sortSentence(string s)
    {
        // Lets try using map int -> string
        map<int, string> p;
        int pos = 0, count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 48 && s[i] <= 56)
            {
                p[s[i]] = s.substr(pos, count);
            }
            else if (s[i] == 32)
            {
                count = 0;
                pos = i + 1;
            }
            else
            {
                count++;
            }
        }
        s = "";
        for (auto a : p)
        {
            s += a.second;
            s.push_back(' ');
        }
        s.pop_back();
        return s;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}