class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single=0,two=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10) single+=nums[i];
            else two+=nums[i];
        }
        if(single==two) return false;
        else return true;
    }
};