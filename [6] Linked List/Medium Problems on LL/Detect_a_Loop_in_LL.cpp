// https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1?page=1&category[]=Linked+List&sortBy=submissions

#include<bits/stdc++.h>
using namespace std;

struct Node
{
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
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // optimised
        if(head == NULL || head->next == NULL){
            return false;
        }
        
        Node* slow = head, *fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow) return true;
        }
        return false;
        
        // brute - using hashmap
        // Node* dummy = head;
        // unordered_map<Node* , bool> mpp;
        
        // while(dummy != NULL){
        //     if(mpp.find(dummy) != mpp.end()){
        //         return true;
        //     }
        //     mpp[dummy] = true;
        //     dummy = dummy->next;
        // }
        // return false;
    }
};