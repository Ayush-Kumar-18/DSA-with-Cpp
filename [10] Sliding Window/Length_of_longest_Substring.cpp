// https://practice.geeksforgeeks.org/problems/length-of-the-longest-substring3036/0

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int longestUniqueSubsttr(string S){
        int mx = INT_MIN, i = 0, j = 0;
        vector<int> mp(26, 0);
        
        while(j < S.size()){
            if(mp[S[j] - 'a'] == 0){
                mp[S[j] - 'a'] = 1;
                mx = max(mx, j-i+1);
                j++;
            }
            else if(mp[S[j] - 'a'] == 1){ // char already present
                while(mp[S[j] - 'a'] == 1){
                    mp[S[i] - 'a'] = 0;
                    i++;
                }
                mp[S[j] - 'a'] = 1;
                j++;
            }
        }
        
        return mx;
        
        // TLE 
        // int mx = INT_MIN, i = 0, j = 0;
        // unordered_map<char, int> mp;
        
        // while(j < S.size()){
        //     mp[S[j]]++;
        //     if(mp.size() == j-i+1){
        //         mx = max(mx, j-i+1);
        //         j++;
        //     }
        //     else if(mp.size() < j-i+1){
        //         while(mp.size() < j-i+1){
        //             mp[S[i]]--;
        //             if(mp[S[i]] == 0) mp.erase(S[i]);
                    
        //             i++;
        //         }
        //         j++;
        //     }
        // }
        
        // return mx;
    }
};