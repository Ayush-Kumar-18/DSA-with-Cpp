// https://practice.geeksforgeeks.org/problems/smallest-divisor/1

#include<bits/stdc++.h>
using namespace std;

int check(vector<int> &nums, int m)
{
    int su = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % m == 0)
        {
            su += nums[i] / m;
        }
        else
        {
            su += nums[i] / m + 1;
        }
        // cout<<su<<"+";
    }
    return su;
}
int smallestDivisor(vector<int> &nums, int K)
{

    int mx = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        mx = max(nums[i], mx);
    }

    int s = 1;
    int e = mx;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        // cout<<check(nums, mid)<<"-- ";
        if (check(nums, mid) <= K)
        {
            // cout<<mid<<"-- ";
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}