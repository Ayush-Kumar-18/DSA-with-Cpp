// https://practice.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};

class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      Node* curr = head_ref;
      int cnt = 1;
      if(x == 1){
          head_ref = curr->next;
          delete curr;
          return head_ref;
      }
      else {
          Node * p = head_ref;
          Node * t = curr;
          while(cnt < x){
              p = curr;
              t = t -> next;
              curr = curr ->next;
              cnt++;
          }
          t -> prev = p;
          p -> next = curr -> next;
          curr -> prev = NULL;
          curr -> next = NULL;
          delete curr;
          return head_ref;
      }
    }
};