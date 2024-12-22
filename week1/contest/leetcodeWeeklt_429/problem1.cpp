int minimumOperations(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    while(n > 0){
        int flag = 0;
        for(int i = 0; i < n-1; i++){
            for(int j = i + 1; j < n; j++){
                if(nums[i] == nums[j]){
                    flag = 1;
                    break; 
                }
            }
            if(flag == 1)
                break;
        }
        if(flag == 0)
            return count;
        else{
            if(n >= 3){
                for(int i = 0; i < n - 3; i++)
                    nums[i] = nums[i + 3];
                n = n - 3;
                count++;
            }
            else
                return count + 1;
        }
    }
    return count;
}

/*You are given an integer array nums. You need to ensure that the elements in the array are distinct. To achieve this, you can perform the following operation any number of times:

Remove 3 elements from the beginning of the array. If the array has fewer than 3 elements, remove all remaining elements.
Note that an empty array is considered to have distinct elements. Return the minimum number of operations needed to make the elements in the array distinct.

Example 1:

Input: nums = [1,2,3,4,2,3,3,5,7]
Output: 2

Explanation:
In the first operation, the first 3 elements are removed, resulting in the array [4, 2, 3, 3, 5, 7].
In the second operation, the next 3 elements are removed, resulting in the array [3, 5, 7], which has distinct elements.*/
