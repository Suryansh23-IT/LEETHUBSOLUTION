class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int cnt=1,ans=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]>nums[i]){
                cnt++;
            }
            else{
                cnt=1;
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};