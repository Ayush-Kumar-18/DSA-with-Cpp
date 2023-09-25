// https://leetcode.com/problems/subsets/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void subseq(int ind, vector<int> &ds, vector<vector<int>> &v, vector<int> nums, int n){
        if(ind == n){
            v.push_back(ds);
            return;
        }

        ds.push_back(nums[ind]);
        subseq(ind+1, ds, v, nums, n);
        ds.pop_back();
        
        subseq(ind+1, ds, v, nums, n);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> v;
        vector<int> ds;
        int n = nums.size();
        subseq(0, ds, v, nums, n);

        return v;
    }
};