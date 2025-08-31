class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> dp(n);
        for(int i=0;i<m;i++){
            vector<int> temp(n);
            for(int j=0;j<n;j++){
                if(i==0 && j==0) temp[j]=grid[i][j];
                else{
                    int up   = (i > 0) ? dp[j] : INT_MAX;
                    int left = (j > 0) ? temp[j-1] : INT_MAX;
                    temp[j] = grid[i][j] + min(up, left);
                }
            }
            dp=temp;
        }
        return dp[n-1];
    }
};