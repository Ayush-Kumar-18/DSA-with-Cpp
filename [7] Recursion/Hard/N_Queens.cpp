// https://leetcode.com/problems/n-queens/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int col, int n, vector<string>& board, vector<int>& leftA, vector<int>& lowerD, vector<int>& upperD, vector<vector<string>>& ans){
        if(col == n){
            ans.push_back(board);
            return;
        }

        for(int row = 0; row < n; row++){
            if( leftA[row] == 0 && lowerD[row + col] == 0 && upperD[ n-1 + col-row] == 0){
                
                board[row][col] = 'Q';
                leftA[row] = 1;
                lowerD[row+col] = 1;
                upperD[(n-1) + (col-row)] = 1;
                solve(col+1, n, board, leftA, lowerD, upperD, ans);
                board[row][col] = '.';
                leftA[row] = 0;
                lowerD[row+col] = 0;
                upperD[n-1 + col-row] = 0;
            }
        }
    }


    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for(int i = 0; i<n; i++){
            board[i] = s;
        }

        vector<int> leftA(n, 0), LowerD(2*n - 1, 0), UpperD(2*n - 1, 0);

        solve(0, n, board, leftA, LowerD, UpperD, ans);

        return ans;
    }
};