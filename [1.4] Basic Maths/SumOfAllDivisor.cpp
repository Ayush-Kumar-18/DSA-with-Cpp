// https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

long long sumOfDivisors(int n)
{
    // Write Your Code here
    long long sum = 0;

    // O(sqrt(n))
    // for(int i = 1; i<=n; i++){ 
    //     int s = 0;
    //     for(int j = 1; j<=sqrt(i); j++){
    //         if(i%j == 0){
    //             s = s + j;
    //             if(j != i/j) s += i/j;
    //         }
    //     }
    //     sum += s;
    // }

    // O(n)
    for (int i = 1; i <= n; i++)
    {
        sum += (n / i) * i;
    }

    return sum;
}