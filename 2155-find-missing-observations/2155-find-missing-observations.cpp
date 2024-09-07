class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int> ans;
        int l=rolls.size();
        int total=mean*(n+l);
        int sum=0;
        for(int i=0;i<l;i++){
            sum=sum+rolls[i];
        }
        int left=total-sum;//left
        if(left>6*n or left<n){
            return ans;
        }
        int l_mean=left/n;
        int l_remain=left%n;
        for (int i = 0; i < n; i++) {
            ans.push_back(l_mean);
            if(l_remain>0){
                ans[i]++;
                l_remain--;
            }
        }
        return ans;
    }
};