// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &a)
{
    int n = a.size();
    int k = 0;
    a[k] = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[k])
        {
            k++;
            a[k] = a[i];
        }
    }
    return k + 1;
}