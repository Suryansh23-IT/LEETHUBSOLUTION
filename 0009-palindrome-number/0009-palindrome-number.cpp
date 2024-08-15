class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        int org=x,rev=0;
        while(x>0){
            if(rev>INT_MAX/10) return 0;
            int digit=x%10;
            rev=rev*10+digit;
            x=x/10;
        }
        if(org==rev){
            return 1;
        }
        return 0;
    }
};