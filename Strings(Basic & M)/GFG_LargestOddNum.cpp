// https://practice.geeksforgeeks.org/problems/largest-odd-number-in-string/1

#include<bits/stdc++.h>
using namespace std;

string maxOdd(string s)
{
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] % 2 == 1)
            return s.substr(0, i + 1);
    }
    return "";

    // naive
    // string ans="";
    // int ind = 0;
    // for(int i =0 ;i<s.size(); i++){
    //     if(s[i] & 1){
    //         ind = i+1;
    //     }
    // }

    // for(int i = 0; i<ind; i++){
    //     ans += s[i];
    // }
    // return ans;
}