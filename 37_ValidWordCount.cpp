// https://leetcode.com/problems/number-of-valid-words-in-a-sentence/

// A sentence consists of lowercase letters ('a' to 'z'), digits
// ('0' to '9'), hyphens ('-'), punctuation marks ('!', '.', and ','),
// and spaces (' ') only. Each sentence can be broken down into one or
// more tokens separated by one or more spaces ' '.

// A token is a valid word if all three of the following are true:

// It only contains lowercase letters, hyphens, and/or punctuation (no digits).
// There is at most one hyphen '-'. If present, it must be surrounded by
// lowercase characters ("a-b" is valid, but "-ab" and "ab-" are not valid).
// There is at most one punctuation mark. If present, it must be at the end
// of the token ("ab,", "cd!", and "." are valid, but "a!b" and "c.," are
// not valid).
// Examples of valid words include "a-b.", "afad", "ba-c", "a!", and "!".
// Given a string sentence, return the number of valid words in sentence.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkToken(string s)
    {
        int hyphen = 0;
        for (int i = 0; i < s.length(); i++)
        {
            // Check for digit - No digit are allowed :
            if (s[i] > 47 && s[i] < 58)
            {
                return false;
            }
            // Hyphen check :
            else if (s[i] == '-')
            {
                if (hyphen || i == s.length() - 1 || i == 0)
                {
                    return false;
                }
                hyphen = 1;
                if ((s[i - 1] < 97 || s[i - 1] > 122) && (s[i + 1] < 97 || s[i + 1] > 122))
                {
                    return false;
                }
            }
            else if (s[i] == '.' || s[i] == ',' || s[i] == '!')
            {
                // , . !
                if (i != s.length() - 1)
                {
                    return false;
                }
            }
        }
        return true;
    }

    int countValidWords(string sentence)
    {
        int prev = 0; // IF previous was a space or not
        int front = 0, len = 0;
        int count = 0;
        
        for (int i = 0; i < sentence.length(); ++i)
        {
            if (sentence[i] == ' ')
            {
                if (prev)
                {
                    front = i + 1;
                    continue;
                }
                else
                {
                    if (checkToken(sentence.substr(front, len)))
                    {
                        ++count;
                    }
                    front = i + 1;
                    len = 0;
                }
                prev = 1;
            }
            else
            {
                ++len;
                prev = 0;
            }
        }
        return count;
    }
};
class Solution
{
    // Wrong Solution :
    // "!g 3 !sy " - Expected 0 || Output 1
    // Since the senctence is ending with trailing spaces
public:
    bool checkToken(string s)
    {
        int hyphen = 0;
        for (int i = 0; i < s.length(); i++)
        {
            // Check for digit - No digit are allowed :
            if (s[i] > 47 && s[i] < 58)
            {
                return false;
            }
            // Hyphen check :
            else if (s[i] == '-')
            {
                if (hyphen || i == s.length() - 1 || i == 0)
                {
                    return false;
                }
                hyphen = 1;
                if ((s[i - 1] < 97 || s[i - 1] > 122) && (s[i + 1] < 97 || s[i + 1] > 122))
                {
                    return false;
                }
            }
            else if (s[i] == '.' || s[i] == ',' || s[i] == '!')
            {
                // , . !
                if (i != s.length() - 1)
                {
                    return false;
                }
            }
        }
        return true;
    }

    int countValidWords(string sentence)
    {
        int prev = 0; // IF previous was a space or not
        int front = 0, len = 0;
        int count = 0;
        for (int i = 0; i < sentence.length(); ++i)
        {
            if (sentence[i] == ' ')
            {
                if (prev)
                {
                    front = i + 1;
                    continue;
                }
                else
                {
                    if (checkToken(sentence.substr(front, len)))
                    {
                        ++count;
                    }
                    front = i + 1;
                    len = 0;
                }
                prev = 1;
            }
            else
            {
                ++len;
                prev = 0;
            }
        }
        if (checkToken(sentence.substr(front, len)))
        {
            ++count;
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