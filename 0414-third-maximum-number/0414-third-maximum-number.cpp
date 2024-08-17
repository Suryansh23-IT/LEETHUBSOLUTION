class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=nums.size(),cnt=1,j=nums[l-1];
        if(l<3) return nums[l-1];
        for(int i=l-2;i>=0;i--){
            if(nums[i]!=j){
                cnt++;
                if(cnt==3) return nums[i];
                j=nums[i];
            }
        }
        return nums[l-1];
    }
};