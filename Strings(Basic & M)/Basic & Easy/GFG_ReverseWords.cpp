// https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
#include<bits/stdc++.h>
using namespace std;

string reverseWords(string S)
{
    string ans;

    string tmp;
    for (int i = S.length() - 1; i >= 0; i--)
    {
        if (S[i] == '.')
        {
            // cout<<tmp<<">>";
            for (int j = tmp.length(); j >= 0; j--)
            {
                ans += tmp[j];
            }
            ans += '.';
            tmp = "";
        }
        else
        {
            tmp += S[i];
        }
        // for the last word
        if (i == 0)
        {
            for (int j = tmp.length(); j >= 0; j--)
            {
                ans += tmp[j];
            }
        }
    }
    return ans;
}