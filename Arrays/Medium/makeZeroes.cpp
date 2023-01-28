// https://practice.geeksforgeeks.org/problems/make-zeroes4042/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=make-zeroes

#include<bits/stdc++.h>
using namespace std;

void MakeZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int copy[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            copy[i][j] = matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                int sum = 0;
                if (i - 1 >= 0)
                {
                    sum += matrix[i - 1][j];
                    copy[i - 1][j] = 0;
                }
                if (i + 1 < n)
                {
                    sum += matrix[i + 1][j];
                    copy[i + 1][j] = 0;
                }
                if (j - 1 >= 0)
                {
                    sum += matrix[i][j - 1];
                    copy[i][j - 1] = 0;
                }
                if (j + 1 < m)
                {
                    sum += matrix[i][j + 1];
                    copy[i][j + 1] = 0;
                }
                copy[i][j] = sum;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = copy[i][j];
        }
    }
}