// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=first-and-last-occurrences-of-x

#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int x)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (arr[m] > x)
        {
            e = m - 1;
        }
        else if (arr[m] < x)
        {
            s = m + 1;
        }
        else
        {
            ans = m;
            e = m - 1;
        }
    }
    return ans;
}
int lastOcc(int arr[], int n, int x)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (arr[m] < x)
        {
            s = m + 1;
        }
        else if (arr[m] > x)
        {
            e = m - 1;
        }
        else
        {
            ans = m;
            s = m + 1;
        }
    }
    return ans;
}

vector<int> find(int arr[], int n, int x)
{
    vector<int> v(2);
    v[0] = firstOcc(arr, n, x);
    v[1] = lastOcc(arr, n, x);
    return v;
}