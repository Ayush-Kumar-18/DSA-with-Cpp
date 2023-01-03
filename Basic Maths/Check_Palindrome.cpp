// https://practice.geeksforgeeks.org/problems/palindrome0746/1

#include<iostream>
#include<string>
using namespace std;

string is_palindrome(int n)
{
    // Code here.
    int oriN = n;
    int nN = 0;
    while (n > 0)
    {
        int rem = n % 10;
        nN = nN * 10 + rem;
        n /= 10;
    }

    if (nN == oriN)
        return "Yes";
    return "No";
}

int main(){
    int n = 123321;
    string s = is_palindrome(n);
    cout<<s<<endl;
}