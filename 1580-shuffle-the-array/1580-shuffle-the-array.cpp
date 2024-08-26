class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int left=1,right=n;
        vector<int> copy=nums;
        for(int i=1;i<n;i++){
          nums[2*i]=copy[i];
          nums[2*i-1]=copy[n+i-1];
        }
        return nums;
    }
};