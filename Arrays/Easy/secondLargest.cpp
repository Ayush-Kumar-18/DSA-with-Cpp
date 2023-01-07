// https://practice.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest

#include<bits/stdc++.h>
using namespace std;

int print2largest(int arr[], int n)
{
    // using single loop
    if (n < 2)
        return -1;
    int max = INT_MIN, second_max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] != max)
        {
            second_max = arr[i];
        }
    }
    if (second_max == INT_MIN)
        return -1;

    return second_max;

    // using two for loops
    // if(n==1){
    //     return -1;
    // }

    // int max = INT_MIN;
    // for(int i = 0; i<n; i++){
    //     if(arr[i]>max)
    //         max = arr[i];
    // }
    // int sM = -1;
    // for(int i = 0; i<n; i++){
    //     if(sM == max) continue;

    //     if(arr[i]>sM && arr[i]<max)
    //         sM = arr[i];
    // }
    // return sM;
}