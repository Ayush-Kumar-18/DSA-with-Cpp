// https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node *slow = head, *fast = head;
    Node *prev = NULL;
    
    while(fast != NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    prev->next = slow->next;
    slow->next = NULL;
    delete slow;
    
    return head;
}