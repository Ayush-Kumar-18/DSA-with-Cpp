// https://leetcode.com/problems/maximum-subarray/https://leetcode.com/problems/maximum-subarray/

#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{

    // kadane's Algo --O(n)
    int maxx = INT_MIN;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        maxx = max(maxx, sum);

        if (sum < 0)
            sum = 0;
    }
    return maxx;
}