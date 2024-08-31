class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()<3) return true;
        int prev=nums[0],mid=nums[1],next=nums[2],j;
        for(int i=1;i<nums.size()-1;i++){
            int k=nums[i],p=nums[i+1];
            if(k!=p){
                j=prev;
                prev=nums[i-1];
                mid=nums[i];
                next=nums[i+1];
            }
            if((j>mid and mid<next) or (j<mid and mid>next)){
                return false;
            }
        }
        return true;
    }
};