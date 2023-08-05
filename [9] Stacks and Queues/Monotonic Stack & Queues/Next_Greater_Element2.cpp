// https://leetcode.com/problems/next-greater-element-ii/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> v;
        int n = nums.size();
        for(int i = 2*n-1; i>=0; i--){
            while(!st.empty() && st.top() <= nums[i%n]) st.pop();
            
            if(i < n){
                if(st.empty()){
                    v.push_back(-1);
                } else {
                    v.push_back(st.top());
                }
            }
            st.push(nums[i % n]);
        }

        reverse(v.begin(), v.end());

        return v;
    }
};