// https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/0

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &arr , int N){
        long mx = INT_MIN, sum = 0;
        int i = 0, j = 0;
        while( j < N){
            sum += arr[j];
            if(j-i+1 < K)  j++;
            
            else if(j-i+1 == K){
                mx = max(mx, sum);
                sum -= arr[i];
                i++;
                j++;
            }
        }
        
        return mx;
    }
};