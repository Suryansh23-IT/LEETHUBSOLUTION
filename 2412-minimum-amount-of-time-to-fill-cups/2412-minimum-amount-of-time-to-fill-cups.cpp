class Solution {
public:
    int fillCups(vector<int>& amount) {
        sort(amount.begin(),amount.end());
        int x=amount[0],y=amount[1],z=amount[2];
        return max(z,(x+y+z+1)/2);
    }
};