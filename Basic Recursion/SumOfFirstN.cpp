// https://practice.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=sum-of-first-n-terms

long long sumOfSeries(long long N)
{
    // O(1)
    return ((N * N) * ((N + 1) * (N + 1))) / 4;

    // Recursion takes O(n)
    // if(N == 0)
    //     return 0;

    // return pow(N,3) + sumOfSeries(N-1);
}