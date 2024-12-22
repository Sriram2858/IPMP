int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    vector<int> result;
    int j = 0, i = 0;
    while(i < n){
        result.push_back(nums[i]);
        while(j < n && nums[i] == nums[j]){
            j++;
        }
        i = j;
    }
    for(int i = 0;i < result.size(); i++){
        nums[i] = result[i];
    }
    return result.size();
}

/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.*/
