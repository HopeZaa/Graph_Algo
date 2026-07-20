class Solution {
  public:
    bool vi[501][501];
    void recur(int i, int j, vector<vector<int>>& grid, int tar, int r, int c, int n){
        if(i < 0 or i >= r or j < 0 or j >= c){
            return;
        }
        if(grid[i][j] != tar){
            return;
        }
        if(vi[i][j]){
            return;
        }
        vi[i][j] = true;
        if(grid[i][j] == tar){
            grid[i][j] = n;
        }
        recur(i + 1, j, grid, tar, r, c, n);
        recur(i - 1, j, grid, tar, r, c, n);
        recur(i, j + 1, grid, tar, r, c, n);
        recur(i, j - 1, grid, tar, r, c, n);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        memset(vi, false, sizeof(vi));
        int r = image.size(), c = image[0].size();
        recur(sr, sc, image, image[sr][sc], r, c, newColor);
        return image;
    }
};
