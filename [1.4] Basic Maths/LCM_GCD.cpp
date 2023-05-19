// https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1

#include<vector>
using namespace std;

long long gcd(long long a, long long b)
{

    // O(log(min(a,b)))
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);

    // O(n)
    // long long ans = 0;
    // for(long long i = 1; i<=min(a,b); i++){
    //     if(a%i == 0 && b%i == 0)
    //         ans = i;
    // }
    // return ans;
}

vector<long long> lcmAndGcd(long long a, long long b)
{
    // code here
    vector<long long> v;

    long long l = (a * b) / gcd(a, b);
    long long g = gcd(a, b);

    v.emplace_back(l);
    v.emplace_back(g);

    return v;
}