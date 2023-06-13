// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // optimised
        ListNode *curr = new ListNode();
        curr->next = head;
        ListNode *s = curr, *f = curr;
        for(int i = 1; i<=n; i++){
            f = f->next;
        }
        while(f->next){
            s = s->next;
            f = f->next;
        }
        s->next = s->next->next;
        return curr->next;
    }
};