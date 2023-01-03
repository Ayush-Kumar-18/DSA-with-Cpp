// https://practice.geeksforgeeks.org/problems/palindrome-string0817/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=palindrome-string

#include<string>
using namespace std;

bool check(int i, int N, string &s)
{
    if (i >= N / 2)
        return true;

    if (s[i] != s[N - i - 1])
        return false;
    return check(i + 1, N, s);
}

int isPalindrome(string S)
{
    // Your code goes here
    int len = S.size();
    return check(0, len, S);
}