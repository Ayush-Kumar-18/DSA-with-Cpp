// https://leetcode.com/problems/move-zeroes/

#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{

    int n = nums.size();
    int k = 0;
    // finding first occurance of zero
    while (k < n)
    {
        if (nums[k] == 0)
            break;
        else
            k++;
    }
    // check if the next element != 0; then swap and i++ ;increase j++
    int i = k, j = k + 1;
    while (i < n && j < n)
    {
        if (nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
        j++;
    }
}