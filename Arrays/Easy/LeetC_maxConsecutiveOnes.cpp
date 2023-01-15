// https://leetcode.com/problems/max-consecutive-ones/

#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int cnt = 0;
    int maxx = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }

        if (cnt > maxx)
        {
            maxx = cnt;
        }
    }

    return maxx;
}