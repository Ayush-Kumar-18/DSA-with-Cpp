// https://practice.geeksforgeeks.org/problems/insertion-sort/0?category[]=Algorithms&page=1&query=category[]Algorithmspage1&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=insertion-sort


void insert(int arr[], int i)
{
    // code here
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0)
    {
        if (arr[j] > temp)
            arr[j + 1] = arr[j];
        else
            break;
        j--;
    }
    arr[j + 1] = temp;
}

// Function to sort the array using insertion sort algorithm.
void insertionSort(int arr[], int n)
{
    // code here
    for (int i = 1; i < n; i++)
    {
        insert(arr, i);

        // int temp = arr[i];

        // int j = i-1;
        // while(j>=0){
        //     if(arr[j] > temp)
        //         arr[j+1] = arr[j];
        //     else
        //         break;
        //     j--;
        // }
        // arr[j+1] = temp;
    }
}