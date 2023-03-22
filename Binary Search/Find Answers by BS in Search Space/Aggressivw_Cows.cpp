// https://practice.geeksforgeeks.org/problems/aggressive-cows/1

#include<bits/stdc++.h>
using namespace std;

bool canPlaceCows(vector<int> &stalls, int n, int mid, int k)
{
    int cnt = 1;
    int coordinate = stalls[0];
    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - coordinate >= mid)
        {
            cnt++;
            coordinate = stalls[i];
        }
        if (cnt == k)
            return true;
    }
    return false;
}
int solve(int n, int k, vector<int> &stalls)
{
    sort(stalls.begin(), stalls.end());
    int lo = 1;
    int hi = stalls[n - 1] - stalls[0];
    int ans = INT_MIN;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (canPlaceCows(stalls, n, mid, k))
        {
            ans = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return ans;
}