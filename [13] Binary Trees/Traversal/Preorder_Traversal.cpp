// https://leetcode.com/problems/binary-tree-preorder-traversal/description/

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
    // recursive
    void solve(TreeNode* root, vector<int>& ans){
        if(root == NULL) return;

        ans.push_back(root->val);
        solve(root->left, ans);
        solve(root->right, ans);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        // iterative
        vector<int> ans;
        if(root == NULL) return ans;
        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            TreeNode* curr = st.top();
            ans.push_back(curr->val);
            st.pop();
            if(curr->right)   st.push(curr->right);
            if(curr->left)   st.push(curr->left);
        }

        return ans;


        // vector<int> ans;
        // solve(root, ans);
        // return ans;
    }
};