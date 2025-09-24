class Solution {
public:

    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size(),vector<int>(amount+1,0));
        for(int t=0;t<=amount;t++){
            if(t%coins[0]==0) dp[0][t]=t/coins[0];
            else dp[0][t]=1e9;
        }
        for(int i=1;i<coins.size();i++){
            for(int j=0;j<=amount;j++){
                int notPick=dp[i-1][j];
                int pick=INT_MAX;
                if(coins[i]<=j) pick=1+dp[i][j-coins[i]];
                dp[i][j]=min(pick,notPick);
            }
            
        }
        int ans=dp[coins.size()-1][amount];
        return ans>=1e9 ? -1 : ans;
    }
};