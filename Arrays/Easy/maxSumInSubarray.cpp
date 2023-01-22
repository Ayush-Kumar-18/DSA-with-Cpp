// https://practice.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0?category=&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=max-sum-in-sub-arrays

#include <bits/stdc++.h>
using namespace std;

long long pairWithMaxSum(long long arr[], long long N)
{

    // Indirectly the Q is same as the max sum of consecutive numbers -- O(n)
    long long maxx = INT_MIN;
    for (long long i = 0; i < N - 1; i++)
    {
        if (arr[i] + arr[i + 1] > maxx)
        {
            maxx = arr[i] + arr[i + 1];
        }
    }
    return maxx;

    // generate all subArrays --TLE O(n^3)
    // int maxx = INT_MIN;
    // for (long long i = 0; i < N; i++) {
    //     for (long long j = i; j < N; j++) {
    //         int s = INT_MAX, ss = INT_MAX;
    //         for (long long k = i; k <= j; k++) {
    //             // cout << arr[k] << " ";
    //             if (s > arr[k]) {
    //                 ss = s;
    //                 s = arr[k];
    //             }
    //             else if (arr[k] < ss) {
    //                 ss = arr[k];
    //             }
    //         }
    //         maxx = max(maxx, (s+ss));
    //         // cout << "    "<< s<< "  " << ss <<" =" <<maxx<< endl;
    //     }
    // }
    // return maxx;
}