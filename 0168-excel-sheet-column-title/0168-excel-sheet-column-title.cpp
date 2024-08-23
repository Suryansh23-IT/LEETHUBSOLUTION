class Solution {
public:
    string convertToTitle(int columnNumber) {
        string str;
        vector<char> rev;
        while(columnNumber>0){
            columnNumber--;
            char ch=65+(columnNumber)%26;
            columnNumber/=26;
            rev.push_back(ch);
        }
        for(int j=rev.size()-1;j>=0;j--){
            str=str+rev[j];
        }
        return str;
    }
};