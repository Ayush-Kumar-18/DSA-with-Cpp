// https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/0

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int search(string pat, string txt) {
	    int k = pat.size();
	    int i = 0, j = 0;
	    unordered_map<char, int> mpp;
	    for(int i = 0; i<k; i++){
	        mpp[pat[i]]++;
	    }
	    
	    int cnt = mpp.size(), ans = 0;
	    while(j < txt.size()){
	        mpp[txt[j]]--;
	        if(mpp[txt[j]] == 0) cnt--;
	        
	        if( j-i+1 < k) j++;
	        else if( j-i+1 == k){
	            if(cnt == 0) ans++;
	            
	            mpp[txt[i]]++;
	            if(mpp[txt[i]] == 1) cnt++;
	            
	            i++;
	            j++;
	        }
	    }
	    
	    return ans;
	}

};