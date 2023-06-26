// https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        Node * curr = head, *tail = head;
        while(curr){
            tail = curr;
            curr = curr->next;
        }
        
        for(int i = 0; i<k; i++){
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            tail->next = temp;
            tail = tail->next;
        }
        
        return head;
    }
};