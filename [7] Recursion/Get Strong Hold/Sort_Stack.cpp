// https://practice.geeksforgeeks.org/problems/sort-a-stack/1

#include <bits/stdc++.h>
using namespace std;

/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void insert(stack<int> &s, int temp){
    if(s.empty() || s.top() <= temp){
        s.push(temp);
        return;
    }
    
    int val = s.top();
    s.pop();
    insert(s, temp);
    s.push(val);
    return;
}

void SortedStack :: sort()
{
    // Recursive
    if(s.size() == 1) return;
    
    int temp = s.top();
    s.pop();
    
    sort();
    insert(s, temp);
    return;
   
    // iterative
    // vector<int> v;
    // while(!s.empty()){
    //     // cout<<s.top()<<"..";
    //     v.push_back(s.top());
    //     s.pop();
    // }
    
    // std::sort(v.begin(), v.end());
    
    // for(int i = 0; i < v.size(); i++){
    //     // wcout<<v[i]<<">";
    //     s.push(v[i]);
    // }
}