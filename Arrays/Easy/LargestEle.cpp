// https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array

#include<bits/stdc++.h>
using namespace std;

// Recursive
int solve(vector<int> &arr, int i, int n)
{
    if (i == n)
        return INT_MIN;

    int a = arr[i];
    int m = solve(arr, i + 1, n);
    return max(a, m);
}

int largest(vector<int> &arr, int n)
{
    solve(arr, 0, n);
    // int max = INT_MIN;
    // for(int i = 0; i<n; i++){
    //     if(arr[i] > max)
    //         max = arr[i];
    // }

    // return max;
}