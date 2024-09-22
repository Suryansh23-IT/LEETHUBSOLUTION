class Solution {
public:
    int pivotInteger(int n) {
        int sumn=(n*n+n)/2;
        float sqr=sqrt(sumn);
        if(sqr-ceil(sqr)==0) return sqr;
        else return -1;
    }
};