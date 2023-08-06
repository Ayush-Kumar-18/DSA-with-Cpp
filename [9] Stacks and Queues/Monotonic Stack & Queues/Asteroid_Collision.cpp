// https://leetcode.com/problems/asteroid-collision/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i : asteroids){
            if( i > 0 || st.empty()) st.push(i);
            else{
                while(!st.empty() && st.top() > 0 && st.top() < abs(i)){
                    st.pop();
                }
                if(!st.empty() && st.top() == abs(i)) st.pop();
                else{
                    if(st.empty() || st.top() < 0) st.push(i); 
                }
            }
        }
        
        int n = st.size();
        vector<int> v(n);
        for(int i = n-1; i>=0; i--){
            v[i] = st.top();
            st.pop();
        }
        
        return v;
    }
};