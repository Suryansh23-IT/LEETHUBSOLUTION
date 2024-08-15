class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        string str=to_string(x);
        int l=str.length();
        for(int i=0;i<l/2;i++){
            if(str[i]!=str[l-i-1]) return 0;
        }
        return 1;
    }
};