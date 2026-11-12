class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        vector<int> visible;
        int tallest = 0;

        for (int i = static_cast<int>(heights.size()) - 1; i >= 0; --i) {
            if (heights[i] > tallest) {
                visible.push_back(i);
                tallest = heights[i];
            }
        }

        reverse(visible.begin(), visible.end());
        return visible;
    }
};