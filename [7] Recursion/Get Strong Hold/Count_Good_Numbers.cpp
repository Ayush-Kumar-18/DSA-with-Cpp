// https://leetcode.com/problems/count-good-numbers/description/

class Solution {
public:
    int mod = 1e9 +7;

    long long funR(long long x, long long n){
        if(n == 0) return 1;

        if(n & 1) 
            return (x*funR((x*x) % mod, n>>1) % mod);
        else
            return funR((x*x) % mod, n>>1);
    }

    long long funI(long long x, long long n){
        long long po = 1;
        x = x % mod;
        if(x == 0) return 0;

        while(n){
            if(n & 1) po = (po * x) % mod;

            x = (x * x) % mod;
            n >>= 1;
        }

        return po;
    }

    int countGoodNumbers(long long n) {
        long long cnt_4 = n/2;
        long long cnt_5 = n - cnt_4;
        long long ans = ((funR(5, cnt_5) * funR(4, cnt_4)) % mod)%mod;
        return (int)ans;
    }
};