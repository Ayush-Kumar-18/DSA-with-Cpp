// https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1

#include<bits/stdc++.h>
using namespace std;

bool areRotations(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    s1 += s1;
    int n = s2.size();
    for (int i = 0; i < n; i++)
    {
        if (s1.substr(i, n) == s2)
        {
            return true;
        }
    }
    return false;

    // for(int i = 0; i<s1.size(); i++){
    //     if(s1[i] == s2[0]){
    //         string ar = "";
    //         ar = s1.substr(i, s1.size()) + s1.substr(0, i);
    //         if(ar == s2) return true;
    //     }
    // }
    // return false;
}