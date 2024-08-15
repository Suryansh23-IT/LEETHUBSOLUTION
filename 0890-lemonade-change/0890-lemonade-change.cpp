class Solution {
public:
    bool lemonadeChange(vector<int> bills) {
        int l=bills.size();       
        if(bills[0]!=5) return 0;
        int five=1,ten=0;
        for(int i=1;i<l;i++){
            if(bills[i]==5) {
                five++;
            }
            else if(bills[i]==10){
                if(five>0){
                ten++;
                five--;
                }
                else return 0;
            }
            else{
                if((five<=0) or ( 5*five + 10*ten<15)) return 0;
                 if(ten==0) five=five-3;
                 else{
                    ten--;
                    five--;
                }
            }
        }
        return 1;
    }
};