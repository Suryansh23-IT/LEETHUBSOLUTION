class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int cnt=1,ans=-1;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                cnt++;
            }
            else{
                if(arr[i]==cnt){
                    ans=max(ans,cnt);
                }
                cnt=1;
            }
        }
        if(arr[arr.size()-1]==cnt){
            ans=max(ans,cnt);
        }
        if(ans!=0) return ans;
        return -1;
    }
};