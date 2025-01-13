string simplifyPath(string path) {
    string curr, ans;
    stack<string> st;
    for(int i = 0; i < path.size();){
        while (i < path.size() && path[i] == '/') i++;
        curr.clear();
        while (i < path.size() && path[i] != '/') {
            curr += path[i++];
        }
        if (curr == "..") {
            if (!st.empty()) st.pop();
        } else if (!curr.empty() && curr != ".") {
            st.push(curr);
        }
    }
    if(st.empty())
        return "/";
    while(!st.empty()){
        curr = st.top();
        ans = "/" + curr + ans;
        st.pop();
    }
    return ans;
}
