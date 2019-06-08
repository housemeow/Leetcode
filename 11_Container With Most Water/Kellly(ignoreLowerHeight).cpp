class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0,
            l = 0, r = height.size() - 1;
        
        while(l < r) {
            int h = min(height[l], height[r]),
                area = h * (r - l);
            
            if (area > maxArea) maxArea = area;
            
            while(l < r && h >= height[l]) l++; // find higher h
            while(l < r && h >= height[r]) r--; // find higher h
        }
                        
        return maxArea;
    }
};
