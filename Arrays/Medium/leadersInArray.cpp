// https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=leaders-in-an-array

#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(int a[], int n)
{
    // Optimal --O(n)
    vector<int> r;
    int max = a[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] >= max)
        {
            r.emplace_back(a[i]);
            max = a[i];
        }
    }
    reverse(r.begin(), r.end());
    return r;

    // Brute --O(n^2) --TLE
    // vector<int> r;
    // for(int i = 0; i<n; i++){
    //     int t = a[i];
    //     bool chk = true;
    //     for(int j = i+1; j<n; j++){
    //         if(a[j] > t){
    //             chk = false;
    //             break;
    //         }
    //     }
    //     if(chk)  r.emplace_back(t);
    // }
    // return r;
}