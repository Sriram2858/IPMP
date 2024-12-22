class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        int temp;
        if (n == 1 || n == 2) return true;
        while(j < n){
            int temp = nums[n - 1];
            for(int k = n-1; k > 0; k--){
                nums[k] = nums[k-1];
            }
            nums[0] = temp;
            int count = 0;
            for(int i = 1; i < n; i++){
                if(nums[i-1] <= nums[i])
                    count++;
            }
            if(count == n-1)
                return true;
            j = j + 1;
        }
        return false;
        // int n=nums.size();
        // int cnt=0;
        // for(int i=1;i<n;i++){
        //     if(nums[i-1]>nums[i]){
        //         cnt++;
        //     }
        // }
        // if(nums[n-1]>nums[0]){
        //     cnt++;
        // }
        // return cnt<=1;
    }
};
