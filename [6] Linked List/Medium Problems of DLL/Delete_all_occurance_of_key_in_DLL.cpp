// https://practice.geeksforgeeks.org/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list/1

#include <bits/stdc++.h>
using namespace std;
 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
};

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        
        struct Node *curr = *head_ref;
        if(!curr) return;
        
        while(curr){
            
            if(curr->data == x){
                // if only 1 element is present
                if(curr->next == NULL && curr->prev == NULL){
                    *head_ref = NULL;
                    return;
                }
                // for starting index
                else if(curr->prev == NULL){
                    struct Node* temp = curr;
                    curr->next->prev = NULL;
                    *head_ref = temp->next;
                    delete temp;
                }
                // for end index
                else if(curr->next == NULL){
                    struct Node* temp = curr;
                    curr->prev->next = NULL;
                    delete temp;
                }
                // for any middle index
                else{
                    struct Node* temp = curr;
                    curr->next->prev = temp->prev;
                    curr->prev->next = temp->next;
                    delete temp;
                }
            }
            curr = curr->next;
        }
        
    }
};