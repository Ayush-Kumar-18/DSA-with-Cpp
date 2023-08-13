// https://leetcode.com/problems/lru-cache/

#include<bits/stdc++.h>
using namespace std;

class LRUCache {
public:
    class node{
        public:
        int key, val;
        node* next;
        node* prev;

        node(int k, int v){
            key = k;
            val = v;
        }
    };
    node * head = new node(-1, -1);
    node * tail = new node(-1, -1);

    int c;
    unordered_map<int, node*> mpp;

    LRUCache(int capacity) {
        c = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void addNode(node * temp){
        node * nex = head->next;
        temp->next = nex;
        temp->prev = head;
        nex->prev = temp;
        head->next = temp;
    }

    void deleteNode(node * temp){
        node * delPrev = temp->prev;
        node * delNext = temp->next;
        delPrev->next = delNext;
        delNext->prev = delPrev;
    }
    
    int get(int key_) {
        if (mpp.find(key_) != mpp.end()) {
            node * resnode = mpp[key_];
            int res = resnode -> val;
            mpp.erase(key_);
            deleteNode(resnode);
            addNode(resnode);
            mpp[key_] = head -> next;
            return res;
        }

        return -1;
    }
    
    void put(int key_, int value) {
        if (mpp.find(key_) != mpp.end()) {
            node * existingnode = mpp[key_];
            mpp.erase(key_);
            deleteNode(existingnode);
        }
        if (mpp.size() == c) {
            mpp.erase(tail -> prev -> key);
            deleteNode(tail -> prev);
        }

        addNode(new node(key_, value));
        mpp[key_] = head->next;
    }
};

// TLE 
// class LRUCache {
// public:
//     int m;
//     deque<int> dq;
//     unordered_map<int, int> mpp;
//     LRUCache(int capacity) {
//         m = capacity;
//     }
    
//     int get(int key) {
//         if(!mpp.count(key)) return -1;
 
//         auto itr = find(dq.begin(), dq.end(), key);
//         dq.erase(itr);
//         dq.push_front(key);
        
//         return mpp[key];
//     }
    
//     void put(int key, int value) {
//         if(!mpp.count(key)){
//             if(dq.size() == m){
//                 mpp.erase(dq.back());
//                 dq.pop_back();

//                 mpp[key] = value;
//                 dq.push_front(key);
//             }
//             else{
//                 dq.push_front(key);
//                 mpp[key] = value;
//             }
//         }
//         else {
//             auto itr = find(dq.begin(), dq.end(), key);
//             dq.erase(itr);
//             dq.push_front(key);
//             mpp[key] = value;
//         }
//     }
// };

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */