// https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1

#include<cmath>
#include<string.h>
#include<iostream>
using namespace std;

string armstrongNumber(int n)
{
    // code here
    int temp = n;
    int arm = 0;

    while (temp > 0)
    {
        int rem = temp % 10;
        arm = arm + pow(rem, 3);
        temp /= 10;
    }
    if (arm == n)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}