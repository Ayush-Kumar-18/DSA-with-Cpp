// https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 

class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Tortoise Method
        Node* slow = head, *fast = head;
        
        while((fast != NULL) && (fast->next != NULL)){
            slow = slow -> next;
            fast = fast -> next ->next;
        }
        return slow->data;
        
        // Brute
        // Node* curr = head;
        // int cnt = 1;
        
        // while(curr -> next != NULL){
        //     curr = curr->next;
        //     cnt++;
        // }
        // int mid = cnt/2 + 1;
        
        // curr = head;
        // cnt = 1;
        // while(cnt < mid){
        //     curr = curr->next;
        //     cnt++;
        // }
        // return curr->data;
    }
};