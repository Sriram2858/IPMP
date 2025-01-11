string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 1)
        return strs[0];
    string common;
    int size = min(strs[0].size(), strs[1].size());
    for(int i = 0 ; i < size; i++){
        if(strs[0][i] == strs[1][i])
            common += strs[0][i];
        else 
            break;
    }
    for(int i = 2; i < strs.size(); i++){
        int j;
        for(j = 0; j < common.size(); j++)
            if(common[j] != strs[i][j])
                break;
        if(j == 0){
            return "";
        }
        common = common.substr(0, j);
    }
    return common;
}
