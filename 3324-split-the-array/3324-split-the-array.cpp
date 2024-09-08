class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        if(nums.size()%2!=0) return false;
        sort(nums.begin(),nums.end());
        int cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]) {
                cnt++;
                if(cnt>2) return false;
            }
            else{
                cnt=1;
            }
        }
        return true;
    }
};