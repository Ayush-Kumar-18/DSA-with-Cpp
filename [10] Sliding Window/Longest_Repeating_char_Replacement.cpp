// https://practice.geeksforgeeks.org/problems/longest-repeating-character-replacement/0

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int characterReplacement(string s, int k) {
        int i = 0, j = 0;
        int ans = 0;
        // unordered_map<int, int> mp;
        vector<int> mp(26, 0);
        int maxF = 0;

        while(j < s.size()){
            mp[s[j] - 'A']++;
            maxF = max(maxF, mp[s[j] - 'A']);

            if(j-i+1 - maxF <= k){
                ans = max(ans, j-i+1);
                j++;
            }
            else{
                while(j-i+1 - maxF > k){
                    mp[s[i] - 'A']--;
                    i++;
                }
                j++;
            }
        }

        return ans;
    }
};