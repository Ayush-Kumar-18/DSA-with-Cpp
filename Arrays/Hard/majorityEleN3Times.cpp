// https://practice.geeksforgeeks.org/problems/majority-vote/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=majority-vote

#include<bits/stdc++.h>
using namespace std;

vector<int> Solve(int n, vector<int> &nums)
{
    vector<int> v;
    int num1 = -1, num2 = -1, c1 = 0, c2 = 0;
    for (int i : nums)
    {
        if (i == num1)
            c1++;
        else if (i == num2)
            c2++;
        else if (c1 == 0)
        {
            num1 = i;
            c1 = 1;
        }
        else if (c2 == 0)
        {
            num2 = i;
            c2 = 1;
        }
        else
        {
            c1--;
            c2--;
        }
    }
    c1 = c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == num1)
            c1++;
        else if (nums[i] == num2)
            c2++;
    }
    if (c1 > n / 3)
        v.emplace_back(num1);
    if (c2 > n / 3)
        v.emplace_back(num2);

    // WA
    // unordered_map<int, int> mpp;
    // for(int i = 0; i<n; i++){
    //     mpp[nums[i]]++;
    // }
    // for(auto i:mpp){
    //     cout<<i.first<<" "<<i.second;
    //     if(i.second > (n/3)){
    //         v.push_back(i.first);
    //     }
    // }

    if (v.size() == 0)
        return {-1};
    return v;
}