// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void fun(int ind, string digits, string& s, vector<string>& ans, map<char, string> mpp){
        if(ind == digits.size()){
            ans.push_back(s);
            return;
        }
        string val = mpp[digits[ind]];
        for(auto i : val){
            s.push_back(i);
            fun(ind+1, digits, s, ans, mpp);
            s.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return {};
        map<char, string> mpp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"},
        };
        string s;
        vector<string> ans;

        fun(0, digits, s, ans, mpp);

        return ans;
    }
};