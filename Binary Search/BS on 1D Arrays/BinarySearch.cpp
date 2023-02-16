// https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=binary-search

int binarysearch(int arr[], int n, int k)
{

    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (arr[m] == k)
        {
            return m;
        }
        else if (arr[m] > k)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }

    return -1;
}