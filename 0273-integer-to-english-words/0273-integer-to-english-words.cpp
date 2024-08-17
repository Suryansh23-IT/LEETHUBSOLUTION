class Solution {
public:
    string numberToWords(int num) {
        string ans="";
        if(num==0) return "Zero";
        vector<string> one={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
        vector<string> ten={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
        vector<string> ty={"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
        string hund="Hundred";
        string thou="Thousand";
        string mill="Million";
        string billion="Billion";
        int hundred,tens,ones;
        if(num>=1000000000){
            int billions=num/1000000000;
            ans=ans+one[billions]+" "+billion;
            num=num%1000000000;
            if(num==0) return ans;
            else ans=ans+" ";
        }
        if(num>=1000000){
            int millions=num/1000000;
            hundred=(millions/100)%10;
            tens=(millions/10)%10;
            ones=millions%10;
            if(hundred>0) ans=ans+one[hundred]+" "+hund+ " ";
            if(tens>=2){ 
                ans=ans+ty[tens-2]+" ";
                if(ones!=0) ans=ans+one[ones]+" ";
            }
            else{
                if(tens==1) ans=ans+ten[ones] +" ";
                else if(ones!=0){
                    ans=ans+one[ones]+" ";
                }
            }
            num=num%1000000;
            if(num>0) ans=ans+mill+" ";
            else {
                ans=ans+mill;
                return ans;
            }
        }
        if(num>=1000){
            int thousands=num/1000;
            hundred=(thousands/100)%10;
            tens=(thousands/10)%10;
            ones=thousands%10;
            if(hundred>0) ans=ans+one[hundred]+" "+hund+ " ";
            if(tens>=2){ 
                ans=ans+ty[tens-2]+ " ";
                if(ones!=0) ans=ans+one[ones]+" ";
            }
            else{
                if(tens==1) ans=ans+ten[ones] +" ";
                else if(ones!=0){
                    ans=ans+one[ones]+" ";
                }
            }
            num=num%1000;
            if(num>0) ans=ans+thou+" ";
            else ans=ans+thou;
        }   
        if(num>0){
            hundred=(num/100)%10;
            tens=(num/10)%10;
            ones=num%10;
            if(num%100==0) {
            ans=ans+one[hundred]+" "+hund;
            return ans;
            }
            if(hundred>0) {ans=ans+one[hundred]+" "+hund+" ";}
            if(tens>=2){ 
                ans=ans+ty[tens-2];
                if(ones>0) ans=ans+" ";
                if(ones!=0) ans=ans+one[ones];
            }
            else{
                if(tens==1) ans=ans+ten[ones];
                else if(ones!=0){
                    ans=ans+one[ones];
                }
            }
        }
        return ans;
    }
};