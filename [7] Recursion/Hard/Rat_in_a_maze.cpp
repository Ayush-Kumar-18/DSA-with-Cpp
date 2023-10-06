// https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void solve(int row, int col, vector<vector<int>> &m, int n, string s, vector<string>& ans, vector<vector<int>> &vis){
        if (row == n-1 && col == n-1){
            ans.push_back(s);
            return;
        }
        // down
        if(row+1 < n && m[row+1][col] == 1 && vis[row+1][col] == 0){
            vis[row][col] = 1;
            s += 'D';
            solve(row+1, col, m, n, s, ans, vis);
            s.pop_back();
            vis[row][col] = 0;
        }
        // left
        if(col-1 >= 0 && m[row][col-1] == 1 && vis[row][col-1] == 0){
            vis[row][col] = 1;
            s += 'L';
            solve(row, col-1, m, n, s, ans, vis);
            s.pop_back();
            vis[row][col] = 0;
        }
        // right
        if(col+1 < n && m[row][col+1] == 1 && vis[row][col+1] == 0){
            vis[row][col] = 1;
            s += 'R';
            solve(row, col+1, m, n, s, ans, vis);
            s.pop_back();
            vis[row][col] = 0;
        }
        // up
        if(row-1 >= 0 && m[row-1][col] == 1 && vis[row-1][col] == 0){
            vis[row][col] = 1;
            s += 'U';
            solve(row-1, col, m, n, s, ans, vis);
            s.pop_back();
            vis[row][col] = 0;
        }
        
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        string s = "";
        vector<vector<int>> vis(n, vector<int> (n, 0));
        if(m[0][0] == 1) solve(0, 0, m, n, s, ans, vis);
        
        return ans;
    }
};