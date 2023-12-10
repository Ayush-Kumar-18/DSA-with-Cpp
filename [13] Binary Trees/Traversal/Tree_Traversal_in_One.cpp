// https://www.codingninjas.com/studio/problems/tree-traversal_981269

#include<bits/stdc++.h>
using namespace std;

// Following is Binary Tree Node structure:
class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<vector<int>> ans;
    vector<int> pre, inO, post;
    stack<pair<TreeNode*, int>> st;
    if(root == NULL) return ans;

    st.push({root, 1});
    while(!st.empty()){
        auto it = st.top();
        st.pop();

        if(it.second == 1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left) st.push({it.first->left, 1});
        }
        else if(it.second == 2){
            inO.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right) st.push({it.first->right, 1});
        }
        else{
            post.push_back(it.first->data);
        }
    }
    ans.push_back(inO);
    ans.push_back(pre);
    ans.push_back(post);

    return ans;
}