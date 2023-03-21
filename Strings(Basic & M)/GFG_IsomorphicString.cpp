// https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1

#include<bits/stdc++.h>
using namespace std;

bool areIsomorphic(string str1, string str2)
{
    if (str1.size() != str2.size())
        return false;

    map<char, char> m1;
    map<char, char> m2;
    for (int i = 0; i < str1.size(); i++)
    {
        if (m1[str1[i]] == 0 && m2[str2[i]] == 0)
        {
            m1[str1[i]] = str2[i];
            m2[str2[i]] = str1[i];
        }
        if (m1[str1[i]] != str2[i] || m2[str2[i]] != str1[i])
        {
            return false;
        }
    }
    return true;
}