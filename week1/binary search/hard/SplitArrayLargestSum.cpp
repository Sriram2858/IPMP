bool findSubarray(vector<int>& nums, int n, int k, int sum){
    int c = 1;
    int s = 0;
    for(int i = 0; i < n; i++){
        if(sum < nums[i]){
            return false;
        }
        if(s + nums[i] > sum){
            c++;
            s = nums[i];
            if(c > k)
                return false;
        }
        else{
            s += nums[i];
        }
    }
    return true;
}
int splitArray(vector<int>& nums, int k) {
    int n = nums.size();
    int l = 0;
    int h = accumulate(nums.begin(), nums.end(), 1);
    int ans = 0;
    while(l <= h){
        int mid = l + (h - l)/2;
        if(findSubarray( nums, n, k, mid)){
            ans = mid;
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return ans;
}
