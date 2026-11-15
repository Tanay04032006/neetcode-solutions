class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();

        int lMax=0,rMax=0,tot=0;
        int l=0,r=n-1;

        while(l<r){
            if(height[l]<height[r]){
                if(lMax>height[l]){
                    tot+=lMax-height[l];
                }
                else{
                    lMax=height[l];
                }
                l++;
            }
            else{
                if(rMax>height[r]){
                    tot+=rMax-height[r];
                }
                else{
                    rMax=height[r];
                }
                r--;
            }
        }
        return tot;
    }
};
