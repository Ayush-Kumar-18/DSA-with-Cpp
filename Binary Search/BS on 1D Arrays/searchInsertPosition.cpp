// https://practice.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=search-insert-position-of-k-in-a-sorted-array

#include<bits/stdc++.h>
using namespace std;

int searchInsertK(vector<int> Arr, int N, int k)
{
    // Binary Search
    int s = 0;
    int e = N - 1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (Arr[m] == k)
        {
            return m;
        }
        else if (Arr[m] > k)
        {
            e = m - 1;
        }
        else
            s = m + 1;
    }
    return s;
}