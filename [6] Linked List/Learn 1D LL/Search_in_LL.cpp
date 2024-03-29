// https://practice.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        Node* curr = head;
        while(curr != NULL){
            if(curr->data == key) return true;
            
            curr = curr->next;
        }
        
        return false;
    }
};