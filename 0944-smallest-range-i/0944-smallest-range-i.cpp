class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
         return max(0,nums[nums.size()-1]-nums[0]-2*k);
    }
};