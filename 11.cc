class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        int left = 0, right = len - 1;
        int area = 0;
        while(left < right) {
            area = max(area, min(height[left], height[right]) * (right - left));
            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return area;
    }
    int max(int a, int b) {
        return a > b ? a : b;
    }
    int min(int a, int b) {
        return a > b ? b : a;
    }
};
