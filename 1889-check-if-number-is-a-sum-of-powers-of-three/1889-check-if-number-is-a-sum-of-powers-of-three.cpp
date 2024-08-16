class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>1){
            if(n%3==2) return 0;
            else if(n%3==0){
                n=n/3;
            }
            else if(n%3==1){
                n=n-1;
                n=n/3;
            }
        }
        return 1;
    }
};