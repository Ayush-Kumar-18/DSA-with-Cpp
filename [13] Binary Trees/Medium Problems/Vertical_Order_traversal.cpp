// https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/

#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void preT(TreeNode* root, int x, int y, map<int, map<int, multiset<int>>>& nodes){
        if(root == NULL) return;

        nodes[x][y].insert(root->val);
        if(root->left) preT(root->left, x-1, y+1, nodes);
        if(root->right) preT(root->right, x+1, y+1, nodes);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> nodes;
        preT(root, 0, 0, nodes);

        // using level order traversal
        // queue< pair<TreeNode*, pair<int, int>> > que;
        // que.push({root, {0,0}});

        // while(!que.empty()){
        //     auto i = que.front();
        //     que.pop();
        //     TreeNode* node = i.first;
        //     int x = i.second.first, y = i.second.second;
        //     nodes[x][y].insert(node->val);

        //     if(node->left){
        //         que.push({node->left, {x-1, y+1}});
        //     }
        //     if(node->right){
        //         que.push({node->right, {x+1, y+1}});
        //     }
        // }
        vector<vector<int>> ans;

        for(auto i : nodes){
            vector<int> col;
            for(auto j : i.second){
                col.insert(col.end(), j.second.begin(), j.second.end());
            }
            ans.push_back(col);
        }

        return ans;
    }
};