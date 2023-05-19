// https://leetcode.com/problems/valid-palindrome/description/

#include<bits/stdc++.h>
using namespace std;

void removeSpecialCharacter(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] < '0' || s[i] > '9') &&
                s[i] < 'A' ||
            s[i] > 'Z' &&
                s[i] < 'a' ||
            s[i] > 'z')
        {
            // erase function to erase
            s.erase(i, 1);
            i--;
        }
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    // cout << s << " ";
}

bool check(int i, int N, string &st)
{
    if (i >= N / 2)
        return true;

    if (st[i] != st[N - i - 1])
        return false;
    return check(i + 1, N, st);
}

bool isPalindrome(string s)
{
    removeSpecialCharacter(s);
    return check(0, s.size(), s);
}