void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int i = 0, j = 0;
    while(i < n){
        if(nums[i] != 0){
            nums[j] = nums[i];
            j++;
        }
        i++;
    }
    while(j < n){
        nums[j] = 0;
        j++;
    }
}

/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.*/
