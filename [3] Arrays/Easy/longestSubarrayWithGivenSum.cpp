// https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k

#include<bits/stdc++.h>
using namespace std;

int lenOfLongSubarr(int A[], int N, int K)
{
    // using hashing
    int currSum = 0;
    int maxL = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < N; i++)
    {
        currSum += A[i];
        if (currSum - K == 0)
        {
            maxL = i + 1;
        }
        else
        {
            if (m.find(currSum - K) != m.end())
            {
                maxL = max(maxL, i - m[currSum - K]);
            }
            // else {
            //     m[currSum] = i;
            // }
        }
        if (m.find(currSum) == m.end())
        {
            m[currSum] = i;
        }
    }
    return maxL;

    // finding all subarrays and comparing
    // -----TLE----
    // int maxL = 0;
    // for(int i = 0; i<N; i++){
    //     int sum = 0;
    //     for(int j = i; j<N; j++){
    //         sum += A[j];
    //         if(sum == K){
    //             maxL = max(maxL, j-i+1);
    //         }
    //     }
    // }
    // return maxL;
}