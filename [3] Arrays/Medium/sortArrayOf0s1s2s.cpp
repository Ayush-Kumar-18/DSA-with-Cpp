// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=sort-an-array-of-0s-1s-and-2s

#include<bits/stdc++.h>
using namespace std;

void sortOneByOne(int a[], int n)
{
    int i = 0;
    int j = n - 1;
    // sort 0's
    while (i < j)
    {
        if (a[i] != 0 && a[j] == 0)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
        else if (a[i] == 0 && a[j] == 0)
        {
            i++;
        }
        else if (a[i] != 0 && a[j] != 0)
        {
            j--;
        }
        else if (a[i] == 0 && a[j] != 0)
        {
            j--;
        }
    }

    // sort 1's and 2's
    for (int k = 0; k < n; k++)
    {
        if (a[k] != 0)
        {
            i = k; // finding first non-zero
            break;
        }
    }
    j = n - 1;
    while (i < j)
    {
        if (a[i] != 1 && a[j] == 1)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
        else if (a[i] == 1 && a[j] == 1)
        {
            i++;
        }
        else if (a[i] != 1 && a[j] != 1)
        {
            j--;
        }
        else if (a[i] == 1 && a[j] != 1)
        {
            j--;
        }
    }
}

void dnfa(int a[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[mid], a[low]);
            mid++;
            low++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[high], a[mid]);
            high--;
        }
    }
}

void sort012(int a[], int n)
{
    // sortOneByOne(a, n); // Solved by me

    dnfa(a, n); // Dutch National Flag Algo
}