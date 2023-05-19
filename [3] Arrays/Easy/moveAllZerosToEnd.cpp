// https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=move-all-zeroes-to-end-of-array

#include<bits/stdc++.h>
using namespace std;

void pushZerosToEnd(int arr[], int n)
{

    // Optimal approach, TC:O(n), SC:O(1)
    int k = 0;
    while (k < n)
    {
        if (arr[k] == 0)
            break;
        else
            k++;
    }

    int i = k, j = k + 1;
    while (i < n && j < n)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }

    // Brute force, TC:O(n), SC:O(n)
    // int temp[n];
    // int k = 0;
    // for(int i = 0;i<n; i++){
    //    if(arr[i] != 0){
    //        arr[k] = arr[i];
    //        k++;
    //    }
    //}
    // while(k<n){
    //    arr[k] = 0;
    //    k++;
}