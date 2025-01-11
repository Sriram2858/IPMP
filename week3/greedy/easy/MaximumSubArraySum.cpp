int maxSubArray(vector<int>& nums) {
    int maxi = -1e4;
    int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        if(sum < 0)
            sum = nums[i];
        else
            sum += nums[i];
        maxi = max(maxi, sum);
    }
    return maxi;
}
