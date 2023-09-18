// https://leetcode.com/problems/powx-n/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double solveI(double x, int n, double p){ //TLE
        if(n == 0) return p;

        if(n > 0) return solveI(x, n-1, p*x);

        return solveI(x, n+1, p/x);
    }

    double solveR(double x, int n){
        if(n == 0) return 1;

        if(n < 0){
            n = abs(n);
            x = 1/x;
        }
        if(n & 1) 
            return x*solveR(x*x, n>>1);
        else
            return solveR(x*x, n>>1);
    }

    double myPow(double x, int n) {
        // return solveI(x, n, 1);  // TLE
        return solveR(x, n);
        
        
        // iterative 
        // long num = labs(n);
        // if(num < 0){
        //     num = -num;
        //     x = 1/x;
        // } 
        // double po = 1;

        // while(num){
        //     if(num & 1) po *= x;

        //     x *= x;
        //     num >>= 1;
        // }

        // return po;
    }
};