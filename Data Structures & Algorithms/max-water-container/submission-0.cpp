class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVol =0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            
            int volume=(right-left)*min(height[left],height[right]);
            maxVol=max(maxVol,volume);

             if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxVol;
    }
};