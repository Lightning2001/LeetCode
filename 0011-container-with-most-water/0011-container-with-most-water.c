int min(int a, int b) {
    return a < b ? a : b;
}

int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int maxarea = 0;
    
    while (left < right) {
        int areatemp = (right - left) * min(height[left], height[right]);
        if (areatemp > maxarea) {
            maxarea = areatemp;
        }
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    
    return maxarea;
}
