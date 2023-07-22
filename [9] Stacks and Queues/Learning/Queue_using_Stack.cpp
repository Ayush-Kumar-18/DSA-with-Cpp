// https://leetcode.com/problems/implement-queue-using-stacks/

#include<bits/stdc++.h>
using namespace std;

class MyQueue {
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
        stack<int> s1;
        stack<int> s2;
    }
    
    void push(int x) {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int res = s1.top();
        s1.pop();
        return res;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        if(s1.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};