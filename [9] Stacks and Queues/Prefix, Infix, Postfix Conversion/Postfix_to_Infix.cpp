// https://www.codingninjas.com/studio/problems/postfix-to-infix_8382386

#include<bits/stdc++.h>
using namespace std;

string postToInfix(string postfix) {
    // Write your code here.
    stack<string> st;

    for(char i: postfix){
        if((i >= 'a' && i<='z') || (i >= 'A' && i <= 'Z')){
            string p(1, i);
            st.push(p);
        }
        else{
            string A = st.top();
            st.pop();
            string B = st.top();
            st.pop();
            // string res = "("+B+i+A+")"; 
            // will give TLE (in gfg) as creating a string object is itself a expensive operation.

            st.push("("+B+i+A+")");
        }
    }
    
    return st.top();
}