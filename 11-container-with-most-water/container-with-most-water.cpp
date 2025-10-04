class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int low=0,right=n-1;
        int mini=0;

        int area=0;
        while(low<right){
            mini=min(height[low],height[right]);
            area=max(area,mini*(right-low));
            if(height[low]<height[right]){
                low=low+1;
            }
            else right--;
        }
        return area;
    }
};