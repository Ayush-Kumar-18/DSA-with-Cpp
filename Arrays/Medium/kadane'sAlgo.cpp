// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/0?company[]=Visa&company[]=Visa&page=2&query=company[]Visapage2company[]Visa&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=kadanes-algorithm

#include<bits/stdc++.h>
using namespace std;

// arr: input array
// n: size of array
// Function to find the sum of contiguous subarray with maximum sum.
long long maxSubarraySum(int arr[], int n)
{

    // Kadane's algo --O(n)
    long long maxx = INT_MIN;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxx = max(maxx, sum);

        if (sum < 0)
            sum = 0;
    }
    return maxx;

    // Brute O(n^2) --TLE
    // long long max = INT_MIN;
    // for(int i = 0; i<n; i++){
    //     long long sum = 0;
    //     for(int j = i; j<n; j++){
    //         sum = sum+arr[j];
    //         if(sum > max) max = sum;
    //     }
    // }

    // return max;
}