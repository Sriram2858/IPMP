string reverseWords(string s) {
    string ans;
    string temp;
    for(int i = 0; i < s.size(); i++){
        temp = "";
        while(s[i] != ' ' && i < s.size()){
            temp += s[i];
            i++;
        }
        if(temp.size())
            ans = " " + temp + ans;
    }
    return ans.substr(1);
}
