// https://leetcode.com/problems/single-number/

#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int n = nums.size();

    // using XOR ->O(n)
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= nums[i];
    }
    return ans;
}