// https://practice.geeksforgeeks.org/problems/anagram-1587115620/1

#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b)
{

    if (a.length() != b.length())
        return false;

    int m1[26] = {0}, m2[26] = {0};
    for (int i = 0; i < a.size(); i++)
    {
        m1[a[i] - 'a']++;
        m2[b[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        // cout<<m1[i]<<">";
        if (m1[i] != m2[i])
        {
            return false;
        }
    }
    return true;
}