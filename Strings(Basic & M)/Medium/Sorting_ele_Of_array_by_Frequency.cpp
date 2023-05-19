// https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/0

#include <bits/stdc++.h>
using namespace std;

void sortByFreq(int arr[], int n){
    map<int, int> mp1;
    multimap<int, int, greater<int>> mp2;
    for(int i = 0; i<n; i++){
        mp1[arr[i]]++;
    }
    for(auto i : mp1){
        // cout<<i.second<<"#";
        mp2.insert(pair<int, int>(i.second, i.first));
    }
    
    for(auto i: mp2) {
        int j = i.first;
        while(j > 0){
            cout<<i.second<<" ";
            j--;
        }
    }
    cout<<endl;
    // for(auto i : mp2){
    //     cout<<i.second<<"^";
    // }
}

int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    sortByFreq(arr, n);
	    
	}
	return 0;
}