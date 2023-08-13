// https://leetcode.com/problems/remove-k-digits/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        string res;
        stack<int> st;

        st.push(num[0]);
        for(int i = 1; i<num.size(); i++){
            while(k > 0 && !st.empty() && st.top() > num[i]){
                k--;
                st.pop();
            }
            st.push(num[i]);

            if(st.size() == 1 && num[i] == '0') st.pop();
        }

        while(k > 0 && !st.empty()){
            k--;
            st.pop();
        }

        while(!st.empty()){
            res += st.top();
            st.pop();
        }

        reverse(res.begin(), res.end());

        if(res.size() == 0) return "0";

        return res;
    }
};