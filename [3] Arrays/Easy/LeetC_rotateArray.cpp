// https://leetcode.com/problems/rotate-array/
// Right Rotate

#include <bits/stdc++.h>
using namespace std;

void solve1(vector<int> &arr, int k)
{
    int n = arr.size();
    if (n < 2)
        return;
    k = k % n;
    if (k == 0)
        return;
    int temp[100];
    for (int i = n - k; i < n; i++)
    {
        temp[i - n + k] = arr[i];
    }

    for (int i = n - k - 1; i >= 0; i--)
    {
        arr[i + k] = arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
}

// Reverse an array;
void reverse(vector<int> &arr, int s, int e)
{
    while (s <= e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}
// Reverse algo for right rotate
void rotateRight(vector<int> &arr, int k)
{
    int n = arr.size();
    if (n < 2)
        return;
    k = k % n;
    if (k == 0)
        return;

    reverse(arr, n - k, n - 1);
    reverse(arr, 0, n - k - 1);
    reverse(arr, 0, n - 1);
}

void rotate(vector<int> &nums, int k)
{
    // solve1(nums, k);

    rotateRight(nums, k); // By Reversal Algorithm
}