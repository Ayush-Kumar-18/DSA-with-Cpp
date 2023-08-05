// https://www.codingninjas.com/studio/problems/count-of-greater-elements-to-the-right_8365436

#include<bits/stdc++.h>
using namespace std;

vector<int> countGreater(vector<int>&arr, vector<int>&query) {
    // 3rd approach -- using stack
    vector<int> r;
    for(int i : query){
        stack<int> st;
        int n = arr.size()-1;
        while(n != i){
            if(arr[n] > arr[i]) st.push(arr[n]);
            n--;
        }
        r.push_back(st.size());
    }
    return r;
    
    // 2nd Approach
    // vector<int> r;
    // for(auto i : query){
    //     int cnt = 0;
    //     for(int j = i+1; j<arr.size(); j++){
    //         if(arr[j] > arr[i]) cnt++;
    //     }
    //     r.push_back(cnt);
    // }
    // return r;
    
    
    // 1st Approach-- Brute
    // vector<int> v, r;
    // for(int i = 0; i<arr.size(); i++){
    //     int cnt = 0;
    //     for(int j = i+1; j<arr.size(); j++){
    //         if(arr[j] > arr[i]) cnt++;
    //     }
    //     v.push_back(cnt);
    // }

    // for(int i: query){
    //     r.push_back(v[i]);
    // }
    // return r;
}