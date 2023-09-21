// https://leetcode.com/problems/generate-parentheses/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void funR(int open, int closed, string s, vector<string> &v){
        if(open == 0 && closed == 0){
            v.push_back(s);
            return;
        }
        if(open != 0){
            string s1 = s;
            s1 += '(';
            funR(open-1, closed, s1, v);
        }
        if(closed > open) {
            string s2 = s;
            s2 += ')';
            funR(open, closed-1, s2, v);
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        string s = "";
        vector<string> v;
        int open = n, closed = n;
        funR(open, closed, s, v);

        return v;
    }
};