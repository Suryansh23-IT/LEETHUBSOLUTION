class Solution {
public:
    int titleToNumber(string columnTitle) {
        int l=columnTitle.size();
        int ans=0;
        for(int i=0;i<l;i++){
            char ch=columnTitle[i];
            int j=ch-'A'+1;
            ans=(ans)*(26)+j;
        }
        return ans;
    }
};