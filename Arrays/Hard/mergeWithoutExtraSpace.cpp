// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1?company[]=Synopsys&company[]=Synopsys&page=1&query=company[]Synopsyspage1company[]Synopsys&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=merge-two-sorted-arrays

#include<bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m)
{
    // Simply swapping and inserting/sorting -- TLE
    // int i = 0;
    // while(arr1[n-1] > arr2[0]){

    //     if(arr1[i] > arr2[0]){
    //         swap(arr1[i], arr2[0]);

    //         int tmp = arr2[0];
    //         int j = 1;
    //         while(j < m && arr2[j] < tmp) {
    //             arr2[j-1] = arr2[j];
    //             j++;
    //         }
    //         arr2[j-1] = tmp;

    //         // sort(arr2, arr2 + m);
    //     }
    //     i++;
    // }

    // otpimised
    int i = 0, j = 0, k = n - 1;
    while (i <= k && j < m)
    {
        if (arr1[i] < arr2[j])
            i++;
        else
        {
            swap(arr2[j++], arr1[k--]);
        }
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    // By GAP algo
    // long long gap = ceil((float)(n + m) / 2);

    // while(gap > 0){
    //     long long i = 0;
    //     long long j = gap;

    //     while(j < (n+m)){
    //         if(j < n && arr1[i] > arr1[j]){
    //             swap(arr1[i] , arr1[j]);
    //         }
    //         else if(j >= n && i < n && arr1[i] > arr2[j-n]){
    //             swap(arr1[i] , arr2[j-n]);
    //         }
    //         else if(j >= n && i >= n && arr2[i-n] > arr2[j-n]){
    //             swap(arr2[i-n] , arr2[j-n]);
    //         }
    //         i++; j++;
    //     }
    //     if(gap == 1) gap = 0;
    //     else{
    //         gap = ceil((float) gap / 2);
    //     }
    // }
}