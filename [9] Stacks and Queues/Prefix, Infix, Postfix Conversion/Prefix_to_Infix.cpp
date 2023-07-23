// https://www.codingninjas.com/studio/problems/prefix-to-infix_1215000

#include<bits/stdc++.h>
using namespace std;

string prefixToInfixConversion(string &s){
	// Write your code here.
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
			// string res = "("+A+ch+B+")"; 
			// will give TLE (in gfg) as creating a string object is itself a expensive operation.

			st.push("("+A+ch+B+")");
		}
	}

	return st.top();

}
