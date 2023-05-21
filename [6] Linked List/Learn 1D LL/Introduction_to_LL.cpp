// https://practice.geeksforgeeks.org/problems/introduction-to-linked-list/1

#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Solution
{
public:
    Node *constructLL(vector<int> &arr)
    {
        Node *head = new Node(arr[0]);
        Node *curr = head;

        for (int i = 1; i < arr.size(); i++)
        {
            Node *n = new Node(arr[i]);
            curr->next = n;
            curr = curr->next;
        }

        return head;
    }
};