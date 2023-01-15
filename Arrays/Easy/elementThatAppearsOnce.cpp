// https://practice.geeksforgeeks.org/problems/element-appearing-once2552/0?company[]=Qualcomm&company[]=Qualcomm&difficulty[]=1&page=1&query=company[]Qualcommdifficulty[]1page1company[]Qualcomm&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=element-appearing-once

int search(int A[], int N)
{
    // Using Binary Search approach O(logn)
    int s = 0;
    int e = N - 1;
    while (s < e)
    {
        int m = s + (e - s) / 2;

        if (((m & 1) == 0 && A[m] == A[m + 1]) || ((m & 1) == 1 && A[m] == A[m - 1]))
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }
    }
    return A[s];

    // O(n)
    // int ans = 0;
    // for(int i = 0; i<N; i++){
    //     ans ^= A[i];
    // }

    // return ans;
}