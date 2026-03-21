class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int i=x,p1=x+k-1;
        while(i<p1){
            for(int col=y;col<y+k;col++){
                swap(grid[i][col],grid[p1][col]);
            }
            i++;
            p1--;
        }
        return grid;
    }
};