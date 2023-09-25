// https://practice.geeksforgeeks.org/problems/check-if-there-exists-a-subsequence-with-sum-k/1

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool funR(int ind, int n, vector<int> &arr, int sum, int k){
        if(sum > k) return false;
        if(ind == n){
            if(sum == k) return true;
            else return false;
        }
        
        sum += arr[ind];
        if( funR(ind+1, n, arr, sum, k) ) return true;
        
        sum -= arr[ind];
        if( funR(ind+1, n, arr, sum, k) ) return true;
        
        return false;
        
    }
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        return funR(0, n, arr, 0, k);
    }
};