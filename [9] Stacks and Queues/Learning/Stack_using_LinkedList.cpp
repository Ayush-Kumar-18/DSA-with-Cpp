// https://www.codingninjas.com/studio/problems/implement-stack-with-linked-list_1279905

#include<bits/stdc++.h>
using namespace std;

// Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
    //Write your code here
    Node * top;
    int size;

public:
    Stack()
    {
        //Write your code here
        top = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        //Write your code here
        return top == NULL;
    }

    void push(int data)
    {
        //Write your code here
        Node * ele = new Node(data);
        ele->next = top;
        top = ele;
        size++;
    }

    void pop()
    {
        //Write your code here
        if(top == NULL){
            return;
        }
        else{
            Node * dl = top;
            top = top->next;
            dl->next = NULL;
            delete(dl);
            size--;
        }
    }

    int getTop()
    {
        //Write your code here
        if(top == NULL){
            return -1;
        }
        else{
            return top->data;
        }
    }
};