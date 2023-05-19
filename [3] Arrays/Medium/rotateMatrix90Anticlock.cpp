// https://practice.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=rotate-by-90-degree

#include<bits/stdc++.h>
using namespace std;

// Function to rotate matrix anticlockwise by 90 degrees.
void rotateby90(vector<vector<int>> &matrix, int n)
{
    // reverse every row
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    // transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                break;
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}