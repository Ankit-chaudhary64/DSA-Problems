class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=0; 
        int l =0 ;
        int r=height.size()-1;
        while(l<r){
            int w =r-l;
            int minu =min(height[l],height[r]);
            int current=w*minu;
            maxi=max(maxi,current);
            (height[l]==minu) ? l++:r--;
        }
        return maxi;
    }
};