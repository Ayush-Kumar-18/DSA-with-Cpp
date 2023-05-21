// https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1

#include<bits/stdc++.h>
using namespace std;

// Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    Node* curr = head;
    int cnt = 1;
    if (x==1){
        head = curr -> next;
        curr -> next = NULL;
        delete curr;
        return head;
    }
    else{
        Node * temp = NULL;
        while(cnt < x){
            temp = curr;
            curr = curr->next;
            cnt++;
        }
        
        temp -> next = curr->next;
        curr -> next = NULL;
        delete curr;
        return head;
    }
