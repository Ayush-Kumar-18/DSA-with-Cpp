// https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;
}; 

class Solution {
public:
    bool isLeaf(Node* node){
        if(node->left) return false;
        if(node->right) return false;
        
        return true;
    }

    void addLeftBo(Node* node, vector<int>& ans){
        Node* curr = node->left;
        while(curr){
            if(!isLeaf(curr)) ans.push_back(curr->data);
            
            if(curr->left) curr = curr->left;
            else curr = curr->right;
        }
    }
    void addRightBo(Node* node, vector<int>& ans){
        Node* curr = node->right;
        vector<int> tmp;
        while(curr){
            if(!isLeaf(curr)) tmp.push_back(curr->data);
            
            if(curr->right) curr = curr->right;
            else curr = curr->left;
        }
        for(int i = tmp.size()-1; i>=0; i--){
            ans.push_back(tmp[i]);
        }
    }
    void addLeaves(Node* node, vector<int>& ans){
        if(isLeaf(node)){
            ans.push_back(node->data);
            return;
        }
        if(node->left) addLeaves(node->left, ans);
        if(node->right) addLeaves(node->right, ans);
    }
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root == NULL) return ans;
        if(!isLeaf(root)) ans.push_back(root->data);
        
        addLeftBo(root, ans);
        addLeaves(root, ans);
        addRightBo(root, ans);
        
        return ans;
    }
};