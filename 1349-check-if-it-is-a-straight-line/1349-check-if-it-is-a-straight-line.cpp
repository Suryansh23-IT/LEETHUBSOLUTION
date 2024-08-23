class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        //y-y1=m(x-x1)
        int  y1=coordinates[1][1],y0=coordinates[0][1];
        int  x0=coordinates[0][0],x1=coordinates[1][0];
        int dy=y1-y0,dx=x1-x0;
        for(int j=2;j<coordinates.size();j++){
            int x=coordinates[j][0];
            int y=coordinates[j][1];
            if(dx*(y-y1)!=dy*(x-x1)) return false;
        }
        return true;
    }
};