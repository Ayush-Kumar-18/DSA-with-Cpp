// https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=union-of-two-sorted-arrays

#include<bits/stdc++.h>
using namespace std;

// arr1,arr2 : the arrays
//  n, m: size of arrays
// Function to return a list containing the union of the two arrays.
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    // using Set
    // set<int> s;
    // vector<int> v;
    // for(int i = 0; i<n; i++) s.insert(arr1[i]);
    // for(int i = 0; i<m; i++) s.insert(arr2[i]);

    // for(auto i:s)
    //     v.emplace_back(i);

    // return v;

    // using two pointers
    vector<int> v;
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (v.size() == 0 || v.back() != arr1[i])
                v.emplace_back(arr1[i]);
            i++;
        }
        else
        {
            if (v.size() == 0 || v.back() != arr2[j])
                v.emplace_back(arr2[j]);
            j++;
        }
    }

    while (i < n)
    {
        if (v.size() == 0 || v.back() != arr1[i])
            v.emplace_back(arr1[i]);
        i++;
    }

    while (j < m)
    {
        if (v.size() == 0 || v.back() != arr2[j])
            v.emplace_back(arr2[j]);
        j++;
    }

    return v;
}
