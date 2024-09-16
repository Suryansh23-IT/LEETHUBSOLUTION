class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minindex,maxindex,maxi=INT_MIN,mini=INT_MAX,len=nums.size();
        if(len<=2) return len;
        for(int i=0;i<len;i++){
            if(nums[i]<mini){
                mini=nums[i];
                minindex=i;
            }
            if(maxi<nums[i]){
                maxi=nums[i];
                maxindex=i;
            }
        }
        int leftmini=len-minindex,leftmaxi=len-maxindex;
        int l=max(minindex+1,maxindex+1);
        int r=max(leftmini,leftmaxi);
        int ans=min(l,r);
        ans=min(ans,minindex+leftmaxi+1);
        ans=min(ans,maxindex+leftmini+1);
        return ans;
    }
};