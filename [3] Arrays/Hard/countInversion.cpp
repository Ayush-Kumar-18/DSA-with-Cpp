// https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=inversion-of-array

#include<bits/stdc++.h>
using namespace std;

// arr[]: Input Array
// N : Size of the Array arr[]
// Function to count inversions in the array.
long long int merge(long long arr[], long long temp[], long long left, long long mid, long long right)
{
    long long int cnt = 0;

    long long i = left;
    long long j = mid + 1;
    long long k = left;

    while ((i <= mid) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];

            cnt = cnt + ((mid + 1) - i);
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }
    return cnt;
}

long long int mergeSort(long long arr[], long long temp[], long long left, long long right)
{
    long long mid;
    long long int inCnt = 0;
    if (left < right)
    {
        mid = (right + left) / 2;

        inCnt += mergeSort(arr, temp, left, mid);
        inCnt += mergeSort(arr, temp, mid + 1, right);

        inCnt += merge(arr, temp, left, mid, right);
    }
    return inCnt;
}

long long int inversionCount(long long arr[], long long n)
{
    // using Merge Sort
    long long temp[n];
    return mergeSort(arr, temp, 0, n - 1);

    // TLE
    // long long int cnt = 0;

    // for(long long i = 0; i<n; i++){
    //     int tmp = arr[i];
    //     for(int j = i+1; j<n; j++){
    //         if(arr[j] < tmp){
    //             cnt++;
    //         }
    //     }
    // }
    // return cnt;
}