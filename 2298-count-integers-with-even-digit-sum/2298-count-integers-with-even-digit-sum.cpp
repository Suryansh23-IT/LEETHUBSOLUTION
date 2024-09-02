class Solution {
public:
    int countEven(int num) {
    int k=num,ans=0;
    while(k>0){
        ans=ans+k%10;
        k=k/10;
    }
     if(ans%2==0) return num/2;
     else return (num-1)/2;   
    }
};