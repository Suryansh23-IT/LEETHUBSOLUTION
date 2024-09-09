class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(),1);
        return digits;

        // long long num=0;
        // for(int i=0;i<digits.size();i++){
        //     num=num*10+digits[i];
        // }
        // num++;
        // vector<int> ans;
        // while(num>0){            interange over....
        //     int k=num%10;
        //     ans.push_back(k);
        //     num=num/10;
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;
    }
};