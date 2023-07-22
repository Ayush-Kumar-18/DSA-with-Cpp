// https://www.codingninjas.com/studio/problems/implement-queue-using-linked-list_8161235

#include<bits/stdc++.h>
using namespace std;

// Definition of linked list
class Node {
 
public:
    int data;
    Node* next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node* next) : data(x), next(next) {}
};
 
// Definition of Queue
struct Queue {
  Node* front;
  Node* rear;
  void push(int);
  int pop();
  
  Queue() {
    front = rear = NULL;
  }
};

void Queue::push(int x) {
    // Write Your Code Here
    Node * ele = new Node(x);
    if(front == NULL){
        rear = ele;
        front = ele;
    }
    else{
        rear->next = ele;
        rear = ele;
    }
}

int Queue::pop() {
    // Write Your Code Here
    if(front == NULL){
        return -1;
    }
    else{
        Node * res = front;
        int r = res->data;
        front = front->next;
        res->next = NULL;
        delete(res);
        return r;
    }
}