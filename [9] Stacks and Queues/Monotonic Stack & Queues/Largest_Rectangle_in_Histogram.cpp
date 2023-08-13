// https://leetcode.com/problems/largest-rectangle-in-histogram/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // Using Stack
        int n = heights.size();
        stack<int> st;
        vector<int> leftS(n), rightS(n);

        for(int i = 0; i<n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(st.empty()) leftS[i] = 0;
            else leftS[i] = st.top()+1;

            st.push(i);
        }
        while(!st.empty()) st.pop();

        for(int i = n-1; i>=0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(st.empty()) rightS[i] = n-1;
            else rightS[i] = st.top()-1;

            st.push(i);
        }
        int maxA = INT_MIN;
        for(int i = 0; i<n; i++){
            int a = (rightS[i]-leftS[i]+1)*heights[i];
            maxA = max(a, maxA);
        }
        return maxA;
        
        // brute --TLE
        // int maxA = INT_MIN;
        // int n = heights.size();
        // for(int i = 0; i<n; i++){
        //     int leftS = 0, rightS = n-1;
        //     for(int j = i+1; j<n; j++) {
        //         if(heights[j] < heights[i]){
        //             rightS = j-1;
        //             break;
        //         } 
        //     }
        //     for(int j = i-1; j>=0; j--) {
        //         if(heights[j] < heights[i]){
        //             leftS = j+1;
        //             break;
        //         } 
        //     }

        //     int a = (rightS-leftS+1)*heights[i];
        //     maxA = max(maxA, a);
        //     // cout<<leftS<<","<<rightS<<"="<<maxA<<endl;
        // }
        // return maxA;
    }
};