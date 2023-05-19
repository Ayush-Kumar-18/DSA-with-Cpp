// https://leetcode.com/problems/two-sum/

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans;

    // using hashing , Avg_Time--O(n) , Space--O(n)
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        if (m.find(target - nums[i]) != m.end())
        {
            ans.emplace_back(m[target - nums[i]]);
            ans.emplace_back(i);
        }
        m[nums[i]] = i;
    }

    return ans;

    //  Time -- O(n^2)
    // for(int i = 0; i<n; i++){
    //     int t = target-nums[i];
    //     for(int j = i+1; j<n; j++){
    //         if(nums[j] == t){
    //             ans.emplace_back(i);
    //             ans.emplace_back(j);
    //         }
    //     }
    // }

    return ans;
}