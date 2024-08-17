class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=nums.size(),before=nums[0],cnt=1;
        if(l==1) return nums[0];
        for(int i=1;i<l;i++){
            if(before=nums[i]){
                cnt++;
                before=nums[i];
                if(cnt>l/2){
                    return nums[i];
                }
            }
            else{
                cnt=1;
                before=nums[i];
            }
        }
        return 0;
    }
};