class Solution {
public:
    int minOperations(int n) {
        if(n<3) return n-1;
        int ans=0;
        int m=n/2;
        if(n%2!=0){
            ans=m*(m+1);
        }
        else{
            ans=m*m;
        }
        return ans;
    }
    
};