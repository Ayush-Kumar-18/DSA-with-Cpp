// https://leetcode.com/problems/search-a-2d-matrix/

#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &mat, int target)
{
    int m = mat.size();
    int n = mat[0].size();

    int s = 0;
    int e = (m * n) - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (mat[mid / n][mid % n] == target)
        {
            return true;
        }
        else if (mat[mid / n][mid % n] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return false;
}