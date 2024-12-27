int findMin(vector<int>& nums) {
    int n = nums.size();
    int l = 0, h = n - 1;
    int min;
    while(l <= h){
        int m = l + (h - l)/2;
        if(nums[m] <= nums[n - 1]){
            min = nums[m];
            h = m - 1;
        }
        else l = m + 1;
    }
    return min;
}
