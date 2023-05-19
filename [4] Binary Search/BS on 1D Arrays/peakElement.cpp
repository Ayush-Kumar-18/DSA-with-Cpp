// https://practice.geeksforgeeks.org/problems/peak-element/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=peak-element

int peakElement(int arr[], int n)
{
    // Using Binary search -- O(logN)
    int s = 0;
    int e = n - 1;
    int m;
    while (s <= e)
    {
        m = (e + s) / 2;
        // cout<<m <<" ";
        if ((m == 0 || arr[m] >= arr[m - 1]) && (m == n - 1 || arr[m] >= arr[m + 1]))
        {
            return m;
        }
        else if (m > 0 && arr[m] < arr[m - 1])
        {
            e = m - 1;
        }
        else
            s = m + 1;
    }

    return m;

    // Brute --> O(n)
    // for(int i = 1; i<n; i++){
    //     if(arr[i] > arr[i-1] && arr[i] >= arr[i+1]){
    //         return i;
    //     }
    //     if(i == n-1 && arr[i] >= arr[i-1]){
    //         return i;
    //     }
    // }
    // return 0;
}