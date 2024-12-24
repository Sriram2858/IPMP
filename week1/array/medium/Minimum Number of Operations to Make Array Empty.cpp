class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> mp;
        for(int i = 0; i < nums.size(); i++)
            mp[nums[i]]++;
        int minOp = 0;
        for(auto a: mp){
            int f = a.second;
            if(f == 1) return -1;
            else{
                if(f%3 == 0) 
                    minOp += f/3;
                else
                    minOp += (f/3) + 1;
            }
        }
        return minOp;
    }
};
