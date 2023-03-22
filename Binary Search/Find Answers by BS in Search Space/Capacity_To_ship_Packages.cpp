// https://practice.geeksforgeeks.org/problems/capacity-to-ship-packages-within-d-days/1

#include<bits/stdc++.h>
using namespace std;

bool check(int arr[], int N, int D, int mid)
{
    int s = 0;
    int cnt = 1;
    for (int i = 0; i < N; i++)
    {
        s += arr[i];
        if (s > mid)
        {
            cnt++;
            s = arr[i];
        }
        if (cnt > D || arr[i] > mid)
        {
            return false;
        }
    }
    return true;
}
int leastWeightCapacity(int arr[], int N, int D)
{
    int e = 0;
    for (int i = 0; i < N; i++)
    {
        e += arr[i];
    }
    int s = 1;
    int ans = INT_MAX;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (check(arr, N, D, mid))
        {
            ans = min(ans, mid);
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}