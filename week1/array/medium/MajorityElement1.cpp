int majorityElement(vector<int>& nums) {
    int n = nums.size();
    map<int, int> mp;
    for(int i = 0; i < n; i++)
        mp[nums[i]]++;
    for(auto a: mp){
        int f = a.second;
        if((n/2) < f)
            return a.first;
    }
    return -1;
}
