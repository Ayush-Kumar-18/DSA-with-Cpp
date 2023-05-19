// https://practice.geeksforgeeks.org/problems/missing-number4257/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=missing-number

int missingNumber(int A[], int N)
{
    // Bitwise : xor 
    int temp = 0;
    for(int i = 0; i<N-1; i++){
        temp ^= A[i];
    }

    for(int i = 1; i<=N; i++){
        temp = temp ^ i;
    }
    return temp;
}