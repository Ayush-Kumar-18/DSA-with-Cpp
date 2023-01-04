// https://practice.geeksforgeeks.org/problems/merge-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=merge-sort

void merge(int arr[], int l, int m, int r)
{
    // Your code here
    int b[100];
    int i = l, j = m + 1, k = l;

    while (i <= m && j <= r)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    if (i > m)
    {
        while (j <= r)
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= m)
        {
            b[k] = arr[i];
            i++;
            k++;
        }
    }

    for (k = l; k <= r; k++)
    {
        arr[k] = b[k];
    }
}

void mergeSort(int arr[], int l, int r)
{
    // code here
    if (l < r)
    {
        int mid = l + (r - l) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}