// https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?track=DSASP-Searching&amp%3BbatchId=154&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-a-sorted-array

#include<bits/stdc++.h>
using namespace std;

// Function to find floor of x
// n: size of vector
// x: element whose floor is to find
int findFloor(vector<long long> v, long long n, long long x)
{

    // Binary Search approach
    if (v[0] > x)
        return -1;

    long long s = 0;
    long long e = n - 1;

    while (s <= e)
    {
        long long m = s + (e - s) / 2;
        if (v[m] == x)
        {
            return m;
        }
        else if (v[m] > x)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }
    return e;
}