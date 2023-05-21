// https://practice.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1

#include<bits/stdc++.h>
using namespace std;

// a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
};

//Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
   Node* curr = head;
   int cnt = 0;
   
   Node* p = head;
   while(cnt < pos){
       p = curr;
       curr = curr -> next;
       cnt++;
   }
   Node* temp = new Node(data);
   temp -> next = curr -> next;
   curr -> next = temp;
   temp -> prev = p;
}