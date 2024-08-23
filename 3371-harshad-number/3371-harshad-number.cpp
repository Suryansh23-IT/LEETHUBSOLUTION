class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int digit=0,y=x;
        while(y>0){
            digit=digit+y%10;
            y=y/10;
        }
        if(x%digit==0 ) return digit;
        else return -1;
    }
};