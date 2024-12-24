int maxProfit(vector<int>& prices) {
    // stack<int> st;
    // int n = prices.size();
    // int profit = 0;
    // int max = prices[n - 1];
    // st.push(prices[n - 1]);
    // for(int i = n - 2; i >= 0; i--){
    //     if(prices[i] >= st.top()){
    //         int s = st.top();
    //         st.pop();
    //         if(!st.empty()){
    //             profit += (st.top() - s);
    //             st.pop();
    //         }
    //         st.push(prices[i]);
    //         max = prices[i];
    //     }
    //     else{
    //         if(st.top() > prices[i] && (st.top()!=max)){
    //             st.pop();
    //             st.push(prices[i]);
    //         }
    //         else{
    //             st.push(prices[i]);
    //         }
    //     }
    // }
    // if(st.size() > 1){
    //     int p = st.top();
    //     st.pop();
    //     profit += (st.top() - p);
    // }
    // return profit;

    int profit = 0;
    
    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
        }
    }
    
    return profit;
}
