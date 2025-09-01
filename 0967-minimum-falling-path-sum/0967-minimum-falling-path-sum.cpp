class Solution {
public:

    int minFallingPathSum(vector<vector<int>>& matrix) {

        int n=matrix.size(),m=matrix[0].size();
        vector<int> dp(m);
        int mini=1e8;
        for(int i=0;i<m;i++){
            dp[i]=matrix[0][i];
        }
        for(int i=1;i<n;i++){
            vector<int> curr(m);
            for(int j=0;j<m;j++){
                int u=matrix[i][j]+dp[j];
                int rd=matrix[i][j];
                if(j+1<m) rd+=dp[j+1];
                else rd=1e9;
                int ld=matrix[i][j];
                if(j-1>=0) ld+=dp[j-1];
                else ld=1e9;
                curr[j]=min(u,min(ld,rd));
            }
            dp=curr;
        }


        for(int i=0;i<m;i++){
            mini=min(mini,dp[i]);
        }
        return mini;
    }
};