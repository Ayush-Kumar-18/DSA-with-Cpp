// https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/0?qa-rewrite=3336/print-all-valid-combinations-of-ip-address&show=3350&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=maximum-product-subarray

#include<bits/stdc++.h>
using namespace std;

// Function to find maximum product subarray
long long maxProduct(vector<int> arr, int n)
{
    // using Kandane algo...
    if (n == 1)
    {
        return arr[0];
    }
    long long ml = 1, mx = INT_MIN;
    // traversing from 1st
    for (int i = 0; i < n; i++)
    {
        ml *= arr[i];
        mx = max(mx, ml);

        if (ml == 0)
            ml = 1;
    }

    // traversing from last
    ml = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        ml *= arr[i];
        mx = max(mx, ml);

        if (ml == 0)
            ml = 1;
    }

    return mx;
}