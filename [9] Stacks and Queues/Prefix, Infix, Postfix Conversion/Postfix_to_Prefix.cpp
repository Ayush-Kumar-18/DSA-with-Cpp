// https://www.codingninjas.com/studio/problems/postfix-to-prefix_1788455

#include<bits/stdc++.h>
using namespace std;

string postfixToPrefix(string &s){
    // Write your code here.
    stack<string> st;
	int len = s.size();

	for(int i = 0; i< len; i++){
		char ch = s[i];
		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
			string p(1, ch);
			st.push(p);
		}
		else{
			string A = st.top();
			st.pop();
			string B = st.top();
			st.pop();
			st.push(ch+B+A);
		}
	}

	return st.top();
}