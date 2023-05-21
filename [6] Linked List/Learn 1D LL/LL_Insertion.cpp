// https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/0

#include<bits/stdc++.h>
using namespace std;

// Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; 

class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node *tmp = new Node(x);
       
       tmp -> next = head;
       head = tmp;
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       Node *temp = new Node(x);
       if(head == NULL){
           return temp;
       }
       Node * curr = head;
        // loooping because we are passing the head pointer
       while(head -> next != NULL){
           head = head->next;
       }
       head -> next = temp;
       return curr;
    }
};