// https://practice.geeksforgeeks.org/problems/rotation4723/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=rotation

int pivot(int arr[], int s, int e, int n)
{
    int m;
    while (s < e)
    {
        m = s + (e - s) / 2;
        if (arr[m] < arr[e])
        {
            e = m;
        }
        else
        {
            s = m + 1;
        }
    }

    return s;
}

int findKRotation(int arr[], int n)
{
    int p = pivot(arr, 0, n - 1, n);
    return p;
}