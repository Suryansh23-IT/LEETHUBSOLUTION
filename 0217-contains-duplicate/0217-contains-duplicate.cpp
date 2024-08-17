class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count=1,l=nums.size();
        if(l==1) return 0;
        sort(nums.begin(),nums.end());
        int prev =nums[0];
        for(int i=1;i<l;i++){
            if(nums[i]==prev) return 1;
            else{
                prev=nums[i];
            }
        }
        return 0;
    }
};