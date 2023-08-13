// https://leetcode.com/problems/sum-of-subarray-minimums/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        // using Stack
        int n = arr.size();
        stack<pair<int, int>> left_st, right_st;
        vector<int> l(n), r(n);

        for(int i = 0; i<n; i++){
            int cnt = 1;
            while(!left_st.empty() && left_st.top().first > arr[i]){
                cnt += left_st.top().second;
                left_st.pop();
            } 
            l[i]=cnt;
            left_st.push({arr[i], cnt});
        } 
        
        for(int i = n-1; i>=0; i--){
            int cnt = 1;
            while(!right_st.empty() && right_st.top().first >= arr[i]){
                cnt += right_st.top().second;
                right_st.pop();
            }
            r[i] = cnt;
            right_st.push({arr[i], cnt});
        } 

        int sum = 0;
        int m = pow(10, 9) +7;
        for(int i = 0; i<n; i++){
            // cout<<r[i];
            long long s = (l[i]*arr[i])%m;
            sum += ((s* r[i]) % m);
            sum %= m;
        }

        return sum % m;

        // Brute -- O(n^2)
        // long sum =  0;
        // int n = arr.size();

        // for(int i = 0; i<n; i++){
        //     int mini = arr[i];
        //     for(int j = i; j<n; j++){
        //         mini = min(arr[j], mini);
        //         sum += mini;
        //     }
        // }
        // if(sum > 1000000007) sum %= 1000000007;
        // return (int)sum;
    }
};