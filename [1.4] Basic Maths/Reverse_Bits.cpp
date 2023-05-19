// https://practice.geeksforgeeks.org/problems/reverse-bits3556/1

#include<cmath>

long long reversedBits(long long X) {
        // code here
        long long totBits = log2(X) + 1;
        long long m = 0;
        for(long long i = 1; i<=totBits; i++){
            long long bit = (X &1);
            m = ((bit<<(32-i)) | m);
            X >>= 1;
        }
        return m;
    }