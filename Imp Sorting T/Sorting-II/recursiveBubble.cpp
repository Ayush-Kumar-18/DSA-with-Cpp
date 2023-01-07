#include<bits/stdc++.h>
using namespace std;

// Bubble Sort using recursion
void rBubbleSort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }

    int c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            c++;
        }
    }
    if (c == 0)
    {
        return;
    }

    rBubbleSort(arr, n - 1);
}