// https://leetcode.com/problems/trapping-rain-water/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        // Best:: Two pointer; O(n)-Space
        int res = 0, n = height.size();
        int l = 0, r = n-1, leftmax = 0, rightmax = 0;
        while(l <= r){
            if(height[l] <= height[r]){
                if(height[l] >= leftmax) leftmax = height[l];
                else res +=  leftmax - height[l];
                l++;
            }
            else {
                if(height[r] >= rightmax) rightmax = height[r];
                else res += rightmax - height[r];
                r--;
            }
        }
        return res;


        // Better:: O(2n)-Space; O(n)-Time
        // int res = 0, n = height.size();
        // vector<int> pre(n, 0), suf(n,0);
        // pre[0] = height[0], suf[n-1] = height[n-1];
        // for(int i = 1; i < n; i++){
        //     pre[i] = max(pre[i-1], height[i]);
        // }
        // for(int i = n-2; i >= 0; i--){
        //     suf[i] = max(suf[i+1], height[i]);
        // }

        // for(int i = 0; i<n; i++){
        //     res += min(pre[i], suf[i]) - height[i];
        // }

        // return res;
    }
};