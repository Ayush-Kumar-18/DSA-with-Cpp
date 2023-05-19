// https://practice.geeksforgeeks.org/problems/reversal-algorithm5340/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=reversal-algorithm

void reverse(int arr[], int s, int e)
{
    while (s <= e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}
// Reverse algo for right rotate
void rotateLeft(int arr[], int n, int k)
{
    if (n < 2)
        return;
    k = k % n;
    if (k == 0)
        return;

    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
}

void leftRotate(int arr[], int n, int d)
{

    rotateLeft(arr, n, d); // Reversal algorithm

    // int b[n];
    // for(int i = 0; i<n; i++){
    //     b[i] = arr[i];
    // }
    // for(int i = 0; i<n; i++){
    //     arr[i] = b[(i+d)%n];
    // }
}
