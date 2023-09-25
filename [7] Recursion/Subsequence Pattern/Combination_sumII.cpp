// https://leetcode.com/problems/combination-sum-ii/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int ind, vector<int> &arr, int target, vector<int> &ds, vector<vector<int>> &ans){
        if(target == 0){
            ans.push_back(ds);
            return;
        }

        for(int i = ind; i<arr.size(); i++){
            if(i > ind && arr[i] == arr[i-1]) continue;

            if(arr[i] > target) break;
            ds.push_back(arr[i]);
            solve(i+1, arr, target - arr[i], ds, ans);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(), candidates.end());

        solve(0, candidates, target, ds, ans);
        return ans;
    }
};