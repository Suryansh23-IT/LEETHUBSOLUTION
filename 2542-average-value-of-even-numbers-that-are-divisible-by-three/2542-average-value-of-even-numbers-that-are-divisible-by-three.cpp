class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum=0,i=0;
        int cnt=0;
        while(i<nums.size()){
            if(nums[i]%6==0){
                sum+=nums[i];
                cnt++;
            }
            i++;
        }
        if(cnt==0){
            return 0;
        }
        return sum/cnt;
    }
};