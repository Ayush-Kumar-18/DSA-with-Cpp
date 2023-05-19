// https://practice.geeksforgeeks.org/problems/3-sum-closest/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=3-sum-closest

#include<bits/stdc++.h>
using namespace std;

int closest3Sum(int A[], int n, int x)
{
    sort(A, A + n);
    int mi = INT_MAX, tSum = 0;
    for (int i = 0; i < n - 2; i++)
    {

        int lo = i + 1;
        int hi = n - 1;

        while (lo < hi)
        {
            int sum = A[i] + A[lo] + A[hi];
            if (abs(sum - x) < mi)
            {
                mi = abs(sum - x);
                tSum = sum;
            }
            if (sum < x)
                lo++;
            else
                hi--;
        }
    }
    return tSum;
}