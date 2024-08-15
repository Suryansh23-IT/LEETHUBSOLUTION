class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        for(int i=0;i<details.size();i++){
            if(details[i][11]>='6' and details[i][12]>='0' ) {
               if(details[i][11]=='6' and details[i][12]=='0'){}
               else cnt++;
            }
        }
        return cnt;
        
    }
};