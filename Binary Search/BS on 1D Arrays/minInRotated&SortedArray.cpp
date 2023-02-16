// https://practice.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimum-element-in-a-sorted-and-rotated-array

#include<bits/stdc++.h>
using namespace std;

int findMin(int arr[], int n)
{
    // Binary Search
    // int left = 0, right = n-1;
    // int minVal = INT_MAX;

    // while(left <= right){
    //     if(arr[left] < arr[right]){
    //         minVal = min(minVal, arr[left]);
    //         break;
    //     }
    //     int mid = left+(right-left)/2;

    //     if(arr[left] <= arr[mid]){
    //         minVal = min(minVal, arr[left]);
    //         left = mid+1;
    //     }
    //     else{
    //         minVal = min(minVal, arr[mid]);
    //         right = mid-1;
    //     }
    // }
    // return minVal;

    int s = 0, e = n - 1;
    int minVal = INT_MAX;
    int m;
    while (s < e)
    {
        m = s + (e - s) / 2;
        if (arr[m] < arr[e])
        {
            e = m;
        }
        else
        {
            s = m + 1;
        }
    }

    return arr[s];

    // Brute
    // int minVal = INT_MAX;
    // for(int i = 0; i<n; i++){
    //     minVal = min(minVal, arr[i]);
    // }
    // return minVal;
}