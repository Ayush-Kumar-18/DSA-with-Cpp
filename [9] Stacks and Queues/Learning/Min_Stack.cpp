// https://leetcode.com/problems/min-stack/

#include<bits/stdc++.h>
using namespace std;

// 2nd Approach -- O(N)-Space
class MinStack {
    stack<long long> st;
    long long mini;
public:
    MinStack() {
        while (st.empty() == false) st.pop();
        mini = INT_MAX;
    }
    
    void push(int value) {
        long long val = value;
        if(st.empty()){
            st.push(val);
            mini = val;
        }
        else{
            if(val < mini){
                st.push(2 * val - mini);
                mini = val;
            }
            else{
                st.push(val);
            }
        }
    }
    
    void pop() {
        if(st.top() < mini){
            mini = 2*mini - st.top();
            st.pop();
        }
        else{
            st.pop();
        }
    }
    
    int top() {
        if(st.top() < mini){
            return mini;
        }
        else{
            return st.top();
        }
    }
    
    int getMin() {
        return mini;
    }
};

// 1st Approach -- O(2N)-Space
// class MinStack {
//     stack< pair<int, int> > st;
// public:
//     MinStack() {
//         stack< pair<int, int> > st;
//     }
    
//     void push(int val) {
//         int mn = INT_MAX;
//         if(st.empty()){
//             mn = val;
//         }
//         else{
//             mn = min(st.top().second ,  val);
//         }
//         st.push({val, mn});
//     }
    
//     void pop() {
//         st.pop();
//     }
    
//     int top() {
//         return st.top().first;
//     }
    
//     int getMin() {
//         return st.top().second;
//     }
// };