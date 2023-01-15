// https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x5808/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-all-pairs-whose-sum-is-x

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int x, int t)
{

    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if ((arr[m] + t) == x)
        {
            return arr[m];
        }
        else if ((arr[m] + t) > x)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }

    return INT_MIN;
}

vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
{

    // more Optimised --Binary Search Approach O(nlogn)
    vector<pair<int, int>> vp;
    sort(A, A + N);
    sort(B, B + M);

    for (int i = 0; i < N; i++)
    {
        int t = A[i];
        int s = binarySearch(B, M, X, t);
        if (s + t == X)
        {
            vp.emplace_back(t, s);
        }
    }
    return vp;

    // Brute --> O(n*m)
    // vector<pair<int,int>> vp;
    // sort(A, A+N);
    // for(int i = 0; i<N; i++){
    //     for(int j = 0; j<M; j++){
    //         if((A[i] + B[j]) == X){
    //             vp.emplace_back(A[i], B[j]);
    //         }
    //     }
    // }
    // return vp;
}