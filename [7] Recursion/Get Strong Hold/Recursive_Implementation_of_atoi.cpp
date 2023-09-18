// https://leetcode.com/problems/string-to-integer-atoi/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int ind, string s, long res, int sign){
        if(res*sign >= INT_MAX) return INT_MAX;
        if(res*sign <= INT_MIN) return INT_MIN;

        if(ind == s.size() || s[ind] < '0' || s[ind] > '9') return res*sign;

        res = res*10 + (s[ind]-'0');      
        return solve(ind+1, s, res, sign);
    }

    int myAtoi(string s) {
        // Recursive
        int i = 0, sign = 1;
        while(i<s.size() && s[i] == ' ') i++;

        if(s[i] == '+'){
            sign = 1;
            i++;
        } 
        else if(s[i] == '-'){
            sign = -1;
            i++;
        }

        return solve(i, s, 0, sign);

        // iterative
        // int len = s.size();
        // double num = 0;
        // int i=0;
        // // removing whitespaces
        // while(s[i] == ' '){
        //     i++;
        // }
        // bool positive = s[i] == '+';
        // bool negative = s[i] == '-';
        // positive == true ? i++ : i;
        // negative == true ? i++ : i;
        // while(i < len && s[i] >= '0' && s[i] <= '9'){
        //     num = num*10 + (s[i]-'0');
        //     i++;
        // }
        // num = negative ? -num : num;
        // cout<<num<<endl;
        // num = (num > INT_MAX) ? INT_MAX : num;
        // num = (num < INT_MIN) ? INT_MIN : num;
        // cout<<num<<endl;
        // return int(num);
    }
};