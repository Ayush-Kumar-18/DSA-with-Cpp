// https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/0

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        int cnt = 0;
        Node *curr = head;
        while(curr != NULL){
            cnt++;
            curr = curr->next;
        }
        
        return cnt;
    }
};