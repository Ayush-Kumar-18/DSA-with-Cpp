// https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(root == NULL) return ans;
        
        queue<pair<Node*, int>> que;
        map<int, int> mpp;
        que.push({root, 0});
        
        while(!que.empty()){
            auto it = que.front();
            que.pop();
            
            Node* node = it.first;
            int x = it.second;
            if(mpp.find(x) == mpp.end()){
                mpp[x] = node->data;
            }
            
            if(node->left) que.push({node->left, x-1});
            if(node->right) que.push({node->right, x+1});
        }
        
        for(auto i : mpp){
            ans.push_back(i.second);
        }
        
        return ans;
    }

};