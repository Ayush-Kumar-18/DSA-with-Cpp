// https://leetcode.com/problems/combination-sum-iii/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void fun(int ind, int k, int n, vector<int> &ds, vector<vector<int>>& ans){
        if(ds.size() > k) return;
        if(ds.size() == k){
            if(n == 0)
                ans.push_back(ds);
            return;
        }

        for(int i = ind; i<=9; i++){
            ds.push_back(i);
            fun(i+1, k, n-i, ds, ans);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;

        fun(1, k, n, ds, ans);
        return ans;
    }
};