// https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/0

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        unordered_map<char, int> mp;
        int i = 0, j = 0, mx = -1;
        
        while(j < s.size()){
            mp[s[j]]++;
            if(mp.size() < k) j++;
            else if(mp.size() == k){
                mx = max(mx, j-i+1);
                j++;
            }
            else if(mp.size() > k){
                while(mp.size() > k){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0){
                        mp.erase(s[i]);
                    } 
                    i++;
                }
                j++;
            }
        }
        
        return mx;
    }
};