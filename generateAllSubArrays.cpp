#include <bits/stdc++.h>
using namespace std;

long long pairWithMaxSum(long long arr[], long long N)
{
    // generate all subArrays
    int maxx = INT_MIN;
    for (long long i = 0; i < N; i++)
    {

        for (long long j = i; j < N; j++)
        {
            int s = INT_MAX, ss = INT_MAX;
            for (long long k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    return maxx;
}

int main()
{
    long long arr[] = {4, 3, 1, 5, 6};
    long long n = 5;
    pairWithMaxSum(arr, n);
    return 0;
}