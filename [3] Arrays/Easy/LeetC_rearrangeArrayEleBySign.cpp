// https://leetcode.com/problems/rearrange-array-elements-by-sign/

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> v(n, 0);
    // vector<int> po, ne;

    // using Two Pointer
    int posIndex = 0, negIndex = 1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= 0)
        {
            v[posIndex] = nums[i];
            posIndex += 2;
        }
        if (nums[i] < 0)
        {
            v[negIndex] = nums[i];
            negIndex += 2;
        }
    }

    // for(int i = 0; i<n; i++){
    //     if(nums[i] < 0){
    //         ne.emplace_back(nums[i]);
    //     }
    //     else{
    //         po.emplace_back(nums[i]);
    //     }
    // }

    // int i = 0, j = 0;
    // while( i<po.size() && j<ne.size()){
    //     v.emplace_back(po[i]); i++;
    //     v.emplace_back(ne[j]); j++;
    // }

    for (int i = 0; i < n; i++)
    {
        nums[i] = v[i];
    }

    return nums;
}