class Solution {
public:
    int reverse(long x) {
        int ans=0,k;
        while(x!=0){
            k=x%10;
            if(ans>INT_MAX/10 or ans<INT_MIN/10) return 0;
            ans=ans*10+k;
            x=x/10;
            }
        return ans;
    }
};