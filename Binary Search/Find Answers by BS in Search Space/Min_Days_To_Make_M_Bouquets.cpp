// https://practice.geeksforgeeks.org/problems/minimum-days-to-make-m-bouquets/1

#include<bits/stdc++.h>
using namespace std;

bool blooming(int mid, vector<int> &bloomDay, int m, int k)
{
    int fl = 0, bt = 0;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (mid >= bloomDay[i])
        {
            fl++;
        }
        else
            fl = 0;

        if (fl == k)
        {
            bt++;
            fl = 0;
        }
    }

    if (bt >= m)
        return true;
    else
        return false;
}

int solve(int m, int k, vector<int> &bloomDay)
{
    if ((long long int)(m * k) > bloomDay.size())
        return -1;

    int mx = INT_MIN;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (bloomDay[i] > mx)
        {
            mx = bloomDay[i];
        }
    }

    int s = 1, e = mx;
    int res = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (blooming(mid, bloomDay, m, k))
        {
            res = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return res;
}