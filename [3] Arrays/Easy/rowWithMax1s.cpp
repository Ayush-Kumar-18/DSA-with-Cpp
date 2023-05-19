// https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=row-with-max-1s

#include<bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    // Optimal
    int maxR = -1;
    int i = 0;
    int j = m - 1;
    while (i < n && j >= 0)
    {
        if (arr[i][j] == 1)
        {
            j--;
            maxR = i;
        }
        else
        {
            i++;
        }
    }
    return maxR;

    // O(n*m)
    // int maxx = 0, maxR = -1;
    // for(int i = 0; i<n; i++){
    //     int cnt = 0;
    //     for(int j = 0; j<m; j++){
    //         if(arr[i][j] == 1)
    //             cnt++;
    //     }
    //     if(cnt > maxx){
    //         maxx = cnt;
    //         maxR = i;
    //     }
    // }
    // return maxR;
}