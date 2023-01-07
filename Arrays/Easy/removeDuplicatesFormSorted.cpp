// https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=remove-duplicate-elements-from-sorted-array

int remove_duplicate(int a[], int n)
{
    int k = 0;
    a[k] = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[k])
        {
            k++;
            a[k] = a[i];
        }
    }
    return k + 1;
}