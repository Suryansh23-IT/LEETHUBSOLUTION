class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int k=0,p=nums[i];
            while(p>0){
                k++;
                p=p/10;
            }
            if(p==0 and k%2==0) cnt++;
        }
        return cnt;
    }
};