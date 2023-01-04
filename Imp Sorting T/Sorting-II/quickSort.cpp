// https://practice.geeksforgeeks.org/problems/quick-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=quick-sort

//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

// Function to sort an array using quick sort algorithm.
void quickSort(int arr[], int low, int high)
{
    // code here
    if (low < high)
    {
        int pivotI = partition(arr, low, high);
        quickSort(arr, low, pivotI - 1);
        quickSort(arr, pivotI + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    // Your code here
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
