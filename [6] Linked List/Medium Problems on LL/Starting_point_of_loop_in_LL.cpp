// https://practice.geeksforgeeks.org/problems/44bb5287b98797782162ffe3d2201621f6343a4b/1?page=3&category[]=Linked%20List&sortBy=submissions

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
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        Node* slow = head, *fast = head, *entry = head;
        
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                while(slow != entry){
                    slow = slow->next;
                    entry = entry->next;
                }
                return entry->data;
            }
        }
        
        return -1;
        
        // brute - hashmap
        // Node* dummy = head;
        // unordered_map<Node* , bool> mpp;
        
        // while(dummy != NULL){
        //     if(mpp.find(dummy) != mpp.end()){
        //         return dummy->data;;
        //     }
        //     mpp[dummy] = true;
        //     dummy = dummy->next;
        // }
        // return -1;
    }
};