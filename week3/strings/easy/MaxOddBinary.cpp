string maximumOddBinaryNumber(string s) {
    int n = s.size();
    int count = 0;
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == '1')
            count++;
        s[i] = '0';
    }
    s[n - 1] = '1';
    for(int i = 0; i < count - 1; i++){
        s[i] = '1';
    }
    return s;
}
