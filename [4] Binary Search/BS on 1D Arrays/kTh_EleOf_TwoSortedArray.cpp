// https://practice.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=k-th-element-of-two-sorted-array

#include<bits/stdc++.h>
using namespace std;

int kthElement(int arr1[], int arr2[], int n, int m, int k)
{
    vector<int> v;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            v.emplace_back(arr1[i++]);
        }
        else
        {
            v.emplace_back(arr2[j++]);
        }
    }
    while (i < n)
    {
        v.emplace_back(arr1[i++]);
    }
    while (j < m)
    {
        v.emplace_back(arr2[j++]);
    }

    return v[k - 1];
}