// https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=array-of-alternate-ve-and-ve-nos

#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{

    vector<int> v, po, ne;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ne.emplace_back(arr[i]);
        }
        else
        {
            po.emplace_back(arr[i]);
        }
    }

    int i = 0, j = 0;
    while (i < po.size() && j < ne.size())
    {
        v.emplace_back(po[i]);
        i++;
        v.emplace_back(ne[j]);
        j++;
    }

    while (i < po.size())
    {
        v.emplace_back(po[i]);
        i++;
    }
    while (j < ne.size())
    {
        v.emplace_back(ne[j]);
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = v[i];
    }
}