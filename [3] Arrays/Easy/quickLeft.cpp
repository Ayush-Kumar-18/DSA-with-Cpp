// https://practice.geeksforgeeks.org/problems/quick-left-rotation3806/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=quick-left-rotation

void quickLeft(int arr[], int k, int n)
{
    int b[100];
    for (int i = 0; i < n; i++)
    {
        b[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = b[(i + k) % n];
    }
}

void leftRotate(int arr[], int k, int n)
{
    // Your code goes here
    if (k % n == 0)
        return;

    quickLeft(arr, k, n);

    // this will give TLE
    // int r = k%n;
    // while(r>0){
    //    int temp = arr[0];
    //  for(int j = 1; j<n; j++){
    // 	       arr[j-1] = arr[j];
    // 	   }
    // 	   arr[n-1] = temp;
    // 	   r--;
    //}
}