// https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/0

#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {
    vector<long long> ans;
    list<long long> l;
    
    int i = 0, j = 0;
    while(j < N){
        if(A[j] < 0) l.push_back(A[j]);
        
        if( j-i+1 < K) j++;
        else if( j-i+1 == K){
            if(l.empty()){
                ans.push_back(0);
            }
            else{
                ans.push_back(l.front());
                
                if(l.front() == A[i]){
                    l.pop_front();
                }
            }
            i++; j++;
        }
    }
    
    return ans;
 }