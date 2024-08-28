class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,digit=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            int k=0,p=nums[i];
            while(p>0){
                k=p%10;
                digit=digit+k;
                p=p/10;
            }
        }
        return abs(sum-digit);
    }
};