// https://practice.geeksforgeeks.org/problems/maximum-nesting-depth-of-the-parentheses/1

#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s)
{
    int n = s.size();
    int cnt = 0, maxx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            cnt++;
        }
        if (s[i] == ')')
            cnt--;

        maxx = max(maxx, cnt);
    }
    return maxx;
}