class Solution {
public:
    bool isPowerOfTwo(int n) {
        int cnt=0;
        while(n>0){
            if(n%2==1) cnt++;
            n=n/2;
        }
        if(cnt==1) return 1;
        else return 0;
    }
};