class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int re=INT_MIN;
        while(l<r){
            int h=r-l;
            int maxp=min(height[l],height[r])*h;
            re=max(re,maxp);
            if(height[l]>height[r])
            r--;
            else
            l++;
        }
        return re;
    }
};