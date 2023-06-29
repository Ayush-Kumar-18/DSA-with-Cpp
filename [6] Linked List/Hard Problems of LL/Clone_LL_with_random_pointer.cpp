// https://leetcode.com/problems/copy-list-with-random-pointer/

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // optimised approach
        Node *iter = head, *front = head;
        
        while(iter){
            front = iter->next;
            Node *temp = new Node(iter->val);
            temp->next = front;
            iter->next = temp;
            iter = front;
        }
        
        iter = head;
        while(iter){
            if(iter->random != NULL){
                iter->next->random = iter->random->next;
            }
            iter = iter->next->next;
        }
        
        iter = head;
        Node *dummy = new Node(0), *curr = dummy;
        
        while(iter){
            front = iter->next->next;
            curr->next = iter->next;
            iter->next = front;
            curr = curr->next;
            iter = iter->next;
        }
        
        return dummy->next;
    }
};