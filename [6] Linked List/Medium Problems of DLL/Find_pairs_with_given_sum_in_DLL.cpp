// https://practice.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/1

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};

class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        vector<pair<int, int>> v;
        Node *curr = head, *tail = head;
        while(curr){
            tail = curr;
            curr = curr->next;
        }
        
        curr = head;
        while(curr->data < tail->data){
            if(curr->data + tail->data > target){
                tail = tail->prev;
            }
            else if(curr->data + tail->data == target){
                v.emplace_back(curr->data, tail->data);
                curr = curr->next;
                tail = tail->prev;
            }
            else{
                curr = curr->next;
            }
        }
        
        return v;
    }
};