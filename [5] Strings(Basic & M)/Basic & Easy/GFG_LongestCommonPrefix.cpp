// https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1

#include<bits/stdc++.h>
using namespace std;

string commonPrefixUtil(string &str1, string &str2)
{
    string result = "";
    int len = min(str1.length(), str2.length());

    // Compare str1 and str2
    for (int i = 0; i < len; i++)
    {
        if (str1[i] != str2[i])
            break;
        result += str1[i];
    }

    return (result);
}

string longestCommonPrefix(string arr[], int N)
{
    // string ans = "";
    // sort(arr, arr+N);
    // for(int i = 0; i<arr[0].length(); i++){
    //     if(arr[0][i] == arr[N-1][i]){
    //         ans += arr[0][i];
    //     }
    //     else break;
    // }
    // if(ans == "") return "-1";
    // return ans;

    string prefix = arr[0];

    for (int i = 1; i < N; i++)
        prefix = commonPrefixUtil(prefix, arr[i]);

    if (prefix == "")
        return "-1";
    return (prefix);
}