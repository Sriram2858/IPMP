int lenOfLongestSubarr(vector<int>& arr, int k) {
    map<int, int> prefixMp;
    int n = arr.size();
    int maxLen = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum == k){
            maxLen = i + 1;
        }
        int rem = sum - k;
        if(prefixMp.find(rem) != prefixMp.end()){
            int len = i - prefixMp[rem];
            maxLen = max(maxLen, len);
        }
        if(prefixMp.find(sum) == prefixMp.end()){
            prefixMp[sum] = i;
        }
    }
    return maxLen;
}
