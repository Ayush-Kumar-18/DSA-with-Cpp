// https://practice.geeksforgeeks.org/problems/next-permutation5226/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=next-permutation

#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(int n, vector<int> nums)
{

    int i, j;
    for (i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
            break;
    }
    if (i >= 0)
    {
        for (j = n - 1; j > i; j--)
        {
            if (nums[j] > nums[i])
                break;
        }
        swap(nums[i], nums[j]);
    }
    reverse(nums.begin() + i + 1, nums.end());

    return nums;
}