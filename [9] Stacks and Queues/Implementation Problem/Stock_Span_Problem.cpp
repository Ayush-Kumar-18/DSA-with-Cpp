// https://leetcode.com/problems/online-stock-span/

#include<bits/stdc++.h>
using namespace std;

class StockSpanner {
public:
    stack<pair<int, int>> st;
    StockSpanner() {
        while(!st.empty()) st.pop();
    }
    
    int next(int price) {
        int cnt = 1;
        while(!st.empty() && st.top().first <= price){
            cnt += st.top().second;
            st.pop();
        }

        st.push({price, cnt});
        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */