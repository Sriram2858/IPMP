vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> r(n, 1); //initialize integer vector of size n with all elements as 1

    for(int i = 1; i < n; i++)
        r[i] = r[i - 1]*nums[i - 1];
    
    int Suffix = 1;
    for(int i = n - 2; i >= 0; i--){
        Suffix *= nums[i + 1];
        r[i] *= Suffix;
    }
    return r;
}
