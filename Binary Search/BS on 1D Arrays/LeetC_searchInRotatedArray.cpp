// https://leetcode.com/problems/search-in-rotated-sorted-array/

#include<bits/stdc++.h>
using namespace std;

// int pivot(vector<int>& arr, int s, int e, int n){
//     int m;
//     while(s<e){
//         m = s+(e-s)/2;
//         if(arr[m] >= arr[0]){
//             s= m+1;
//         }
//         else {
//             e= m;
//         }
//     }

//     return s;
// }

// int binaryS(vector<int>& A, int s, int e, int key){
//     while(s <= e){
//         int m = s+(e-s)/2;

//         if(A[m] == key){
//             return m;
//         }
//         else if(A[m] > key){
//             e = m-1;
//         }
//         else {
//             s = m+1;
//         }
//     }
//     return -1;
// }

int search(vector<int> &nums, int key)
{
    // Approach 1 : simply binary search
    int n = nums.size();
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == key)
            return mid;
        // left part is sorted
        if (nums[lo] <= nums[mid])
        {
            if (key >= nums[lo] && key <= nums[mid])
            {
                hi = mid - 1;
            }
            else
                lo = mid + 1;
        }
        // right part is sorted
        else
        {
            if (key >= nums[mid] && key <= nums[hi])
            {
                lo = mid + 1;
            }
            else
                hi = mid - 1;
        }
    }
    return -1;

    // Approach2 : finding pivot and then searching
    // int l = 0, h = nums.size()-1;
    // int pivInd = pivot(nums, l, h, h+1);

    // if(key >= nums[pivInd] && key <= nums[h]){
    //     return binaryS(nums, pivInd, h, key);
    // }
    // else{
    //     return binaryS(nums, 0, pivInd-1, key);
    // }
}