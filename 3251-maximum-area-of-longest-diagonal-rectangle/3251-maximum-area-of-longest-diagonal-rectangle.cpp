class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxdiagonal=0,maxarea=0;
        for(int i=0;i<dimensions.size();i++){
            int k=pow(dimensions[i][0],2)+pow(dimensions[i][1],2);
            int a=dimensions[i][0]*dimensions[i][1];
            if(k>=maxdiagonal){
                if(k==maxdiagonal){
                    if(a>maxarea){
                        maxarea=a;
                        maxdiagonal=k;
                    }
                }else{
                    maxarea=a;
                    maxdiagonal=k;
                }
            }
        }
        return maxarea;
    }
};