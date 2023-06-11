// https://practice.geeksforgeeks.org/problems/find-length-of-loop/1

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

 bool detectLoop(Node* head, Node* &slow, Node* &fast){
    // optimised
    if(head == NULL || head->next == NULL){
        return false;
    }
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow) {
            
            return true;
        }
    }
    return false;
}

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    // Code here
    Node* slow = head, *fast = head;
    bool chk = detectLoop(head, slow, fast);
    if(chk){
        int cnt = 1;
        // Node* temp = fast;
        while(slow->next != fast){
            cnt++;
            slow = slow->next;
        }
        return cnt;
    }
    else{
        return 0;
    }
}