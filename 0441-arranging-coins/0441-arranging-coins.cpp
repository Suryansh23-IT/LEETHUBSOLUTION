class Solution {
public:
    int arrangeCoins(int n) {
    int cnt=0;
    int i=1;
    while(n>0){
        n=n-i-1;
        cnt++;
        i++;
        }
        return cnt;
    }
};