class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        for(int i=1;i<nums.size()+1;i++){
            ans=ans^nums[i-1]^i;
        }
        return ans;
    }
};