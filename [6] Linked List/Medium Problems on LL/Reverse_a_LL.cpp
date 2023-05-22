// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // Recursive
        if(head == NULL || head->next == NULL){
            return head;
        }
        struct Node *newNode = reverseList(head->next);
        struct Node *hNext = head->next;
        hNext->next = head;
        head->next = NULL;
        return newNode;
        
        // Iterrative
        // struct Node* newHead = NULL;
        // while(head != NULL){
        //     struct Node* next = head->next;
        //     head -> next = newHead;
        //     newHead = head;
        //     head = next;
        // }
        // return newHead;
    }
};