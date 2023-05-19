// https://practice.geeksforgeeks.org/problems/count-reverse-pairs/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=count-reverse-pairs

#include<bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int left, int mid, int right)
{
    int cnt = 0;
    int i = left;
    int j = mid + 1;
    for (i = left; i <= mid; i++)
    {
        while (j <= right && arr[i] > 2 * arr[j])
            j++;

        cnt = cnt + (j - (mid + 1));
    }

    vector<int> temp;
    int l = left;
    int h = mid + 1;
    while (l <= mid && h <= right)
    {
        if (arr[l] <= arr[h])
        {
            temp.emplace_back(arr[l]);
            l++;
        }
        else
        {
            temp.emplace_back(arr[h]);
            h++;
        }
    }
    while (l <= mid)
    {
        temp.emplace_back(arr[l]);
        l++;
    }
    while (h <= right)
    {
        temp.emplace_back(arr[h]);
        h++;
    }

    for (int m = left; m <= right; m++)
    {
        arr[m] = temp[m - left];
    }

    return cnt;
}

int mergeSort(vector<int> &arr, int left, int right)
{
    int rCnt = 0;
    if (left < right)
    {
        int mid = (left + right) / 2;
        rCnt += mergeSort(arr, left, mid);
        rCnt += mergeSort(arr, mid + 1, right);

        rCnt += merge(arr, left, mid, right);
    }
    return rCnt;
}

int countRevPairs(int n, vector<int> arr)
{
    // using merge sort
    int m = mergeSort(arr, 0, n - 1);
    // for(auto i: arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    return m;

    // TLE -- O(n^2)
    // int cnt = 0;
    // for(int i = 0; i<n; i++){
    //     int tmp = arr[i];
    //     for(int j = i+1; j<n; j++){
    //         if(tmp > 2*arr[j]) cnt++;
    //     }
    // }
    // return cnt;
}