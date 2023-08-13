// https://leetcode.com/problems/sliding-window-maximum/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // Optimal (using deque)
        vector<int> ans;
        deque<int> dq;

        for(int i = 0; i<nums.size(); i++){
            if(!dq.empty() && dq.front() == i-k) dq.pop_front();

            while(!dq.empty() && nums[i] > nums[dq.back()]) dq.pop_back();

            dq.push_back(i);
            if(i >= k-1) ans.push_back(nums[dq.front()]);
        }

        return ans;

        // Brute 
        // vector<int> ans;
        // int n = nums.size();

        // int i = 0;
        // while(i+k-1 <= n){
        //     int maxx = INT_MIN;
        //     for(int j = 0; j<k; j++){
        //         maxx = max(maxx, nums[j]);
        //     }
        //     ans.push_back(maxx);
        // }

        // return ans;
    }
};