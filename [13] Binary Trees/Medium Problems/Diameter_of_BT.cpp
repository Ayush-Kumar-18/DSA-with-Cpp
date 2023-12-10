// https://leetcode.com/problems/diameter-of-binary-tree/

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
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        solve(root, d);
        return d;
    }
    int solve(TreeNode* node, int &d){
        if(node == NULL) return 0;

        int lh = solve(node->left, d);
        int rh = solve(node->right, d);
        d = max(d, lh+rh);

        return 1 + max(lh, rh);
    }
};