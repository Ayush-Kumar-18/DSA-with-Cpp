// https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1

#include <bits/stdc++.h>
using namespace std;

int romanToDecimal(string &s)
{
    int n = s.size();
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'M')
            num += 1000;
        if (s[i] == 'C')
        {
            if (i + 1 < n && s[i + 1] == 'M')
            {
                num += 900;
                i++;
            }
            else if (i + 1 < n && s[i + 1] == 'D')
            {
                num += 400;
                i++;
            }
            else
                num += 100;
        }
        else if (s[i] == 'D')
            num += 500;
        if (s[i] == 'X')
        {
            if (i + 1 < n && s[i + 1] == 'C')
            {
                num += 90;
                i++;
            }
            else if (i + 1 < n && s[i + 1] == 'L')
            {
                num += 40;
                i++;
            }
            else
                num += 10;
        }
        else if (s[i] == 'L')
            num += 50;
        if (s[i] == 'I')
        {
            if (i + 1 < n && s[i + 1] == 'V')
            {
                num += 4;
                i++;
            }
            else if (i + 1 < n && s[i + 1] == 'X')
            {
                num += 9;
                i++;
            }
            else
                num += 1;
        }
        else if (s[i] == 'V')
            num += 5;
    }
    return num;
}