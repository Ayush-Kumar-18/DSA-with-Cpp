// https://leetcode.com/problems/binary-tree-maximum-path-sum/

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
    int maxPathSum(TreeNode* root) {
        int mx = INT_MIN;
        maxP(root, mx);
        return mx;
    }
    int maxP(TreeNode* node, int &mx){
        if(node == NULL){
            return 0;
        }

        int leftSum = max(0, maxP(node->left, mx));
        int rightSum = max(0, maxP(node->right, mx));
        mx = max(mx, node->val + leftSum + rightSum);

        return (node->val) + max(leftSum, rightSum);
    }
};