// https://leetcode.com/problems/implement-stack-using-queues/

#include<bits/stdc++.h>
using namespace std;

class MyStack {
    queue<int> q1;
    queue<int> q2;
public:
    MyStack() {   
        queue<int> q1;
        queue<int> q2;
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.swap(q2);
    }
    
    int pop() {
        int res = -1;
        if(!q1.empty()){
            res = q1.front();
            q1.pop();
        }
        return res;
    }
    
    int top() {
        int res = -1;
        if(!q1.empty()){
            res = q1.front();
        }
        return res;
    }
    
    bool empty() {
        if(!q1.empty()){
            return false;
        }
        else{
            return true;
        }
    }
};
