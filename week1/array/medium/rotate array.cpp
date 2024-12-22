void rotate(vector<int>& nums, int k) {
    int i;
    int n = nums.size();
    k = n - (k%n);
    int nums2[k];
    for(i = 0; i < k; i++)
        nums2[i] = nums[i];
    while(i < n){
        nums[i - k] = nums[i];
        i++;
    }
    for(i = n - k; i < n; i++)
        nums[i] = nums2[i - (n- k)];
    // k = k % nums.size();
    // reverse(nums.begin(), nums.end() - k);
    // reverse(nums.end() - k, nums.end());
    // reverse(nums.begin(), nums.end());
}

/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.*/
