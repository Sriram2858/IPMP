int maxDepth(string s) {
    int max = 0;
    int p = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            p++;
            if(p > max)
                max = p;
        }
        else if(s[i] == ')'){
            p--;
        }
    }
    return max;
}
