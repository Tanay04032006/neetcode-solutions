class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int prevColor,int newColor){
        int n=image.size();
        int m=image[0].size();

        if(sr>=n||sc>=m||sr<0||sc<0|| image[sr][sc]!=prevColor){
            return;
        }
        image[sr][sc]=newColor;
        dfs(image,sr-1,sc,prevColor,newColor);
        dfs(image,sr+1,sc,prevColor,newColor);
        dfs(image,sr,sc-1,prevColor,newColor);
        dfs(image,sr,sc+1,prevColor,newColor);


    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initColor=image[sr][sc];
        if (initColor == color) return image;
       dfs(image,sr,sc,initColor,color);

       return image; 
    }
};