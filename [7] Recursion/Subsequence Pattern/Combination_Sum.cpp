// https://leetcode.com/problems/combination-sum/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int ind, int target, int n, vector<int> &arr, vector<int> &ds, vector<vector<int>> &v){
        if(ind == n){
            if(target == 0){
                v.push_back(ds);
            }
            return;
        }
        
        if(arr[ind] <= target){
            ds.push_back(arr[ind]);
            solve(ind, target - arr[ind], n, arr, ds, v); // pick
            ds.pop_back();
        }

        solve(ind+1, target, n, arr, ds, v); // not-pick
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> v;
        vector<int> ds;
        
        solve(0, target, n, candidates, ds, v);

        return v;
    }
};