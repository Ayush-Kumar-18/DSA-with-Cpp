// https://www.codingninjas.com/studio/problems/convert-prefix-to-postfix_8391014

#include<bits/stdc++.h>
using namespace std;

string preToPost(string s) {
    // Write Your Code Here
    stack<string> st;
	int len = s.size();

	for(int i = len-1; i>=0; i--){
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
			st.push(A+B+ch);
		}
	}

	return st.top();
}