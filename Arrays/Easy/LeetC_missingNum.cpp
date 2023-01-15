// https://leetcode.com/problems/missing-number/

#include<bits/stdc++.h>
using namespace std;

int mNum(vector<int> &nums)
{
    // Bitwise : xor solution
    int temp = 0;
    int N = nums.size() + 1;
    for (int i = 0; i < N - 1; i++)
    {
        temp ^= nums[i];
    }

    for (int i = 0; i < N; i++)
    {
        temp = temp ^ i;
    }
    return temp;
}
int missingNumber(vector<int> &nums)
{
    return mNum(nums);
}