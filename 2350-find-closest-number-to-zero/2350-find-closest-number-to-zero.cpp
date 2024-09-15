class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans=INT_MAX,ans2=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans=min(ans,nums[i]);
            }
            else{
                ans2=max(ans2,nums[i]);
            }
        }
        if(abs(ans)<=abs(ans2)) return ans;
        return ans2;
    }
};