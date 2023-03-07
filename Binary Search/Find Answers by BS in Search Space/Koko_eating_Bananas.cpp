// https://practice.geeksforgeeks.org/problems/koko-eating-bananas/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=koko-eating-bananas

#include<bits/stdc++.h>
using namespace std;

bool eatingB(int k, vector<int> &piles, int h)
{
    int a = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        if (piles[i] % k == 0)
        {
            a += (piles[i] / k);
        }
        else
        {
            a += (piles[i] / k + 1);
        }
    }

    if (a <= h)
        return true;
    else
        return false;
}

int Solve(int n, vector<int> &piles, int h)
{
    int mx = INT_MIN;
    for (int i = 0; i < piles.size(); i++)
    {
        if (piles[i] > mx)
        {
            mx = piles[i];
        }
    }

    int s = 1, e = mx;
    int res = e;
    while (s <= e)
    {
        int k = s + (e - s) / 2;
        if (eatingB(k, piles, h))
        {
            res = min(k, res);
            e = k - 1;
        }
        else
        {
            s = k + 1;
        }
    }
    return res;
}