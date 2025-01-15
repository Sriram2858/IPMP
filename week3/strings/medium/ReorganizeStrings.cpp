string reorganizeString(string s) {
    vector<int> count(26, 0);
    int n = s.size();
    string ans = s;
    for(int i = 0; i < n; i++)
        ++count[s[i] - 'a'];
    int maxCount = *max_element(count.begin(), count.end());
    if(maxCount > (n+1)/2) return "";
    vector<pair<int, int>> v;
    for(int i = 0; i < 26; i++){
        if(count[i]){
            v.push_back({count[i], i});
        }
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int i = 0;
    for(int j = 0; j < v.size(); j++){
        int freq = v[j].first;
        while(freq > 0){
            ans[i] = 'a' + v[j].second;
            i = i + 2;
            freq--;
            if(i>=n)
                i = 1;
        }
    }
    return ans;
}
