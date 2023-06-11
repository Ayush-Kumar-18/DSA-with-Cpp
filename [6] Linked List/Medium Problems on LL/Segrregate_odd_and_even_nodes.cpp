// https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1

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

class Solution{
public:
    Node* divide(int N, Node *head){
        Node *even = new Node(-1);
        Node *odd = new Node(-1);
        
        Node *e = even, *o = odd;
        while(head){
            if(head->data & 1){
                odd->next = head;
                odd = odd->next;
            }
            else {
                even->next = head;
                even = even->next;
            }
            head = head->next;
        }
        
        even->next = o->next;
        odd->next = NULL;
        
        return e->next;
    }
};