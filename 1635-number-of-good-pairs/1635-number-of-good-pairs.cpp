class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0,ans=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                cnt++;
                ans=ans+cnt;
            }
            else{
                cnt=0;
            }
        }

        return ans;
    }
};