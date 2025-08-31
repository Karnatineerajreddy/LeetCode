class Solution {
public:

    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        vector<int> dp(m);
        for(int j=0;j<m;j++){
            dp[j]=triangle[m-1][j];
        }
        for(int i=m-2;i>=0;i--){
            vector<int> curr(m);
            for(int j=i;j>=0;j--){
                int down=triangle[i][j]+dp[j];
                int downDia=triangle[i][j]+dp[j+1];
                curr[j]=min(down,downDia);
            }
            dp=curr;
        }
        return dp[0];
    }
};