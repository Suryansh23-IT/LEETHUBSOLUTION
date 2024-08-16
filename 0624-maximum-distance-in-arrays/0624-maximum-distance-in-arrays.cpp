class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int l=arrays.size();
        vector<int>mini(l),maxi(l);
        for(int i=0;i<l;i++){
            mini[i]=arrays[i][0];
            maxi[i]=arrays[i].back();
        }
        int min1=INT_MAX,min2=INT_MAX;
        int max1=INT_MIN,max2=INT_MIN;
        int i1=-1,i2=-1,j1=-1,j2=-1;
        for(int i=0;i<l;i++){
            if(maxi[i]>max1){
                max2=max1;
                i2=i1;
                max1=maxi[i];
                i1=i;
            }
            else if(maxi[i]>max2){
                max2=maxi[i];
                i2=i;
            }
            if(mini[i]<min1 ){
                min2=min1;
                j2=j1;
                min1=mini[i];
                j1=i;
            }
            else if(mini[i]<min2){
                min2=mini[i];
                j2=i;
            }
        }
        if(i1!=j1){
            return abs(min1-max1);
        }
        else{
           return  max(abs(min1-max2),abs(min2-max1));
        }
    }
};