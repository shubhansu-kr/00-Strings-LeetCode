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
    // Discussion solution
    bool valid(string &s)
    {
        int hyphen = 0, N = s.size();
        for (int i = 0; i < N; ++i)
        {
            if (isdigit(s[i]))
                return false; // no digit
            if (isalpha(s[i]))
                continue; // skip letters
            if (s[i] == '-')
            {
                if (++hyphen > 1)
                    return false; // at most one hyphen allowed
                if (i - 1 < 0 || !isalpha(s[i - 1]) || i + 1 >= N || !isalpha(s[i + 1]))
                    return false; // hyphen must be surrounded by letters
            }
            else if (i != N - 1)
                return false; // punctuation, if any, must be the last character of token
        }
        return true;
    }

public:
    int countValidWords(string s)
    {
        string w;
        istringstream ss(s);
        int ans = 0;
        while (ss >> w)
            ans += valid(w);
        return ans;
    }
};

class Solution
{
    // Wrong answer
    //" 62   nvtk0wr4f  8 qt3r! w1ph 1l ,e0d 0n 2v 7c.  n06huu2n9 s9
    // ui4 nsr!d7olr  q-, vqdo!btpmtmui.bb83lf g .!v9-lg 2fyoykex uy5a 8v
    // whvu8 .y sc5 -0n4 zo pfgju 5u 4 3x,3!wl  fv4   s  aig cf j1 a i  8m5o1
    // !u n!.1tz87d3 .9    n a3  .xb1p9f  b1i a j8s2 cugf l494cx1! hisceovf3
    // 8d93 sg 4r.f1z9w   4- cb r97jo hln3s h2 o .  8dx08as7l!mcmc isa49afk i1
    // fk,s e !1 ln rt2vhu 4ks4zq c w  o- 6  5!.n8ten0 6mk 2k2y3e335,yj  h p3 5 -0
    // 5g1c  tr49, ,qp9 -v p  7p4v110926wwr h x wklq u zo 16. !8  u63n0c l3 yckifu
    // 1cgz t.i   lh w xa l,jt   hpi ng-gvtk8 9 j u9qfcd!2  kyu42v dmv.cst6i5fo
    // rxhw4wvp2 1 okc8!  z aribcam0  cp-zp,!e x  agj-gb3 !om3934 k vnuo056h g7
    // t-6j! 8w8fncebuj-lq    inzqhw v39,  f e 9. 50 , ru3r  mbuab  6  wz
    // dw79.av2xp . gbmy gc s6pi pra4fo9fwq k   j-ppy -3vpf   o k4hy3 -!..5s
    // ,2 k5 j p38dtd   !i   b!fgj,nx qgif "
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
        sentence.push_back(' ');
        if (sentence[0] == ' ')
        {
            prev = 1;
        }
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