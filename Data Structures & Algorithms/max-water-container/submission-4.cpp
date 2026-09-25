class Solution {
public:
    int maxArea(vector<int>& heights) {
    int size = heights.size();
    int max = 0;

    int i = 0;
    int j = size - 1;

    while (i < j) {
        int width = j - i;
        int height;

        if (heights[i] == heights[j]) {
            height = heights[j];
        }
        else if (heights[i] > heights[j]) {
            height = heights[j];
        }
        else {
            height = heights[i];
        }

        if (max < width * height) {
            max = width * height;
        }

        if (heights[i] < heights[j]) {
            i++;
        }
        else {
            j--;
        }
    }

    return max;
}
};
