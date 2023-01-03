// https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-first-n-fibonacci-numbers

#include<bits/stdc++.h>
using namespace std;

long long fibb(int n)
{
    if (n <= 1)
        return n;

    return fibb(n - 1) + fibb(n - 2);
}

// Function to return list containing first n fibonacci numbers.
vector<long long> printFibb(int n)
{
    // this is for recursion, but it take more time
    // vector<long long> v;
    // for(int i = 1; i<=n ; i++){
    //     long long t = fibb(i);
    //     v.emplace_back(t);
    // }
    // return v;

    if (n == 1)
    {
        return {1};
    }
    long long a = 1;
    long long b = 1;
    vector<long long> v;
    v.emplace_back(a);
    v.emplace_back(b);
    for (long long i = 2; i < n; i++)
    {
        long long f = a + b;
        v.emplace_back(f);
        a = b;
        b = f;
    }
    return v;
}