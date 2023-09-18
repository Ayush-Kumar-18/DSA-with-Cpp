// https://practice.geeksforgeeks.org/problems/reverse-a-stack/1

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void insert(stack<int> &st, int val){
        if(st.empty()){
            st.push(val);
            return;
        }
        int t = st.top();
        st.pop();
        insert(st, val);
        st.push(t);
        return;
    }

    void Reverse(stack<int> &st){
        // recursion
        if(st.size() == 1) return ;
        
        int val = st.top();
        st.pop();
        
        Reverse(st);
        insert(st, val);
        
        return;
        
        
        // brute - iterative O(n)-space
        // stack<int> s;
        // while(!st.empty()){
        //     s.push(st.top());
        //     st.pop();
        // }
        // swap(s, st);
    }
};