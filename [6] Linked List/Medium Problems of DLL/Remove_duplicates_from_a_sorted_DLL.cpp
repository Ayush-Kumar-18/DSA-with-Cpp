// https://practice.geeksforgeeks.org/problems/remove-duplicates-from-a-sorted-doubly-linked-list/1

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

class Solution
{
public:

    Node * removeDuplicates(struct Node *head)
    {
        struct Node * curr = head;
        while(curr){
            if(curr->prev != NULL && curr->data == curr->prev->data){
                struct Node * temp = curr;
                if(temp->next != NULL){
                    curr->next->prev = temp->prev;
                }
                curr->prev->next = temp->next;
                delete temp;
            }
            curr = curr->next;
        }
        return head;
    }
};