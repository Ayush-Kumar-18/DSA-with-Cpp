// https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/0?problemType=functional&page=1&query=problemTypefunctionalpage1&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-consecutive-subsequence

#include<bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int N)
{
    // using Set -- O(n) & O(n)
    if (N <= 1)
        return N;
    set<int> s;
    for (int i = 0; i < N; i++)
    {
        s.insert(arr[i]);
    }
    int longestStreak = 0;
    for (int i = 0; i < N; i++)
    {
        if (!s.count(arr[i] - 1))
        {
            int currNum = arr[i];
            int currStreak = 1;
            while (s.count(currNum + 1))
            {
                currNum += 1;
                currStreak += 1;
            }
            longestStreak = max(longestStreak, currStreak);
        }
    }
    return longestStreak;

    // O(nlogn)
    // if(N <= 1) return 0;
    // sort(arr, arr+N);
    // int cnt = 1, maxi = 1;
    // for(int i = 0; i<N-1; i++){
    //     if(arr[i] + 1 == arr[i+1]){
    //       cnt++;
    //     }
    //     else if(arr[i] == arr[i+1]){
    //       continue;
    //     }
    //     else cnt = 1;

    //     maxi =  max(maxi, cnt);
    // }
    // return maxi;
}