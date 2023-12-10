// https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int> ans;
        if(root == NULL) return ans;
        
        queue<pair<Node*, int>> que;
        que.push({root, 0});
        map<int, int> mpp;
        
        while(!que.empty()){
            auto it = que.front();
            que.pop();
            
            Node* node = it.first;
            int l = it.second;
            mpp[l] = node->data;
            
            if(node->left) que.push({node->left, l-1});
            if(node->right) que.push({node->right, l+1});
        }
        
        for(auto i: mpp){
            ans.push_back(i.second);
        }
        
        return ans;
     }
};