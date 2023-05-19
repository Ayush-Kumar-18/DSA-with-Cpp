// https://practice.geeksforgeeks.org/problems/print-gfg-n-times/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-gfg-n-times

#include<iostream>
using namespace std;

void printGfg(int N)
{
    // Code here
    if (N == 0)
        return;
    printGfg(N - 1);
    cout << "GFG ";
}

int main(){
    int n;
    cin>>n;
    printGfg(n);
    return 0;
}