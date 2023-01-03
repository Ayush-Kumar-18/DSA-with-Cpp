// https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0
#include <bits/stdc++.h>
using namespace std;

void frequencyCount(vector<int> &arr, int N, int P)
{
    // using map --> hashing
    unordered_map<int, int> m;
    for (int i = 0; i < N; i++)
    {
        m[arr[i]]++;
    }
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    for (int i = 1; i <= N; i++)
    {
        arr[i - 1] = m[i];
        cout<<arr[i-1]<<endl;
    }

    /* Not optimised gives TLE
    int a[N];
    for(int i = 0; i< N; i++){
        if((i+1) > P){
            a[i] = 0;
            continue;
        }

        int c = 0;
        for(int j = 0; j<N; j++){
            if(i+1 == arr[j]){
                c++;
            }
        }
        a[i] = c;
    }

    for(int i = 0; i<N; i++){
        arr[i] = a[i];
    } */
}

int main(){
    vector<int> arr = {2,3,2,3,5};
    int n = arr.size();
    int p = 3;

    frequencyCount(arr, n, p);
    for(auto i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}