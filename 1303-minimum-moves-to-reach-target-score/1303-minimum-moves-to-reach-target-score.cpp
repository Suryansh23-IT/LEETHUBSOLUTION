class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int num=1;
        if(target<=3){
            return target-1;
        }
        int cnt=1;
        num++;
        while(num*2<=target and maxDoubles!=0){
            maxDoubles--;
            cnt=cnt+1+target%2;
            target=target/2;
        }
        cnt=cnt+(target-num);
        return cnt;
    }
};