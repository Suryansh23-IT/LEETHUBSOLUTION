class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0, i=s.length()-1;
        while(s[i]==' '){
            i--;
        }
        while(i>=0){
            if(s[i]!=' ') {
                 cnt++;i--;
            }
            else return cnt;
        }
        return cnt;
    }
};