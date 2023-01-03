// https://practice.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?problemType=functional&difficulty[]=-1&page=1&query=problemTypefunctionaldifficulty[]-1page1&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-all-factorial-numbers-less-than-or-equal-to-n

#include<vector>
using namespace std;

long long fact(long long N)
{
    if (N < 1)
        return 1;
    return N * fact(N - 1);
}

vector<long long> factorialNumbers(long long N)
{
    // Write Your Code here
    vector<long long> v;

    for (auto i = 1; i <= N; i++)
    {
        long long temp = fact(i);
        if (temp <= N)
            v.emplace_back(temp);
        else
            break;
    }

    return v;
}