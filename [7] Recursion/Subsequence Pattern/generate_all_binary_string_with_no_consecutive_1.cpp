// https://www.codingninjas.com/studio/problems/-binary-strings-with-no-consecutive-1s._893001

#include <bits/stdc++.h>
using namespace std;

void funR(int i, string &ds, vector<string> &s, int n){
    if(ds.size() > 1 && ds[i-2] == '1' && ds[i-1] == '1'){
        // ds.pop_back ();
        return;
    }
    if(i == n){
        s.push_back(ds);
        return;
    }
    ds += '1';
    funR(i+1, ds, s, n);
    ds.pop_back();
    ds += '0';
    funR(i+1, ds, s, n);
    ds.pop_back();
    return;
}

vector<string> generateString(int N) {
    // Write your code here.
    vector<string> s;
    string ds;
    funR(0, ds, s, N);
    sort(s.begin(), s.end());
    return s;
}