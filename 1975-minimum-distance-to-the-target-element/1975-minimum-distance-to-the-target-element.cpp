class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
    int n= nums.size();
    int ans1=n,ans2=n;

    for (int i=start;i<n;i++) {
        if(nums[i]==target){
            ans1=i;
            break;
        }
    }

    for (int i=start;i>= 0;i--) {
        if(nums[i]==target) {
            ans2=i;
            break;
        }
    }
    int distance1 = (ans1 < n) ? abs(ans1 - start) : n;
    int distance2 = (ans2 < n) ? abs(start - ans2) : n;
        return std::min(distance1, distance2);
    }
};