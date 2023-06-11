// https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution{
  public:
    Node* revLL(Node *head){
        Node *rev = NULL;
        while(head){
            Node *next = head -> next;
            head->next = rev;
            rev = head;
            head = next;
        }
        return rev;
    }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        // Optimised approach {O(1)--space}
        if(head == NULL || head->next == NULL) return true;
        
        // finding middle of LL
        Node * slow = head, * fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        // reversing the right half of LL
        slow->next = revLL(slow->next);
        
        slow = slow->next;
        
        while(slow){
            if(slow->data != head->data){
                return false;
            }
            slow = slow->next;
            head = head->next;
        }
        return true;
    }
};