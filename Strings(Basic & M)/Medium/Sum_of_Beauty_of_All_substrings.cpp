// https://practice.geeksforgeeks.org/problems/sum-of-beauty-of-all-substrings-1662962118/1

#include <bits/stdc++.h>
using namespace std;

int beauty(vector<int> &v)
{
    int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < 26; i++)
    {
        if (v[i] == 0)
            continue;
        mx = max(v[i], mx);
        mn = min(v[i], mn);
    }
    return mx - mn;
}
int beautySum(string s)
{
    long long int ans = 0;
    int n = s.size();
    // 	generating all substring and checking (without map)
    for (int i = 0; i < n; i++)
    {
        vector<int> v(26, 0);
        for (int j = i; j < n; j++)
        {
            v[s[j] - 'a']++;
            ans += beauty(v);
        }
    }
    return ans;
}