int calPoints(vector<string>& operations) {
    stack<int> st;
    int sum = 0;
    for(int i = 0 ; i < operations.size(); i++){
        if(operations[i] == "C")
            st.pop();
        else if(operations[i] == "D"){
            int x = st.top();
            st.push(x*2);
        }
        else if(operations[i] == "+"){
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            st.push(y);
            st.push(x);
            st.push(x+y);
        }
        else
            st.push(stoi(operations[i]));
    }
    while(!st.empty()){
        sum += st.top();
        st.pop();
    }
    return sum;
}
