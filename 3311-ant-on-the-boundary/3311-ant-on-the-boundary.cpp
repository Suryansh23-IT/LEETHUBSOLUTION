class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int cross=0,sum =nums[0];
        for(int i=1;i<nums.size();i++){
            sum=sum+nums[i];
            if(sum==0) cross++; 
        }
        return cross;
    }
};