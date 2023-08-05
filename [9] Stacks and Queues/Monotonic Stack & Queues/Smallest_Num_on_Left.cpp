// https://practice.geeksforgeeks.org/problems/smallest-number-on-left3403/0

#include<bits/stdc++.h>
using namespace std;

vector<int> leftSmaller(int n, int a[]){
    // code here
    vector<int> v;
    stack<int> st;
    for(int i = 0; i<n; i++){
        while(!st.empty() && a[i] <= st.top()) st.pop();
        
        if(st.empty()) v.push_back(-1);
        else{
            v.push_back(st.top());
        }
        st.push(a[i]);
    }
    
    return v;
}