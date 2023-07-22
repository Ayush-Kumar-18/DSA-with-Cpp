// https://leetcode.com/problems/valid-parentheses/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        int len = s.size();
        for(auto i: s){
            if(i == '(' || i == '[' || i == '{'){
                st.push(i);
            }
            else{
                if(st.empty() || (i == ')' && st.top() != '(') || (i == ']' && st.top() != '[') || (i == '}' && st.top() != '{')){
                    return false;
                }else{
                    st.pop();
                }
            }

        }
        return st.empty();
    }
};

