// https://practice.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1

#include<bits/stdc++.h>
using namespace std;

double MedianOfArrays(vector<int> &array1, vector<int> &array2)
{
    // optimal -- Binary Search
    if (array1.size() > array2.size())
    {
        return MedianOfArrays(array2, array1);
    }
    int n1 = array1.size();
    int n2 = array2.size();
    int lo = 0;
    int hi = n1;

    while (lo <= hi)
    {
        int cut1 = (lo + hi) / 2;
        int cut2 = (n1 + n2 + 1) / 2 - cut1;

        int left1 = cut1 == 0 ? INT_MIN : array1[cut1 - 1];
        int left2 = cut2 == 0 ? INT_MIN : array2[cut2 - 1];
        int right1 = cut1 == n1 ? INT_MAX : array1[cut1];
        int right2 = cut2 == n2 ? INT_MAX : array2[cut2];

        if (left1 <= right2 && left2 <= right1)
        {
            if ((n1 + n2) % 2 == 0)
            {
                return (max(left1, left2) + min(right1, right2)) / 2.0;
            }
            else
            {
                return max(left1, left2);
            }
        }
        else if (left1 > right2)
        {
            hi = cut1 - 1;
        }
        else
        {
            lo = cut1 + 1;
        }
    }
    return 0.0;

    // Brute
    // vector<int> v;
    // int i = 0, j = 0;
    // while(i<array1.size() && j<array2.size()){
    //     if(array1[i] <= array2[j]){
    //         v.emplace_back(array1[i++]);
    //     }
    //     else{
    //         v.emplace_back(array2[j++]);
    //     }
    // }
    // while(i<array1.size()){
    //     v.emplace_back(array1[i++]);
    // }
    // while(j<array2.size()){
    //     v.emplace_back(array2[j++]);
    // }
    // if(v.size()&1){
    //     return v[v.size()/2];
    // }
    // else{
    //     double ans = (v[v.size()/2] + v[v.size()/2 - 1]);
    //     return ans/2;
    // }
}