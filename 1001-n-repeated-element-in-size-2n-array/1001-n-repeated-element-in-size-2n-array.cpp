class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
    //     int n=nums.size();
    //     sort(nums.begin(),nums.end());
    //     if(nums[(n-1)/2]==nums[n/2]) return nums[n/2];
    //     else if(nums[(n-3)/2]==nums[(n-1)/2]) return nums[(n-1)/2];
    //     else return nums[(n+3)/2];

        for (int i = 0; i < nums.size() - 2; ++i)
            if (nums[i] == nums[i + 1] || nums[i] == nums[i + 2])
                return nums[i];
        return nums.back(); 
    }
};