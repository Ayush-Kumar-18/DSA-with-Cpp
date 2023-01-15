// https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=search-in-a-matrix

#include<bits/stdc++.h>
using namespace std;

int matSearch(vector<vector<int>> &mat, int N, int M, int X)
{
    // Optimal approach
    int i = 0;
    int j = M - 1;
    while (i < N && j >= 0)
    {
        if (mat[i][j] == X)
            return 1;

        if (mat[i][j] > X)
            j--;
        else
            i++;
    }
    return 0;

    // Brute --O(n*m)
    // for(int i = 0; i<N; i++){
    //     for(int j = 0; j<M; j++){
    //         if(mat[i][j] == X)
    //             return 1;
    //     }
    // }
    // return 0;
}