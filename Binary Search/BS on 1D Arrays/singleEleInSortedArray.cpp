// https://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array0624/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-the-element-that-appears-once-in-sorted-array

int findOnce(int arr[], int n)
{
    int xo = 0;
    for (int i = 0; i < n; i++)
    {
        xo ^= arr[i];
    }
    return xo;
}