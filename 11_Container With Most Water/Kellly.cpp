class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        
        for (int i = 0; i < height.size() - 1; i++) {
            int h = height[i];
            if ((height.size() - i) * h < maxArea) continue;
            
            for (int j = i + 1; j < height.size(); j++) {
                int minH = h < height[j] ? h : height[j],
                    area = (j - i) * minH;
                if (area > maxArea) {
                    maxArea = area;
                }
            }
        }
        
        return maxArea;
    }
};
