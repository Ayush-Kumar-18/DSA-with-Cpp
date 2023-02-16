// https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-occurrence


/* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
int Occ(int arr[], int n, int x, bool isFirst)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (arr[m] > x)
        {
            e = m - 1;
        }
        else if (arr[m] < x)
        {
            s = m + 1;
        }
        else
        {
            ans = m;
            if (isFirst)
                e = m - 1;
            else
                s = m + 1;
        }
    }
    return ans;
}
int count(int arr[], int n, int x)
{
    int f = Occ(arr, n, x, true);
    int l = Occ(arr, n, x, false);
    if (f == -1)
        return 0;
    return l - f + 1;
}