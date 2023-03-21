// https://practice.geeksforgeeks.org/problems/outermost-parentheses/1
#include<bits/stdc++.h>
using namespace std;

string removeOuter(string &s)
{
    string str = "";
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            if (cnt != 0)
            {
                str += '(';
            }
            cnt++;
        }
        else
        {
            cnt--;
            if (cnt != 0)
            {
                str += ')';
            }
        }
    }
    return str;
}