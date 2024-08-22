class Solution {
public:
    int strStr(string haystack, string needle) {
        int L=haystack.length(),l=needle.length();
        int index=-1;
        for(int i=-1;i<L;i){
            start:
            i++;
            if(needle[0]==haystack[i]){
                index=i;
                for(int j=1;j<l;j++){
                    if(haystack[i+j]!=needle[j]){
                        index=-1;
                        goto start;
                    }
                }
                return index;
            }
        }
        return index;
    }
};