class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int prev=0,curr=1;
        for(int i=0;i<n-1;i++){
            int k=curr;
            curr=prev+curr;
            prev=k;
        }
        return curr;
    }
};