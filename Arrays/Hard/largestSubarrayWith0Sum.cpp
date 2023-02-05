// https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1?category[]=Hash&category[]=Hash&company[]=Amazon&company[]=Amazon&page=1&query=category[]Hashcompany[]Amazonpage1company[]Amazoncategory[]Hash&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-subarray-with-0-sum

#include<bits/stdc++.h>
using namespace std;

int maxLen(vector<int> &A, int n)
{
    int maxx = 0;
    int sum = 0;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        if (sum == 0)
        {
            maxx = i + 1;
        }
        else
        {
            if (mpp.find(sum) != mpp.end())
            {
                maxx = max(maxx, i - mpp[sum]);
            }
            else
            {
                mpp[sum] = i;
            }
        }
    }
    return maxx;
}