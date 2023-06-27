// https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1

#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

Node *mergeTwoList(Node *a, Node *b){
    Node *dummy = new Node(0);
    Node *temp = dummy, *res = dummy;
    
    while(a != NULL && b != NULL){
        if(a->data < b->data){
            temp->bottom = a;
            temp = temp->bottom;
            a = a->bottom;
        }
        else{
            temp->bottom = b;
            temp = temp->bottom;
            b = b->bottom;
        }
    }
    
    if(a) temp->bottom = a;
    else temp->bottom = b;
    
    res->bottom->next = NULL;
    
    return res->bottom;
}

/*  Function which returns the  root of 
    the flattened linked list. */
Node *flatten(Node *root)
{
    // Using recursion
    if(root == NULL || root->next == NULL){
        return root;
    }
    
    root->next = flatten(root->next);
    
    root = mergeTwoList(root, root->next);
    
    return root;
}