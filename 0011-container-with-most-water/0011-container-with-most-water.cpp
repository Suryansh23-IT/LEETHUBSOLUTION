class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=height.size();
        int area=0;
        int left=0,right=l-1;
        while(left<right){
            int h=min(height[left],height[right]);
            area=max(area,h*(right-left));
            if(height[left]>height[right] ) right--;
            else if(height[left]<=height[right])left++;
        }
        return area;
    }
};