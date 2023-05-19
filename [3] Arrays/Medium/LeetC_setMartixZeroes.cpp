// https://leetcode.com/problems/set-matrix-zeroes/

#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    // Optimised--Best time=O(m*n), Space=O(1)
    int col0 = 1;
    for (int i = 0; i < m; i++)
    {
        if (matrix[i][0] == 0)
            col0 = 0;
        for (int j = 1; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = matrix[0][j] = 0;
            }
        }
    }
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 1; j--)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        }
        if (col0 == 0)
            matrix[i][0] = 0;
    }

    // By Creating two Dummy aarrays
    // vector<int> rowD(m, INT_MAX), colD(n,INT_MAX);
    // for(int i = 0; i<m; i++){
    //     for(int j = 0; j<n; j++){
    //         if(matrix[i][j] == 0){
    //             rowD[i] = 0;
    //             colD[j] = 0;
    //         }
    //     }
    // }
    // for(int i = 0; i<m; i++){
    //     for(int j = 0; j<n; j++){
    //         if(rowD[i] == 0 || colD[j] == 0){
    //             matrix[i][j] = 0;
    //         }
    //     }
    // }

    // using Sets
    // set<int> setR, setC;
    // for(int i = 0; i<m; i++){
    //     for(int j =0; j<n; j++){
    //         if(matrix[i][j] == 0){
    //             setR.insert(i);
    //             setC.insert(j);
    //         }
    //     }
    // }
    // for(int i = 0; i<m; i++){
    //     for(int j =0; j<n; j++){
    //         if(setR.find(i) != setR.end() || setC.find(j) != setC.end()){
    //             matrix[i][j] = 0;
    //         }
    //     }
    // }

    // Brute
    // int copy[m][n];
    // for(int i = 0; i<m; i++){
    //     for(int j =0; j<n; j++){
    //         copy[i][j] = matrix[i][j];
    //     }
    // }

    // for(int i = 0; i<m; i++){
    //     for(int j =0; j<n; j++){
    //         if(matrix[i][j] == 0){
    //             for(int k =0; k<m; k++){
    //                 copy[k][j] = 0;
    //             }
    //             for(int k =0; k<n; k++){
    //                 copy[i][k] = 0;
    //             }
    //         }
    //     }
    // }
    // for(int i = 0; i<m; i++){
    //     for(int j =0; j<n; j++){
    //         matrix[i][j] = copy[i][j];
    //     }
    // }
}