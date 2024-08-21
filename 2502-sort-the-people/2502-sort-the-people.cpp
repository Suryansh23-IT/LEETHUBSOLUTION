class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int l=heights.size();
        vector<int> arr(l);
        vector<string> copy(l);
        for (int i=0; i < l; i++) {
            int cnt = 0;
            for (int j = 0; j < l; j++) {
                if (heights[j] > heights[i]) {
                    cnt++;
                }
                else if (heights[j] == heights[i]) {
                    if(i<j) cnt++;
                }
            }
            arr[i]=cnt;
        }
        
        for(int i=0;i<l;i++) {
            int str=arr[i];
            copy[str]=names[i];
        }
        return copy;
    }
};