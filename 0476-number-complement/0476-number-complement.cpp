class Solution {
public:
    int  findComplement(int num) {
        int ans=0,shift=0;
        while(num){
            if(!(num&1)){
                ans=ans+(1<<shift);
            }
            num=num>>1;
            shift++;
        }
        return ans;
    }
};