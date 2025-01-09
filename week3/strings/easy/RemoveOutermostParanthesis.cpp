string removeOuterParentheses(string s) {
    string ans;
    int p = 0, i;
    int start = 0;
    for(i = 0; i < s.size(); i++){
        if(s[i] == '(') p++;
        else if(s[i] == ')') p--;
        if(p == 0){
            ans = ans + s.substr(start + 1, i - start - 1);
            start = i + 1;
        }
    }
    return ans;
}
