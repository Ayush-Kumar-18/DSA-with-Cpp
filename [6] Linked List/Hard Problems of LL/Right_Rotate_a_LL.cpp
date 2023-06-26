// https://leetcode.com/problems/rotate-list/description/

#include <bits/stdc++.h>
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0) return head;
        
        ListNode * curr = head;
        int n = 1;
        while(curr->next){
            n++;
            curr = curr->next;
        }
        curr->next = head;
        k = n-(k%n);
        while(k--) curr = curr->next;
        
        head = curr->next;
        curr->next = NULL;
        
        return head;
    }
};