// https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print_1_to_n_without_loop

#include<iostream>
using namespace std;

void printNos(int N)
{
    if (N == 0)
        return;
    printNos(N - 1);
    cout << N << " ";
}