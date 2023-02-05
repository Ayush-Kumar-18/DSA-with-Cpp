// https://leetcode.com/problems/3sum/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++)
    {
        if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
        {
            int lo = i + 1;
            int hi = n - 1;
            int sum = 0 - nums[i];

            while (lo < hi)
            {
                if (nums[lo] + nums[hi] == sum)
                {
                    vector<int> temp;
                    temp.emplace_back(nums[i]);
                    temp.emplace_back(nums[lo]);
                    temp.emplace_back(nums[hi]);
                    ans.emplace_back(temp);

                    while (lo < hi && nums[lo] == nums[lo + 1])
                        lo++;
                    while (lo < hi && nums[hi] == nums[hi - 1])
                        hi--;

                    lo++;
                    hi--;
                }
                else if (nums[lo] + nums[hi] < sum)
                    lo++;
                else
                    hi--;
            }
        }
    }
    return ans;
}