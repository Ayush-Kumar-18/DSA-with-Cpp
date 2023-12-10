// https://www.codingninjas.com/studio/problems/create-binary-tree_8360671

#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

Node* solve(vector<int>& arr, int i, int n){
    Node *root = NULL;
    if(i<n){
        root = new Node(arr[i]);
        root->left = solve(arr, 2*i+1, n);
        root->right = solve(arr, 2*i+2, n);
    }
    return root;
}

Node* createTree(vector<int>&arr){
    return solve(arr, 0, arr.size());

    // brute
    // Node* root = new Node(arr[0]);
    // root->left = new Node(arr[1]);
    // root->right = new Node(arr[2]);
    // root->left->left = new Node(arr[3]);
    // root->left->right = new Node(arr[4]);
    // root->right->left = new Node(arr[5]);
    // root->right->right = new Node(arr[6]);
    // return root;
}