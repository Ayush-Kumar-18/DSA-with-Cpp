// https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

#include<bits/stdc++.h>
using namespace std;

bool canAllocate(int A[], int N, int stu, int mid)
{
    int pagesSum = 0, allocatedS = 1;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > mid)
            return false;
        if (pagesSum + A[i] <= mid)
        {
            pagesSum += A[i];
        }
        else
        {
            allocatedS++;
            pagesSum = A[i];
        }
        if (allocatedS > stu)
        {
            return false;
        }
    }

    return true;
}
// Function to find minimum number of pages.
int findPages(int A[], int N, int M)
{
    if (M > N)
        return -1;
    int lo = A[0], hi = 0;
    for (int i = 0; i < N; i++)
    {
        hi += A[i];
    }
    int res = -1;
    while (lo <= hi)
    {
        int mid = (lo + hi) >> 1;
        if (canAllocate(A, N, M, mid))
        {
            res = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return res;
}