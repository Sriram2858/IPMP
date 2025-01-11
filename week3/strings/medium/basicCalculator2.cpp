int prec(string str){
    if(str == "+" || str == "-")
        return 1;
    if(str == "*" || str == "/")
        return 2;
    return -1;
}
int calculate(string s) {
    stack<string> st;
    int n = s.size();
    string s1;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ')
            continue;
        else if (isdigit(s[i])) {
            while (i < n && isdigit(s[i])) {
                s1 += s[i];
                i++;
            }
            s1 += ' '; 
            i--;
        } 
        else {
            while (!st.empty() && prec(string(1, s[i])) <= prec(st.top())) {
                s1 += st.top() + " ";
                st.pop();
            }
            st.push(string(1, s[i]));
        }
    }

    while (!st.empty()) {
        s1 += st.top() + " ";
        st.pop();
    }

    stack<int> st1;
    for (int i = 0; i < s1.size(); i++) {
        if (isdigit(s1[i])) {
            int num = 0;
            while (i < s1.size() && isdigit(s1[i])) {
                num = num * 10 + (s1[i] - '0');
                i++;
            }
            st1.push(num);
        } 
        else if (s1[i] != ' ') {
            int x = st1.top(); st1.pop();
            int y = st1.top(); st1.pop();
            int ans;
            switch (s1[i]) {
                case '+': ans = y + x; break;
                case '-': ans = y - x; break;
                case '*': ans = y * x; break;
                case '/': ans = y / x; break;
            }
            st1.push(ans);
        }
    }
    return st1.top();
}
