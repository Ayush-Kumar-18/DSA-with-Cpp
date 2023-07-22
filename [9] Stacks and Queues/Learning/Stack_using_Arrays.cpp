// https://www.codingninjas.com/studio/problems/stack-implementation-using-array_3210209

// Stack class.
class Stack {
    int *arr;
    int capacity;
    int t;
public:
    
    Stack(int capacity) {
        // Write your code here.
        this -> capacity = capacity;
        arr = new int[capacity];
        t = -1;
    }

    void push(int num) {
        // Write your code here.
        if(capacity-t > 1){
            arr[++t] = num;
        }
        else return;
    }

    int pop() {
        // Write your code here.
        if(t > -1){
            return arr[t--];
        }
        else{
            return -1;
        }
    }
    
    int top() {
        // Write your code here.
        if(t > -1) return arr[t];
        else return -1;
    }
    
    int isEmpty() {
        // Write your code here.
        return (t== -1) ? 1: 0;
    }
    
    int isFull() {
        // Write your code here.
        return (t==capacity-1) ? 1: 0;
    }
    
};