//  https://practice.geeksforgeeks.org/problems/selection-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=selection-sort

#include<bits/stdc++.h>
using namespace std;

int select(int arr[], int i, int n) {
    // code here such that selectionSort() sorts arr[]
    int minIndex = i;
    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[minIndex])
            minIndex = j;
    }
    return minIndex;
}

void selectionSort(int arr[], int n) {
    // code here
    for (int i = 0; i < n - 1; i++)
    {
        //   int minIndex = select(arr, i, n);
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}