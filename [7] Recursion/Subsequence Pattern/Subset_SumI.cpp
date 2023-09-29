// https://www.codingninjas.com/studio/problems/subset-sum_3843086

#include <bits/stdc++.h>
using namespace std;

void fun(int i, int sum, vector<int> nums, vector<int>& ans){
	if(i == nums.size()){
		ans.push_back(sum);
		return;
	}

	sum += nums[i];
	fun(i+1, sum, nums, ans);

	sum -= nums[i];
	fun(i+1, sum, nums, ans);
}

vector<int> subsetSum(vector<int> &num){
	// Write your code here.	
	vector<int> ans;
	fun(0, 0, num, ans);

	sort(ans.begin(), ans.end());
	
	return ans;
}