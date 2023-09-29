// https://leetcode.com/problems/subsets-ii/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void fun(int ind, vector<int> nums, vector<int>& ds, vector<vector<int>>& v){
        v.push_back(ds);

        for(int i = ind; i<nums.size(); i++){
            if(i > ind && nums[i] == nums[i-1]) continue;

            ds.push_back(nums[i]);
            fun(i + 1, nums, ds, v);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> ds;
        sort(nums.begin(), nums.end());
        fun(0, nums, ds, v);
        return v;
    }
};